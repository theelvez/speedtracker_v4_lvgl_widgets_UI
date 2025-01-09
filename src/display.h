#ifndef DISPLAY_H
#define DISPLAY_H


#define SCREEN_WIDTH                                            536
#define SCREEN_HEIGHT                                           240

#define SCREEN_BACKGROUND_COLOR                                 lv_color_black()

#define SPEED_LABEL_TEXT_COLOR                                  lv_color_white()
#define SPEED_LABEL_FONT                                        AmericanCaptain240
#define SPEED_LABEL_WIDTH                                       SCREEN_WIDTH / 3
#define SPEED_LABEL_HEIGHT                                      (SCREEN_HEIGHT / 5) * 3
#define SPEED_LABEL_ALIGNMENT                                   LV_TEXT_ALIGN_CENTER
#define SPEED_LABEL_X_POSITION                                  0
#define SPEED_LABEL_Y_POSITION                                  0

#define MPH_LABEL_TEXT_COLOR                                    lv_color_white()
#define MPH_LABEL_FONT                                          AmericanCaptain80
#define MPH_LABEL_WIDTH                                         SCREEN_WIDTH / 2
#define MPH_LABEL_HEIGHT                                        SCREEN_HEIGHT / 5
#define MPH_LABEL_X_POSITION                                    ((lv_obj_get_width(speedometerNumericLabel)))
#define MPH_LABEL_Y_POSITION                                    ((lv_obj_get_height(speedometerNumericLabel) - lv_obj_get_height(speedometerMPHLabel)) - 40)



// Function prototypes
bool dispInitialize();
uint32_t dispTaskHandler();
void dispUpdateSpeedometer();
void dispInitializeUIStyles();
void dispInitializeUIObjects();
void dispHomeButtonPressed(void* obj);

#ifdef FAKE_SPEED_SOURCE
void generateFakeSpeed(TimerHandle_t xTimer);

extern bool fakeSpeedSourceActive;
#endif

#endif // DISPLAY_H