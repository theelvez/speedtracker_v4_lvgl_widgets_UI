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
#include <XPowersLibInterface.hpp>
#include <SparkFun_u-blox_GNSS_v3.h>


//////////////////////////////////////
//
// Project includes
//
//////////////////////////////////////
#include "config.h"
#include "display.h"


//////////////////////////////////////
//
// Global variables
//
//////////////////////////////////////
extern LilyGo_AMOLED amoled;


// Generic definitions				            
#define FALSE                               				            0
#define TRUE                                				            1


// I2C pin definitions
#define I2C_SDA_PIN                         				            3
#define I2C_SCL_PIN                         				            2

#endif // SPEEDTRACKER_H