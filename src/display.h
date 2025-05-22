#pragma once

#ifndef DISPLAY_H
#define DISPLAY_H

#include "speedtracker.h"

#define SCREEN_WIDTH                                            536
#define SCREEN_HEIGHT                                           240

#define SCREEN_BACKGROUND_COLOR                                 lv_color_black()


/////////////////////////////////////////////////
//
// All display function prototypes
//
/////////////////////////////////////////////////
bool dispInitialize();
uint32_t dispTaskHandler();

// MAIN display functions
bool dispInitialize_MAIN();
void dispInitializeUIStyles_MAIN();
void dispInitializeUIObjects_MAIN();void dispUpdateSpeedometer(uint16_t speed);
void dispHomeButtonPressed(void* obj);
void dispDrawSplashScreen();
void dispClearSplashScreen();
void dispDrawMACAddress();

// PROVISION display functions
bool dispInitialize_PROVISION(bool shutdown);
void dispInitializeUIStyles_PROVISION();
void dispInitializeUIObjects_PROVISION();
void dispUpdateProvisionLabel(const char *text, bool clear);

#endif // DISPLAY_H