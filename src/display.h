#ifndef DISPLAY_H
#define DISPLAY_H


#define SCREEN_WIDTH                                            536
#define SCREEN_HEIGHT                                           240

#define SCREEN_BACKGROUND_COLOR                                 lv_color_black()

// defines related to the speedometer numeric label
#define SPEED_LABEL_TEXT_COLOR                                  lv_color_white()
#define SPEED_LABEL_BG_COLOR                                    lv_color_black()
#define SPEED_LABEL_OPACITY                                     LV_OPA_TRANSP   
#define SPEED_LABEL_ALIGNMENT                                   LV_ALIGN_BOTTOM_RIGHT   
#define SPEED_LABEL_FONT                                        AmericanCaptain260
#define SPEED_LABEL_WIDTH                                       (((SCREEN_WIDTH / 3) * 2) - 10)
#define SPEED_LABEL_HEIGHT                                      240
#define SPEED_LABEL_TEXT_ALIGNMENT                              LV_TEXT_ALIGN_RIGHT
#define SPEED_LABEL_X_POSITION                                  0
#define SPEED_LABEL_Y_POSITION                                  0


// defines related to the speedometer MPH label
#define MPH_LABEL_TEXT_COLOR                                    lv_color_white()
#define MPH_LABEL_BG_COLOR                                      lv_color_black()
#define MPH_LABEL_OPACITY                                       LV_OPA_TRANSP
#define MPH_LABEL_ALIGNMENT                                     LV_ALIGN_BOTTOM_LEFT
#define MPH_LABEL_FONT                                          AmericanCaptain80
#define MPH_LABEL_WIDTH                                         SCREEN_WIDTH / 3
#define MPH_LABEL_HEIGHT                                        SCREEN_HEIGHT / 5
#define MPH_LABEL_X_POSITION                                    ((lv_obj_get_width(speedometerNumericLabel)))
#define MPH_LABEL_Y_POSITION                                    ((lv_obj_get_height(speedometerNumericLabel) - lv_obj_get_height(speedometerMPHLabel)))


// defines related to the "recording" red LED
#define RECORDING_LED_COLOR                                     (lv_palette_main(LV_PALETTE_RED))
#define RECORDING_LED_X_POSITION                                (SCREEN_WIDTH - 30)
#define RECORDING_LED_Y_POSITION                                10
#define RECORDING_LED_RADIUS                                    10
#define RECORDING_LED_WIDTH                                     (RECORDING_LED_RADIUS * 2)
#define RECORDING_LED_HEIGHT                                    (RECORDING_LED_RADIUS * 2)


// defines related to GPS in box LED
#define GPS_IN_BOX_LED_COLOR                                    (lv_palette_main(LV_PALETTE_GREEN))
#define GPS_IN_BOX_LED_X_POSITION                               (RECORDING_LED_X_POSITION - 30)
#define GPS_IN_BOX_LED_Y_POSITION                               RECORDING_LED_Y_POSITION
#define GPS_IN_BOX_LED_RADIUS                                   10
#define GPS_IN_BOX_LED_WIDTH                                    (GPS_IN_BOX_LED_RADIUS * 2)
#define GPS_IN_BOX_LED_HEIGHT                                   (GPS_IN_BOX_LED_RADIUS * 2)


// defines related to the GPS fix OK LED
#define GPS_FIX_OK_LED_COLOR                                    (lv_palette_main(LV_PALETTE_BLUE))
#define GPS_FIX_OK_LED_X_POSITION                               (GPS_IN_BOX_LED_X_POSITION - 30)
#define GPS_FIX_OK_LED_Y_POSITION                               RECORDING_LED_Y_POSITION
#define GPS_FIX_OK_LED_RADIUS                                   10
#define GPS_FIX_OK_LED_WIDTH                                    (GPS_FIX_OK_LED_RADIUS * 2)
#define GPS_FIX_OK_LED_HEIGHT                                   (GPS_FIX_OK_LED_RADIUS * 2)


// defines related to the GPS sats in view label
#define GPS_SATS_IN_VIEW_LABEL_WIDTH                            50
#define GPS_SATS_IN_VIEW_LABEL_HEIGHT                           30
#define GPS_SATS_IN_VIEW_LABEL_X_POSITION                       (GPS_FIX_OK_LED_X_POSITION - GPS_FIX_OK_LED_WIDTH - 20)
#define GPS_SATS_IN_VIEW_LABEL_Y_POSITION                       0
#define GPS_SATS_IN_VIEW_LABEL_FONT                             AmericanCaptain36
#define GPS_SATS_IN_VIEW_LABEL_FONT_COLOR                       lv_color_white()


// defines related to the GPS UTC time label
#define GPS_UTC_TIME_LABEL_WIDTH                                300
#define GPS_UTC_TIME_LABEL_HEIGHT                               30
#define GPS_UTC_TIME_LABEL_X_POSITION                           0
#define GPS_UTC_TIME_LABEL_Y_POSITION                           0
#define GPS_UTC_TIME_LABEL_FONT                                 AmericanCaptain36
#define GPS_UTC_TIME_LABEL_FONT_COLOR                           lv_color_white()


// defines related to the MCU voltage label
#define MCU_VOLTAGE_LABEL_WIDTH                                 100
#define MCU_VOLTAGE_LABEL_HEIGHT                                30
#define MCU_VOLTAGE_LABEL_X_POSITION                            (GPS_UTC_TIME_LABEL_WIDTH + 10)
#define MCU_VOLTAGE_LABEL_Y_POSITION                            0
#define MCU_VOLTAGE_LABEL_FONT                                  AmericanCaptain36
#define MCU_VOLTAGE_LABEL_FONT_COLOR                            lv_color_white()


// Function prototypes
bool dispInitialize();
uint32_t dispTaskHandler();
void dispUpdateSpeedometer(uint16_t speed);
void dispInitializeUIStyles();
void dispInitializeUIObjects();
void dispHomeButtonPressed(void* obj);
void dispDrawSplashScreen();
void dispClearSplashScreen();
void dispDrawMACAddress();

// Global variables
extern lv_obj_t *mcuRecordingLED;

#endif // DISPLAY_H