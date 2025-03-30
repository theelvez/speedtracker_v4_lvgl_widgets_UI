#include "speedtracker.h"


// GPS display data
GPS_DATA gpsDisplayData;

GPS_COORDINATE gpsSafewayFinishLineVertices[4] = {
  {47.54162, -122.04685}, //GPS_FINISH_LINE_RIGHT_ENTER,
  {47.54196, -122.04687}, //GPS_FINISH_LINE_RIGHT_EXIT,
  {47.54196, -122.04721}, //GPS_FINISH_LINE_LEFT_EXIT,
  {47.54163, -122.04722}  //GPS_FINISH_LINE_LEFT_ENTER
};

GPS_COORDINATE gpsExit13FinishLineVertices[4] = {
  {47.56337, -122.09297}, //GPS_FINISH_LINE_RIGHT_ENTER,
  {47.56772, -122.10075}, //GPS_FINISH_LINE_RIGHT_EXIT,
  {47.56564, -122.10362}, //GPS_FINISH_LINE_LEFT_EXIT,
  {47.56081, -122.09638}  //GPS_FINISH_LINE_LEFT_ENTER 
};


// Vertices should be defined in order (clockwise or counter-clockwise) for a convex polygon.
const GPS_BOUNDING_BOX gpsBoundingBoxes[] = 
{
  {
    gpsSafewayFinishLineVertices,
    sizeof(gpsSafewayFinishLineVertices) / sizeof(gpsSafewayFinishLineVertices[0])
  },
  {
    gpsExit13FinishLineVertices,
    sizeof(gpsExit13FinishLineVertices) / sizeof(gpsExit13FinishLineVertices[0])
  }
};
  

// GPS interface
SFE_UBLOX_GNSS_SERIAL gps;
SoftwareSerial gpsSerial(RX, TX);


//
// Define the task handle for the GPS time resolved task
//

TaskHandle_t gpsUTCTimeResolvedTask = NULL;


/**
 * @brief This function is the task handler for the GPS time resolved task.
*/
void gpsUTCTimeResolvedTaskHandler(void *pvParameters) {

  while (true) {

    //
    // Check if the GPS time has been resolved
    //

    if (gps.getTimeFullyResolved()) {

      //
      // Print the current date and time to the serial port
      //

      Serial.printf("****Current date and time: %d/%d/%d %d:%d:%d****\n",
                    gps.getYear(),
                    gps.getMonth(),
                    gps.getDay(),
                    gps.getHour(),
                    gps.getMinute(),
                    gps.getSecond());


      //
      // Update the GPS display data with the current date and time
      //

      gpsDisplayData.month = gps.getMonth();
      gpsDisplayData.day = gps.getDay();
      gpsDisplayData.year = gps.getYear();
      gpsDisplayData.hour = gps.getHour();
      gpsDisplayData.minute = gps.getMinute();
      gpsDisplayData.second = gps.getSecond();


      //
      // Print the current date and time to the run data file
      //

      gpsDisplayData.gpsRunDataFile.printf("GPS_TIME_RESOLUTION_COMPLETE @ %02d/%02d/%02d %02d:%02d:%02d\n",
                                           gpsDisplayData.year,
                                           gpsDisplayData.month,
                                           gpsDisplayData.day,
                                           gpsDisplayData.hour,
                                           gpsDisplayData.minute,
                                           gpsDisplayData.second);

      //
      // Flush the run data file
      //
      
      gpsDisplayData.gpsRunDataFile.flush();

      
      break;
    }

    delay(1000);
  }

  vTaskDelete(NULL);
}

void newNAVSAT(UBX_NAV_SAT_data_t *ubxDataStruct) {
  // Print the number of satellites in view
  Serial.printf("Number of satellites in view: %d\n",
                ubxDataStruct->header.numSvs);

  // Print the satellite ID and signal strength for each satellite
  for (int i = 0; i < ubxDataStruct->header.numSvs; i++) {
    Serial.printf("GNSS/Satellite ID: %d/%d, Signal strength: %d\n",
                  ubxDataStruct->blocks[i].svId,
                  ubxDataStruct->blocks[i].gnssId,
                  ubxDataStruct->blocks[i].cno);
  }
}

/**
 * @brief This function initializes the GPS module.
*/
bool gpsInitialize() {

  //
  // Initialize the GPS serial port
  //

  gpsSerial.begin(115200);


  //
  // Initialize the GPS module
  //

  if (gps.begin(gpsSerial) == false)
  {
    Serial.println("####gps.begin() failed.####");
    return false;
  }


  //
  // Configure the GPS UART port.
  //

  if (!gps.setUART1Output(COM_TYPE_UBX)) {
    Serial.println("####Failed to set UART1 output.####");
    return false;
  } else {
    Serial.println("****Set UART1 output to UBX only.****");
  }


  //
  // Create a new run data file. Name it with the current date and time as such: "gps_run_data_YYYYMMDD_HHMMSS.txt"
  //

  char gpsRunDataFileName[] = "/gps_run_data.txt\0";


  gpsDisplayData.gpsRunDataFile = SD.open(gpsRunDataFileName,
                                          FILE_APPEND);

  
  //                                          
  // Check if the file is open
  //
  
  if (!gpsDisplayData.gpsRunDataFile) {
    Serial.printf("####Failed to open file %s.####\n",
                  gpsRunDataFileName);

    return false;
  } else {
    Serial.printf("****Opened file %s.****\n",
                  gpsRunDataFileName);


    //
    // Write the current date and time to the run data file
    //

    gpsDisplayData.gpsRunDataFile.printf("GPS_BOOT_START @ %02d/%02d/%02d %02d:%02d:%02d\n",
                                         gps.getYear(),
                                         gps.getMonth(),
                                         gps.getDay(),
                                         gps.getHour(),
                                         gps.getMinute(),
                                         gps.getSecond()); 

  }


  //
  // Open the GPS config data file for reading
  //

  gpsDisplayData.gpsConfigDataFile = SD.open("/gps_config_data.txt",
                                             FILE_READ);

  if (!gpsDisplayData.gpsConfigDataFile) {
    Serial.println("####Failed to open gps_config_data.txt file.####");
    
    //
    // Spin forever
    //

    while (true) {
      delay(1000);
    }
    
    return false;
  } else {
    Serial.println("****Opened gps_config_data.txt file.****");


    //
    // Print out the contents of the file
    //

    while (gpsDisplayData.gpsConfigDataFile.available()) {
      Serial.write(gpsDisplayData.gpsConfigDataFile.read());
    }

  }                                             


  //
  // Output the measurement and navigation rates to the serial port.
  //

  Serial.printf("Measurement rate: %d ms\n",
                gps.getMeasurementRate());

  Serial.printf("Navigation rate: %d ms\n",
                gps.getNavigationRate());


  //
  // Get the current GPS sattelite information
  //

  if (!gps.getVal8(UBLOX_CFG_SIGNAL_GPS_ENA)) {
    Serial.println("GPS signal disabled.");
  } else {
    Serial.println("GPS signal enabled.");
  }

  delay(100);


  if (!gps.getVal8(UBLOX_CFG_SIGNAL_GAL_ENA)) {
    Serial.println("GAL signal disabled.");
  } else {
    Serial.println("GAL signal enabled.");
  }

  delay(100);


  if (!gps.getVal8(UBLOX_CFG_SIGNAL_BDS_ENA)) {
    Serial.println("BDS signal disabled.");
  } else {
    Serial.println("BDS signal enabled.");
  }

  delay(100);


  if (!gps.getVal8(UBLOX_CFG_SIGNAL_GLO_ENA)) {
    Serial.println("GLO signal disabled.");
  } else {
    Serial.println("GLO signal enabled.");
  }

  delay(100);


  if (!gps.getVal8(UBLOX_CFG_SIGNAL_QZSS_ENA)) {
    Serial.println("QZSS signal disabled.");
  } else {
    Serial.println("QZSS signal enabled.");
  }

  delay(100);


  if (!gps.getVal8(UBLOX_CFG_SIGNAL_NAVIC_ENA)) {
    Serial.println("NAVIC signal disabled.");
  } else {
    Serial.println("NAVIC signal enabled.");
  }

  delay(100);


  //
  // Initialize the rest of the GPS display data
  //

  gpsDisplayData.fixType = 0;                       // GNSS fix type - 0: no fix, 1: dead reckoning, 2: 2D fix, 3: 3D fix
  gpsDisplayData.satellitesInView = 0;              // Number of GNSS satellites in view
  gpsDisplayData.currentAltitude = 0;               // Current GNSS altitude in meters
  gpsDisplayData.currentLatitude = 0.0;             // Current GNSS latitude in degrees
  gpsDisplayData.currentLongitude = 0.0;            // Current GNSS longitude in degrees
  gpsDisplayData.pressureBaseline = 0.0;            // Baseline atmospheric pressure in Pascals
  gpsDisplayData.currentTemperature = 0.0;          // Current temperature in degrees Celsius
  gpsDisplayData.currentPressure = 0.0;             // Current atmospheric pressure in Pascals
  gpsDisplayData.finishLineCrossed = false;         // Flag to indicate if the finish line has been crossed
  gpsDisplayData.speedtrackingActive = false;       // Flag to indicate if the speed tracking is active
  gpsDisplayData.lastHomeButtonPressMillis = 0;     // Millis value of the last home button press
  gpsDisplayData.gpsRunDataFileBusy = false;        // Flag to indicate if the run data file is busy
  gpsDisplayData.gpsConfigDataFileBusy = false;     // Flag to indicate if the config data file is busy
  gpsDisplayData.month = 0;                         // Current month reported by the GNSS module
  gpsDisplayData.day = 0;                           // Current day reported by the GNSS module
  gpsDisplayData.year = 0;                          // Current year reported by the GNSS module
  gpsDisplayData.hour = 0;                          // Current hour reported by the GNSS module
  gpsDisplayData.minute = 0;                        // Current minute reported by the GNSS module
  gpsDisplayData.second = 0;                        // Current second reported by the GNSS module


  //
  // Get the current time from the GPS module
  //

  if (!gps.getTimeFullyResolved()) {

    Serial.println("####Waiting to resolve time with GNSS sattelites####");
 

    //
    // Record the waiting for time resolution to the SD card
    //

    gpsDisplayData.gpsRunDataFile.printf("GPS_TIME_RESOLUTION_START @ %02d/%02d/%02d %02d:%02d:%02d\n",
                                         gps.getYear(),
                                         gps.getMonth(),
                                         gps.getDay(),
                                         gps.getHour(),
                                         gps.getMinute(),
                                         gps.getSecond());


    //
    // Kick off the LED blinker task
    //

    xTaskCreate(gpsUTCTimeResolvedTaskHandler,
                "GNSS Time",
                4096,
                NULL,
                1,
                &gpsUTCTimeResolvedTask);

  } else {

    Serial.printf("****Current date and time: %02d/%02d/%02d %02d:%02d:%02d****\n",
                  gps.getYear(),
                  gps.getMonth(),
                  gps.getDay(),
                  gps.getHour(),
                  gps.getMinute(),
                  gps.getSecond());


    //
    // Record the waiting for time resolution to the SD card
    //

    gpsDisplayData.gpsRunDataFile.printf("GPS_TIME_RESOLUTION_COMPLETE @ %02d/%02d/%02d %02d:%02d:%02d\n",
                                         gps.getYear(),
                                         gps.getMonth(),
                                         gps.getDay(),
                                         gps.getHour(),
                                         gps.getMinute(),
                                         gps.getSecond());                  
  }
  

  //
  // Write the current date and time to the run data file
  //

  gpsDisplayData.gpsRunDataFile.printf("GPS_BOOT_COMPLETE @ %02d/%02d/%02d %02d:%02d:%02d\n",
                                       gps.getYear(),
                                       gps.getMonth(),
                                       gps.getDay(),
                                       gps.getHour(),
                                       gps.getMinute(),
                                       gps.getSecond()); 

  //
  // Flush the run data file to the SD card
  //

  gpsDisplayData.gpsRunDataFile.flush();

  return true;
}


/**
 * @brief This function converts the GPS coordinate from the integer format to degrees. 
*/
double gpsConvertCoordinatesToDegrees(int32_t coordinate) {
  double degrees = coordinate / 10000000.0;

  // Serial.printf("Coordinate: %d, Degrees: %f\n",
  //               coordinate,
  //               degrees);

  return degrees;
}


/**
 * @brief This function converts the GPS speed from mm/s to mph.
*/
double gpsConvertMmPerSecToMph(double speedInMmPerSec) {
  double conversionFactor = 0.00223694;
  return speedInMmPerSec * conversionFactor;
}


/**
 * @brief This function returns the current GPS speed in mph.
*/
double gpsGetSpeed() {
  return gpsConvertMmPerSecToMph(gps.getGroundSpeed());
}


/**
 * @brief This function returns the current GPS longitude in degrees.
*/
double gpsGetLongitudeDegrees() {
  return gpsConvertCoordinatesToDegrees(gps.getLongitude());
}


/**
 * @brief This function returns the current GPS latitude in degrees.
*/
double gpsGetLatitudeDegrees() {
  return gpsConvertCoordinatesToDegrees(gps.getLatitude());
}

/**
 * @brief This function converts UTC time to PDT time.
 */
void gpsConvertUTCToPDT(uint8_t* month,
                        uint8_t* day,
                        uint16_t* year,
                        uint8_t* hour,
                        uint8_t* minute,
                        uint8_t* second) {

  //
  // Convert the UTC time to PDT (Note that all input values are unsigned integers)
  //

  if (*hour >= 7) {
    *hour -= 7;
  } else {
    *hour = 24 - (7 - *hour);
    if (*day > 1) {
      *day -= 1;
    } else {
      if (*month > 1) {
        *month -= 1;
        *day = 31;
      } else {
        *year -= 1;
        *month = 12;
        *day = 31;
      }
    }
  }
}


/**
 * @brief Function that updates the GPS display data structure
 * 
*/
void gpsUpdateDisplayAndRunInfoData( ) {

  //
  // Get the GNSS fix type
  //

  gpsDisplayData.fixType = gps.getFixType();


  //
  // Get the current speed
  //

  gpsDisplayData.speedMph = gpsGetSpeed();



  //
  // Update the GPS display data
  //

  gpsDisplayData.satellitesInView = gps.getSIV();


  //
  // Get the current lat/lng data
  //

  gpsDisplayData.currentLatitude = gpsGetLatitudeDegrees();
  gpsDisplayData.currentLongitude = gpsGetLongitudeDegrees();


  //
  // Set the GPS time data if the time has been resolved
  //
  
  if (gps.getTimeFullyResolved() == true) {
    gpsDisplayData.month = gps.getMonth();
    gpsDisplayData.day = gps.getDay();  
    gpsDisplayData.year = gps.getYear();
    gpsDisplayData.hour = gps.getHour();
    gpsDisplayData.minute = gps.getMinute();
    gpsDisplayData.second = gps.getSecond();

    gpsConvertUTCToPDT(&gpsDisplayData.month,
                       &gpsDisplayData.day,
                       &gpsDisplayData.year,
                       &gpsDisplayData.hour,
                       &gpsDisplayData.minute,
                       &gpsDisplayData.second);
  } else {
    gpsDisplayData.month = 0;
    gpsDisplayData.day = 0;  
    gpsDisplayData.year = 0;
    gpsDisplayData.hour = 0;
    gpsDisplayData.minute = 0;
    gpsDisplayData.second = 0;
  }
  

  // //
  // // If the speed tracking is active, update the speed and location data in the run data file
  // //

  // if (gpsDisplayData.speedtrackingActive == true) {

  //   //
  //   // Check if the run data file is busy
  //   //

  //   if (gpsDisplayData.gpsRunDataFileBusy == false) {

  //     //
  //     // Set the run data file to busy
  //     //

  //     gpsDisplayData.gpsRunDataFileBusy = true;


  //     //
  //     // Write the current speed and location data to the run data file
  //     //

  //     gpsDisplayData.gpsRunDataFile.printf("GPS_SPEED @ %02d/%02d/%02d %02d:%02d:%02d: %f mph, %f lat, %f lng\n",
  //                                          gpsDisplayData.year,
  //                                          gpsDisplayData.month,
  //                                          gpsDisplayData.day,
  //                                          gpsDisplayData.hour,
  //                                          gpsDisplayData.minute,
  //                                          gpsDisplayData.second,
  //                                          gpsDisplayData.speedMph,
  //                                          gpsDisplayData.currentLatitude,
  //                                          gpsDisplayData.currentLongitude);


  //     //
  //     // Flush the run data file to the SD card
  //     //

  //     gpsDisplayData.gpsRunDataFile.flush();


  //     //
  //     // Set the run data file to not busy
  //     //

  //     gpsDisplayData.gpsRunDataFileBusy = false;
  //   }
  // }


  return;
}


// Computes the cross product of the vectors (a -> b) and (a -> c)
double crossProduct(GPS_COORDINATE a, GPS_COORDINATE b, GPS_COORDINATE c) {
    return (b.latitude - a.latitude) * (c.longitude - a.longitude) -
           (b.longitude - a.longitude) * (c.latitude - a.latitude);
}


/**
 * @brief Function that checks if a point is within a polygon.
 */
bool isPointInPolygon(const GPS_COORDINATE &p, const GPS_COORDINATE poly[], int n) {
  bool hasPositive = false, hasNegative = false;
  for (int i = 0; i < n; i++) {
      double cp = crossProduct(poly[i], poly[(i + 1) % n], p);
      if (cp > 0)
          hasPositive = true;
      else if (cp < 0)
          hasNegative = true;
      // If cross products of different signs are found, the point is outside.
      if (hasPositive && hasNegative)
          return false;
  }
  return true;
}


// Checks if the given GPS coordinate is within the bounding box.
bool isWithinBoundingBox(GPS_COORDINATE currentPosition) {

  //
  // Loop through the bounding box array
  //

  for (int i = 0; i < sizeof(gpsBoundingBoxes) / sizeof(gpsBoundingBoxes[0]); i++) {

    //
    // Check if the current position is within the bounding box
    //

    if (isPointInPolygon(currentPosition, gpsBoundingBoxes[i].verticesPointer, gpsBoundingBoxes[i].numVertices)) {
      return true;
    }
  }

  return false;

}


/**
 * @brief Function that checks if the vehicle has crossed the start or finish lines.
 */
bool gpsCheckFinishLineCrossed() {

  //
  // Get the current latitude and longitude
  //

  GPS_COORDINATE currentPosition = {gpsDisplayData.currentLatitude,
                                    gpsDisplayData.currentLongitude};


  //
  // Check if the vehicle is within the bounding box
  //

  if (isWithinBoundingBox(currentPosition)) {

    //
    // Set the finish line crossed flag
    //

    gpsDisplayData.finishLineCrossed = true;

    return true;

  } else {

    return false;

  }

  return false;
}
    

