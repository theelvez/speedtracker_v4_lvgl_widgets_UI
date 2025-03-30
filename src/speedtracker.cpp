#include "speedtracker.h"

//
// Global AMOLED object
//

LilyGo_AMOLED amoled;


/**
 * @brief Function checks if a number is bounded by two other numbers
 * 
 * @param value The value to check
 * @param boundingValue1 The first bounding value
 * @param boundingValue2 The second bounding value
 * 
 * @return true if the value is bounded by the provided bounds
 * @return false if the value is not bounded by the provided bounds
 * 
*/
bool utilIsBoundedBy(int value, int boundingValue1, int boundingValue2) {

  //
  // Get the lower and upper bounds
  //

  int lowerBound = min(boundingValue1, boundingValue2);
  int upperBound = max(boundingValue1, boundingValue2);


  //
  // Check if the value is bounded by the provided bounds
  //

  if ((value >= lowerBound) && (value <= upperBound)) {
    return true;
  }

  return false;
}

int orientation(GPS_COORDINATE p, GPS_COORDINATE q, GPS_COORDINATE r) {
    double val = (q.longitude - p.longitude) * (r.latitude - p.latitude) - (q.latitude - p.latitude) * (r.longitude - p.longitude);
    if (val == 0) return 0;  // Collinear
    return (val > 0) ? 1 : 2;  // Clockwise or Counterclockwise
}

bool doIntersect(GPS_COORDINATE p1, GPS_COORDINATE q1, GPS_COORDINATE p2, GPS_COORDINATE q2) {
    int o1 = orientation(p1, q1, p2);
    int o2 = orientation(p1, q1, q2);
    int o3 = orientation(p2, q2, p1);
    int o4 = orientation(p2, q2, q1);

    if (o1 != o2 && o3 != o4)
        return true;

    return false;
}


/**
 * @brief Global setup function
 * 
*/
void setup() {

  //
  // Initialize the counter for errors encountered during initialization 
  //

  uint8_t errorCount = 0;


  //
  // Initialize the serial port and wait for the serial port to be ready
  //

  Serial.begin(115200);
  delay(100);

  Serial.println("****Serial device ready.****");


  //
  // Initialize the I2C bus
  //

  Serial.println("****Initializing the I2C bus.****");

  if (Wire.begin(I2C_SDA_PIN,
                 I2C_SCL_PIN)) {
    Serial.println("****I2C bus initialized.****");
  } else {
    Serial.println("####Failed to initialize the I2C bus.####");
    errorCount++;
  }


  //
  // Initialize the display and the display subsystem
  //

  Serial.println("****Initializing the display.****");

  if (!dispInitialize()) {
    Serial.println("####Failed to initialize the display.####");
    errorCount++;
  } else {
    Serial.println("****Initialized the display.****");
  }


  // //
  // // Initialize the battery subsystem
  // //

  // if (!batteryInitialize()) {
  //   Serial.println("####Failed to initialize the battery subsystem.####");
  //   errorCount++;
  // } else {
  //   Serial.println("****Initialized the battery subsystem.****");
  // }


  //
  // Initialize the SD card subsystem
  //

  if (!SD.begin()) {
    Serial.println("####Failed to initialize the SD library.####\n");
    errorCount++;


    //
    // Draw the MAC address on the screen in large font using the LVGL graphics engine
    //

    dispDrawMACAddress();


    //
    // Freeze the processor in a loop to indicate that the SD card initialization failed
    //

    while (true)
    {
      delay(1000);
    }
    

  } else {
    Serial.println("****Initialized SD card.****");


    //
    // Dump the contents of the SD card to the serial port
    //

    Serial.println("****Dumping the contents of the SD card.****");

    File root = SD.open("/");

    while (true) {
      File entry = root.openNextFile();

      if (!entry) {
        break;
      }

      Serial.printf("%s:\n",
                    entry.name());

      Serial.println("\n----------------------------------------------");

      while (entry.available()) {
        Serial.write(entry.read());
      }


      Serial.printf("\n----------------------------------------------\n");

      entry.close();
    }

    root.close();
  }

  
  //
  // Get the MAC address of the device 
  //
  
  esp_read_mac(mcuData.mac_address,
               ESP_MAC_WIFI_STA);

  // Stash the Mac address for later use
  mcuData.macAddressString = String(mcuData.mac_address[0], HEX) + ":" +
                             String(mcuData.mac_address[1], HEX) + ":" +
                             String(mcuData.mac_address[2], HEX) + ":" +
                             String(mcuData.mac_address[3], HEX) + ":" +
                             String(mcuData.mac_address[4], HEX) + ":" +
                             String(mcuData.mac_address[5], HEX);


  //
  // Initialize the GPS module
  //

  Serial.println("****Initializing the GPS module.****");

  if (!gpsInitialize()) {
    Serial.println("####Failed to initialize the GPS module.####");
    errorCount++;
  } else {
    Serial.println("****Initialized the GPS module.****");
  }


  //
  // Print the processor frequency, system voltage and MAC address to the serial port
  //

  Serial.printf("CPU Frequency: %d MHz\n",
                getCpuFrequencyMhz());

  Serial.printf("MAC Address: %s\n",
                mcuData.macAddressString.c_str());

  Serial.printf("System Voltage: %d.%02dv\n",
                amoled.getSystemVoltage() / 1000,
                (amoled.getSystemVoltage() % 1000)/10);                

  Serial.printf("Vbus Voltage: %d.%02dv\n",
                amoled.getVbusVoltage() / 1000,
                (amoled.getVbusVoltage() % 1000)/10);


  //
  // Print out the error count and enter a "freeze" loop if there were any errors during initialization
  //

  if (errorCount > 0) {
    Serial.printf("####There were %d errors during initialization, freezing processor.####\n", errorCount);
  } else {
    Serial.println("****Device is ready.****");
  }

  return;
}


/**
 * @brief Global loop function
 * 
 *      _____ __  __ _____   ____  _____ _______       _   _ _______ 
 *     |_   _|  \/  |  __ \ / __ \|  __ \__   __|/\   | \ | |__   __|
 *       | | | \  / | |__) | |  | | |__) | | |  /  \  |  \| |  | |   
 *       | | | |\/| |  ___/| |  | |  _  /  | | / /\ \ | . ` |  | |   
 *      _| |_| |  | | |    | |__| | | \ \  | |/ ____ \| |\  |  | |   
 *     |_____|_|  |_|_|     \____/|_|  \_\ |_/_/    \_\_| \_|  |_|   
 *                                                                  
 * 
 * It is critical that the loop() function does not block, and that the
 * LVLG graphics engine is run at least once every 33ms (lv_task_handler()) to 
 * keep the display frame rate at ~20 FPS, and to keep the UI responsive and 
 * flicker free.
 *  
 */
void loop() {

  //
  // If the screen has not been cleared yet, clear the screen
  //

  if (dispSplashScreenDisplayed) {
    
    //
    // Clear the splash screen
    //

    dispClearSplashScreen();
  }


  //
  // Update the GPS display data
  //

  gpsUpdateDisplayAndRunInfoData();


  //
  // Update the speedometer display
  //

  dispUpdateSpeedometer(gpsDisplayData.speedMph);


  //
  // Check for the gps connection status
  //

  if (gpsDisplayData.fixType >= 3) {
    lv_led_on(gpsFixOKLED);
  

    //
    // Check if the finish line has been crossed
    //

    if (gpsCheckFinishLineCrossed()) {

      //
      // Turn on the LED if the vehicle crosses the finish line and set the flag
      //

      gpsDisplayData.finishLineCrossed = true;

      lv_led_on(gpsInBoxLED);
      
    } else {

      //
      // Turn off the LED if the vehicle is not within the bounding box
      //

      gpsDisplayData.finishLineCrossed = false;

      lv_led_off(gpsInBoxLED);

    }
  }


  //
  // Update the sats in view label
  //

  lv_label_set_text_fmt(gpsSatellitesInViewLabel,
                        "%02d",
                        gpsDisplayData.satellitesInView);


  //
  // Update the UTC time label
  //
  char gpsUTCTimeRecoloredString[32];

  sprintf(gpsUTCTimeRecoloredString,
          "%02d/%02d/%02d  #00FF00 %02d:%02d:%02d#",
          gpsDisplayData.month,
          gpsDisplayData.day,
          gpsDisplayData.year,
          gpsDisplayData.hour,
          gpsDisplayData.minute,
          gpsDisplayData.second);

  lv_label_set_text(gpsUTCTimeLabel,
                    gpsUTCTimeRecoloredString);


  //
  // Update the MCU voltage label
  //

  lv_label_set_text_fmt(mcuVoltageLabel,
                        "%d.%02dv",
                        amoled.getSystemVoltage() / 1000,
                        (amoled.getSystemVoltage() % 1000)/10);


  //
  // Run the display task handler
  //

  uint32_t nextTick = dispTaskHandler();


  //
  // Yield the core until next tick to allow system tasks to run 
  //

  delay(nextTick);

  
  return;
}