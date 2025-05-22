#ifndef SPEEDTRACKER_H
#define SPEEDTRACKER_H

//////////////////////////////////////
//
// Board specific includes
//
//////////////////////////////////////
#include <LilyGo_AMOLED.h>


//////////////////////////////////////
//
// Bluetooth related includes
//
//////////////////////////////////////
#include <BLEDevice.h>
#include <BLEUtils.h>
#include <BLEBeacon.h>


//////////////////////////////////////
//
// Networking related includes
//
//////////////////////////////////////
#include <WiFi.h>
#include <HTTPClient.h>
#include <esp_mac.h>


//////////////////////////////////////
//
// Graphics related includes
//
//////////////////////////////////////
#include <LV_Helper.h>
#include <lvgl.h>
#include "images/splash.h"


//////////////////////////////////////
//
// Library includes
//
//////////////////////////////////////
#include <SD.h>


//////////////////////////////////////
//
// Project includes
//
//////////////////////////////////////
#include "gps.h"
#include "display.h"
#include "display_PROVISION.h"
#include "display_MAIN.h"
#include "battery.h"
#include "mcu.h"


///////////////////////////////////////
//
// Generic defines
//
///////////////////////////////////////
#define FALSE                               				            0
#define TRUE                                				            1


/////////////////////////////////////////
//
// Typedefs
//
/////////////////////////////////////////

typedef struct _INITIALIZATION_DATA {
  bool i2cBusInitialized;
  bool amoledInitialized;
  bool lvglInitialized;
  bool sdCardInitialized;
  bool bleInitialized;
  bool wifiInitialized;
  bool gpsInitialized;
  bool displayInitialized;
  bool batteryInitialized;
  bool mcuInitialized;
}INITIALIZATION_DATA, *PINITIALIZATION_DATA;


typedef struct _DEVICE_DATA {
  bool deviceInitialized;
  bool deviceProvisioned;
  String runDataFileName;
  String configDataFileName;
}DEVICE_DATA, *PDEVICE_DATA;

//////////////////////////////////////
//
// External global variables
//
//////////////////////////////////////
extern LilyGo_AMOLED amoled;
extern bool dispSplashScreenDisplayed;
extern lv_obj_t *mcuVoltageLabel;
extern MCU_DATA mcuData;
extern bool isProvisioning;
extern INITIALIZATION_DATA initializationData;
extern DEVICE_DATA deviceData;
extern fs::SDFS* sdCardPointer;

#endif // SPEEDTRACKER_H  