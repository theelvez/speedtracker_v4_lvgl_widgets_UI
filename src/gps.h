#ifndef GPS_H
#define GPS_H

// Required for the SparkFun u-blox library using serial communication
#include <SoftwareSerial.h>
#include <SparkFun_u-blox_GNSS_v3.h>


// GPS coordinate data type
typedef struct _GPS_COORDINATE {
  double latitude;
  double longitude;
}GPS_COORDINATE, *PGPS_COORDINATE;


// GPS bounding box data type, a convex polygon.
typedef struct _GPS_BOUNDING_BOX{
  GPS_COORDINATE *verticesPointer; // Pointer to an array of vertices.
  int numVertices;                // Number of vertices in the polygon.
}GPS_BOUNDING_BOX, *PGPS_BOUNDING_BOX;


// GPS dynamic display data
typedef struct _GPS_DATA {
  uint8_t fixType;
  uint8_t satellitesInView;
  uint16_t speedMph;
  double currentLatitude;
  double currentLongitude;
  uint32_t currentAltitude;
  double currentPressure;
  double currentTemperature;
  float pressureBaseline;
  bool finishLineCrossed;
  bool speedtrackingActive;
  uint32_t lastHomeButtonPressMillis;
  fs::File gpsRunDataFile;
  bool gpsRunDataFileBusy;
  fs::File gpsConfigDataFile;
  bool gpsConfigDataFileBusy;
  uint8_t month;
  uint8_t day;
  uint16_t year;
  uint8_t hour;
  uint8_t minute;
  uint8_t second;
}GPS_DATA, *PGPS_DATA;


// GPS update frequency     
#define GPS_UPDATE_FREQUENCY                                    5 // 5 Hz


// Various conversion factors
#define METERS_TO_FEET                                          (3.28084)
#define METERS_TO_INCHES                                        (39.3701)
#define METERS_TO_MM                                            (1000)
#define PASCALS_TO_PSI                                          (0.000145038)
#define PASCALS_TO_BAR                                          (0.00001)
#define PASCALS_TO_ATM                                          (0.00000986923)
#define PASCALS_TO_MMHG                                         (0.00750062)
#define CELSIUS_TO_FAHRENHEIT(celsius)                          (((celsius) * 9/5 + 32))
#define CELSIUS_TO_KELVIN(celsius)                              (((celsius) + 273.15))
#define CELSIUS_TO_RANKINE(celsius)                             (((celsius) * 9/5 + 491.67))


// Function prototypes
bool gpsInitialize();
double gpsConvertCoordinatesToDegrees(int32_t coordinate);
double gpsConvertMmPerSecToMph(double speedInMmPerSec);
double gpsGetSpeed();
double gpsGetLongitudeDegrees();
double gpsGetLatitudeDegrees();
uint32_t gpsGetAltitudeMeters();
uint32_t gpsGetAltitudeMillimeters();
uint32_t gpsGetAltitudeFeet();
void gpsUpdateDisplayAndRunInfoData();
bool gpsCheckFinishLineCrossed();
bool gpsCheckFinishLineCrossed();



// // Global variables
extern SFE_UBLOX_GNSS_SERIAL gps;
extern volatile bool mpuInterruptFired;
extern lv_obj_t *gpsInBoxLED;
extern lv_obj_t *gpsFixOKLED;
extern lv_obj_t *gpsSatellitesInViewLabel;
extern lv_obj_t *gpsUTCTimeLabel;
extern GPS_DATA gpsDisplayData;

#endif // GPS_H