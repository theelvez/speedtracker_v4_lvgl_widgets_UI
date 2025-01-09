#include "speedtracker.h"

// UI Styles
lv_style_t speedometerNumericStyle;
lv_style_t speedometerMPHStyle;


// UI Objects
lv_obj_t *speedometerNumericLabel;
lv_obj_t *speedometerMPHLabel;


#ifdef FAKE_SPEED_SOURCE
bool fakeSpeedSourceActive = true;
#endif // FAKE_SPEED_SOURCE


/**
 * @brief Function that initializes the display
*/
bool dispInitialize() {

  //
  // Automatically determine the access device
  //
  
  if (!amoled.begin()) {
      while (1) {
          Serial.println("There is a problem with the device!");
          delay(1000);
      }
  } else {
      Serial.println("AMOLED device is ready!");
  }

  //
  // Initialize the LVLG graphics sub-system and helper functions
  //
  beginLvglHelper(amoled,
                  true);


  //
  // 250ms delay to allow the display to initialize
  //

  delay(250);


  //
  // Set the home button callback
  //

  amoled.setHomeButtonCallback(dispHomeButtonPressed);


  //
  // Initialize the UI styles and objects
  //
  
  Serial.println("****Initializing the UI styles and objects.****");
  dispInitializeUIStyles();
  Serial.println("****Initialized the UI styles.****");
  dispInitializeUIObjects();
  Serial.println("****Initialized the UI objects.****");


  #ifdef FAKE_SPEED_SOURCE

  //
  // Create a timer that fires every 100ms to generate a fake speed value
  //

  TimerHandle_t fakeSpeedTimer = xTimerCreate("FakeSpeedTimer",
                                              pdMS_TO_TICKS(100),
                                              pdTRUE,
                                              (void *) 0,
                                              generateFakeSpeed);

  if (fakeSpeedTimer == NULL) {
    Serial.println("####Failed to create the fake speed timer.####");
    return false;
  } else {
    Serial.println("****Created the fake speed timer.****");
  }

  //
  // Start the fake speed timer
  //

  if (xTimerStart(fakeSpeedTimer,
                  0) != pdPASS) {
    Serial.println("####Failed to start the fake speed timer.####");
    return false;
  } else {
    Serial.println("****Started the fake speed timer.****");
  }


  #endif  // FAKE_SPEED_SOURCE

  return true;
}


/**
 * @brief Function that initializes the UI styles
 */
void dispInitializeUIStyles() {

  //////////////////////////////////////////////
  //
  // Initialize the style for the speed label
  //
  //    - White, right aligned text
  //    - American Captain font
  //    - Transparent background
  //    - No scrolling
  //
  //////////////////////////////////////////////

  lv_style_init(&speedometerNumericStyle);

  lv_style_set_text_font(&speedometerNumericStyle,
                         &SPEED_LABEL_FONT);

  lv_style_set_text_color(&speedometerNumericStyle,
                          SPEED_LABEL_TEXT_COLOR);

  lv_style_set_text_align(&speedometerNumericStyle,
                          LV_TEXT_ALIGN_RIGHT);

  lv_style_set_bg_opa(&speedometerNumericStyle,
                      LV_OPA_TRANSP);

  lv_style_set_text_opa(&speedometerNumericStyle,
                        LV_OPA_COVER);


  ///////////////////////////////////////////////////
  //
  // Initialize the style for the "MPH" label
  //
  //    - White, left aligned text
  //    - American Captain font
  //    - Transparent background
  //    - No scrolling
  //
  //////////////////////////////////////////////////

  lv_style_init(&speedometerMPHStyle);

  lv_style_set_text_font(&speedometerMPHStyle,
                         &AmericanCaptain80);
                               
  lv_style_set_text_color(&speedometerMPHStyle,
                          lv_color_white());

  lv_style_set_text_align(&speedometerMPHStyle,
                          LV_TEXT_ALIGN_LEFT);

  lv_style_set_bg_opa(&speedometerMPHStyle,
                      LV_OPA_TRANSP);

  lv_style_set_text_opa(&speedometerMPHStyle,
                        LV_OPA_COVER);

  return;
}


/**
 * @brief Function that initializes the UI objects
 */
void dispInitializeUIObjects() {

  //
  // Set the background color of the entire screen
  //

  lv_obj_set_style_bg_color(lv_scr_act(),
                            SCREEN_BACKGROUND_COLOR,
                            LV_PART_MAIN);


  //
  // Create the speedometer label (use the screen as the parent object) 
  // using the speedometer style
  //

  speedometerNumericLabel = lv_label_create(lv_scr_act());

  lv_obj_add_style(speedometerNumericLabel,
                   &speedometerNumericStyle,
                   0);


  lv_label_set_long_mode(speedometerNumericLabel,
                         LV_LABEL_LONG_WRAP); 


  //
  // Set the position and initial text of the speedometer label
  //

  lv_obj_set_pos(speedometerNumericLabel,
                 0,
                 0);

  lv_label_set_text(speedometerNumericLabel,
                    "000");


  //
  // Create the speedometer MPH label (use the screen as the parent object)
  // using the MPH style
  //
  
  speedometerMPHLabel = lv_label_create(lv_scr_act());

  lv_obj_add_style(speedometerMPHLabel,
                   &speedometerMPHStyle,
                   0);

  lv_label_set_long_mode(speedometerMPHLabel,
                         LV_LABEL_LONG_WRAP); 


  //
  // Update the layout of the screen so that the MPH label is positioned correctly and
  // set the position and initial text of the speedometer MPH label
  //

  lv_obj_update_layout(lv_scr_act());

  lv_obj_set_pos(speedometerMPHLabel,
                 MPH_LABEL_X_POSITION,
                 MPH_LABEL_Y_POSITION);

  lv_label_set_text(speedometerMPHLabel,
                    "MPH");

  return;
}


/**
 * @brief Function that handles the display task
 */
uint32_t dispTaskHandler() {

  //
  // Run the LVLG task handler
  //

  uint32_t delayTime = lv_task_handler();


  //
  // Return the next tick time in ms
  //

  return delayTime;
}


/**
 * @brief Function that displays the speedometer data
 */
 void dispUpdateSpeedometer(uint16_t speed) { 

  lv_label_set_text_fmt(speedometerNumericLabel,
                        "%03d",
                        speed);

  return;
 }


/**
 * @brief Function that is called when the home button is pressed
*/
void dispHomeButtonPressed(void* obj) {

  static uint32_t lastHomeButtonPressMillis = 0;


  //
  // Debounce and toggle the display state and bightness
  //

  if (millis() - lastHomeButtonPressMillis < 500) {

    //
    // Ignore the home button press due to debounce
    //

    return;
  }


  //
  // Flip the value of the fakeSpeedSourceActive variable
  //

  fakeSpeedSourceActive = !fakeSpeedSourceActive;


  //
  // Update the last home button press millis
  //

  lastHomeButtonPressMillis = millis();

  return;
}


#ifdef FAKE_SPEED_SOURCE
/**
 * @brief Timer based function that generates a fake speed value between 0 and 300, but 
 * uses logic that does not cause the speed to change jump around too rapidly, and 
 * always tries to mimic a smooth acceleration and deceleration
 * 
 */
void generateFakeSpeed(TimerHandle_t xTimer) {

  static bool speedIncreasing = true;
  static uint16_t speedCounter = 0;

  //
  // Check if the fake speed source is active
  //

  if (!fakeSpeedSourceActive) {
    return;
  }


  //
  // Generate a fake speed value
  //

  if (speedIncreasing) {
    if (speedCounter < 300) {
      speedCounter++;
    } else {
      speedIncreasing = false;
      speedCounter--;
    }
  } else {
    if (speedCounter > 0) {
      speedCounter--;
    } else {
      speedIncreasing = true;
      speedCounter++;
    }
  }

  //
  // Update the speedometer display
  //

  dispUpdateSpeedometer(speedCounter);

  return;
}

#endif  // FAKE_SPEED_SOURCE