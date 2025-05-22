#pragma once

#ifndef DISPLAY_PROVISION_H
#define DISPLAY_PROVISION_H

#include "display.h"
#include <WiFi.h>
#include <WebServer.h>
#include <DNSServer.h>
#include <uri/UriRegex.h>


// defines related to the speedometer numeric label
#define PROVISION_LABEL_TEXT_COLOR                                  lv_color_white()
#define PROVISION_LABEL_BG_COLOR                                    lv_color_black()
#define PROVISION_LABEL_OPACITY                                     LV_OPA_TRANSP   
#define PROVISION_LABEL_ALIGNMENT                                   LV_ALIGN_BOTTOM_RIGHT   
#define PROVISION_LABEL_FONT                                        lv_font_montserrat_24
#define PROVISION_LABEL_WIDTH                                       (((SCREEN_WIDTH / 3) * 2) - 10)
#define PROVISION_LABEL_HEIGHT                                      240
#define PROVISION_LABEL_TEXT_ALIGNMENT                              LV_TEXT_ALIGN_RIGHT
#define PROVISION_LABEL_X_POSITION                                  0
#define PROVISION_LABEL_Y_POSITION                                  0


// Function prototypes
bool dispInitialize_PROVISION(bool shutdown);
void dispInitializeUIStyles_PROVISION();
void dispInitializeUIObjects_PROVISION();
void dispUpdateProvisionLabel(const char *text, bool clear);

#endif // DISPLAY_PROVISION_H