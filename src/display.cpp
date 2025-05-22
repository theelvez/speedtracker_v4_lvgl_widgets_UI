#include "display.h"

/**
 * @brief Function that initializes the display
 */
bool dispInitialize() {

  //
  // Automatically determine the access device
  //
  
  if (!amoled.begin()) {
    while (1) {
        Serial.println("There is a problem with the AMOLED device!");
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
  // Set the display brightness
  //

  amoled.setBrightness(60);

  return true;
}


/**
 * @brief Function that initializes the display subsystem
 */

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