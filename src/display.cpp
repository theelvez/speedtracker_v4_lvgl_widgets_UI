#include "speedtracker.h"

// UI Styles
lv_style_t speedometerNumericStyle;
lv_style_t speedometerMPHStyle;
lv_style_t gpsSatellitesInViewStyle;
lv_style_t gpsUTCTimeStyle;
lv_style_t mcuVoltageStyle;


// UI Objects
lv_obj_t *speedometerNumericLabel;
lv_obj_t *speedometerMPHLabel;
lv_obj_t* mcuRecordingLED;
lv_obj_t *gpsInBoxLED;
lv_obj_t *gpsFixOKLED;
lv_obj_t *gpsSatellitesInViewLabel;
lv_obj_t *gpsUTCTimeLabel;
lv_obj_t *mcuVoltageLabel;

// Global variables
bool dispSplashScreenDisplayed = false;
lv_obj_t* dispSplashScreenObject = NULL;


/**
 * @brief Function that draws the MAC address on the screen in large font
 */
void dispDrawMACAddress() {

  //
  // Get the MAC address of the device 
  //
  
  esp_read_mac(mcuData.mac_address, ESP_MAC_WIFI_STA);


  //
  // Clear the display buffer
  //

  lv_obj_clean(lv_scr_act());
  

  //
  // Set the entire screen to black
  //

  lv_obj_set_style_bg_color(lv_scr_act(),
                            lv_color_black(),
                            LV_PART_MAIN);


  //
  // Draw the MAC address text dircectly on the screen in 60 point font NoToSansBlack
  //

  lv_obj_t* macAddressScreen = lv_label_create(lv_scr_act());

  lv_obj_set_style_text_font(macAddressScreen,
                             &AmericanCaptain48,
                             0);

  lv_obj_set_style_text_color(macAddressScreen,
                              lv_color_white(),
                              0);

  lv_obj_set_style_text_align(macAddressScreen,
                              LV_TEXT_ALIGN_AUTO,
                              0);

  lv_obj_set_pos(macAddressScreen,
                  0,
                  0);

  lv_obj_set_size(macAddressScreen,
                  SCREEN_WIDTH,
                  SCREEN_HEIGHT);

  lv_label_set_text_fmt(macAddressScreen,
                        "MAC Address\n%02X:%02X:%02X:%02X:%02X:%02X\nBuild\n%s",
                        mcuData.mac_address[0],
                        mcuData.mac_address[1],
                        mcuData.mac_address[2],
                        mcuData.mac_address[3],
                        mcuData.mac_address[4],
                        mcuData.mac_address[5],
                        __DATE__ " " __TIME__ " " __VERSION__);


  //
  // Call the lvgl task handler in a loop to update the display
  //

  while (true) {
    uint32_t delayTime = lv_task_handler();

    delay(delayTime);
  }

  return;
}

/**
 * @brief Function that clears the splash screen
*/
void dispClearSplashScreen() {

  //
  // Clear the splash screen displayed flag and delete the splash screen surface
  //

  dispSplashScreenDisplayed = false;
  
  lv_obj_del(dispSplashScreenObject);

  lv_task_handler();

  return;
}


/**
 * @brief Function that draws the splash screen on top of all other windows while the system is booting
 */
void dispDrawSplashScreen() {

  //
  // Set the entire screen to black
  //

  lv_obj_set_style_bg_color(lv_scr_act(),
                            lv_color_black(),
                            LV_PART_MAIN);

  
  //
  // Create an image object, set the splash screen image source to the splash image and center it on the screen
  //

  dispSplashScreenObject = lv_img_create(lv_scr_act());

  lv_img_set_src(dispSplashScreenObject,
                 &splash);
  
  lv_obj_align(dispSplashScreenObject,
               LV_ALIGN_CENTER,
               0,
               0);


  //
  // Call the lvgl task handler to update the display
  //

  lv_task_handler();


  //
  // Set the splash screen displayed flag
  //

  dispSplashScreenDisplayed = true;

  
  return;
}


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
  // Set the display brightness
  //

  amoled.setBrightness(120);
  
  
  //
  // Draw the splash screen
  //

  dispDrawSplashScreen();


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
                          SPEED_LABEL_ALIGNMENT);

  lv_style_set_bg_color(&speedometerNumericStyle,
                        SPEED_LABEL_BG_COLOR);

  lv_style_set_bg_opa(&speedometerNumericStyle,
                      SPEED_LABEL_OPACITY);

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
                         &MPH_LABEL_FONT);
                               
  lv_style_set_text_color(&speedometerMPHStyle,
                          MPH_LABEL_TEXT_COLOR);

  lv_style_set_text_align(&speedometerMPHStyle,
                          MPH_LABEL_ALIGNMENT);

  lv_style_set_bg_color(&speedometerMPHStyle,
                        MPH_LABEL_BG_COLOR);

  lv_style_set_bg_opa(&speedometerMPHStyle,
                      MPH_LABEL_OPACITY);

  lv_style_set_text_opa(&speedometerMPHStyle,
                        LV_OPA_COVER);


  ///////////////////////////////////////////////////
  //
  // Initialize the style for the GPS satellites in view label
  //
  //    - White, left aligned text
  //    - American Captain font
  //    - Transparent background
  //    - No scrolling
  //
  //////////////////////////////////////////////////

  lv_style_init(&gpsSatellitesInViewStyle);

  lv_style_set_text_font(&gpsSatellitesInViewStyle,
                         &GPS_SATS_IN_VIEW_LABEL_FONT);

  lv_style_set_text_color(&gpsSatellitesInViewStyle,
                          GPS_SATS_IN_VIEW_LABEL_FONT_COLOR);

  lv_style_set_text_align(&gpsSatellitesInViewStyle,
                          LV_TEXT_ALIGN_LEFT);  

  lv_style_set_bg_color(&gpsSatellitesInViewStyle,
                        lv_color_black());  

  lv_style_set_bg_opa(&gpsSatellitesInViewStyle,
                      LV_OPA_TRANSP);           

  lv_style_set_text_opa(&gpsSatellitesInViewStyle,
                        LV_OPA_COVER);


  ///////////////////////////////////////////////////
  //
  // Initialize the style for the GPS UTC time label
  //
  //    - White, left aligned text
  //    - American Captain font
  //    - Transparent background
  //    - No scrolling
  //    - Enable color changing
  //
  //////////////////////////////////////////////////

  lv_style_init(&gpsUTCTimeStyle);

  lv_style_set_text_font(&gpsUTCTimeStyle,
                         &GPS_UTC_TIME_LABEL_FONT);

  lv_style_set_text_color(&gpsUTCTimeStyle,
                          GPS_UTC_TIME_LABEL_FONT_COLOR);

  lv_style_set_text_align(&gpsUTCTimeStyle,
                          LV_TEXT_ALIGN_LEFT);  

  lv_style_set_bg_color(&gpsUTCTimeStyle,
                        lv_color_black());

  lv_style_set_bg_opa(&gpsUTCTimeStyle,
                      LV_OPA_TRANSP);

  lv_style_set_text_opa(&gpsUTCTimeStyle,
                        LV_OPA_COVER);  


  ///////////////////////////////////////////////////
  //
  // Initialize the style for the MCU voltage label
  //
  //    - White, left aligned text
  //    - American Captain font
  //    - Transparent background
  //    - No scrolling
  //
  //////////////////////////////////////////////////

  lv_style_init(&mcuVoltageStyle);

  lv_style_set_text_font(&mcuVoltageStyle,
                         &MCU_VOLTAGE_LABEL_FONT);

  lv_style_set_text_color(&mcuVoltageStyle,
                          GPS_UTC_TIME_LABEL_FONT_COLOR);

  lv_style_set_text_align(&mcuVoltageStyle,
                          LV_TEXT_ALIGN_LEFT);  

  lv_style_set_bg_color(&mcuVoltageStyle,
                        lv_color_black());

  lv_style_set_bg_opa(&mcuVoltageStyle,
                      LV_OPA_TRANSP);

  lv_style_set_text_opa(&mcuVoltageStyle,
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
  // Crerate a lvgl LED widget that is in the top right corner of the screen
  // and indicates if the device is recording
  //

  mcuRecordingLED = lv_led_create(lv_scr_act());

  lv_obj_set_size(mcuRecordingLED,
                  RECORDING_LED_WIDTH,
                  RECORDING_LED_HEIGHT);

  lv_obj_set_pos(mcuRecordingLED,
                 RECORDING_LED_X_POSITION,
                 RECORDING_LED_Y_POSITION);

  lv_led_set_color(mcuRecordingLED,
                   RECORDING_LED_COLOR);

  lv_led_off(mcuRecordingLED);

  
  //
  // Create a lvgl LED widget that is in the top right corner of the screen
  // and indicates if the GPS coordinates are within the box
  //

  gpsInBoxLED = lv_led_create(lv_scr_act());

  lv_obj_set_size(gpsInBoxLED,
                  GPS_IN_BOX_LED_WIDTH,
                  GPS_IN_BOX_LED_HEIGHT);

  lv_obj_set_pos(gpsInBoxLED,
                  GPS_IN_BOX_LED_X_POSITION,
                  GPS_IN_BOX_LED_Y_POSITION);

  lv_led_set_color(gpsInBoxLED,
                   GPS_IN_BOX_LED_COLOR);                  

  lv_led_off(gpsInBoxLED);


  //
  // Create a lvgl LED widget that is in the top right corner of the screen
  // and indicates if the GPS fix is OK
  //

  gpsFixOKLED = lv_led_create(lv_scr_act());

  lv_obj_set_size(gpsFixOKLED,
                  GPS_FIX_OK_LED_WIDTH,
                  GPS_FIX_OK_LED_HEIGHT);

  lv_obj_set_pos(gpsFixOKLED,
                  GPS_FIX_OK_LED_X_POSITION,
                  GPS_FIX_OK_LED_Y_POSITION);

  lv_led_set_color(gpsFixOKLED,
                   GPS_FIX_OK_LED_COLOR);

  lv_led_off(gpsFixOKLED);

  
  //
  // Create a lvgl label widget that is in the top right corner of the screen
  // and displays the number of satellites in view
  //

  char satsInView[] = "#FF00FF 00#";

  gpsSatellitesInViewLabel = lv_label_create(lv_scr_act());

  lv_obj_add_style(gpsSatellitesInViewLabel,
                   &gpsSatellitesInViewStyle,
                   0);

  lv_label_set_long_mode(gpsSatellitesInViewLabel,
                         LV_LABEL_LONG_CLIP);

  lv_obj_set_size(gpsSatellitesInViewLabel,
                  GPS_SATS_IN_VIEW_LABEL_WIDTH,
                  GPS_SATS_IN_VIEW_LABEL_HEIGHT);

  lv_obj_set_pos(gpsSatellitesInViewLabel,
                  GPS_SATS_IN_VIEW_LABEL_X_POSITION,
                  GPS_SATS_IN_VIEW_LABEL_Y_POSITION);   

  lv_label_set_text(gpsSatellitesInViewLabel,
                    "00");


  //
  // Create a lvgl label widget that is in the top left corner of the screen
  // and displays the UTC time
  //

  gpsUTCTimeLabel = lv_label_create(lv_scr_act());

  lv_label_set_recolor(gpsUTCTimeLabel,
                       true);

  lv_obj_add_style(gpsUTCTimeLabel,
                   &gpsUTCTimeStyle,
                   0);

  lv_label_set_long_mode(gpsUTCTimeLabel,
                         LV_LABEL_LONG_CLIP);

  lv_obj_set_size(gpsUTCTimeLabel,
                  GPS_UTC_TIME_LABEL_WIDTH,
                  GPS_UTC_TIME_LABEL_HEIGHT);

  lv_obj_set_pos(gpsUTCTimeLabel,
                 GPS_UTC_TIME_LABEL_X_POSITION,
                 GPS_UTC_TIME_LABEL_Y_POSITION);

  lv_label_set_text(gpsUTCTimeLabel,
                    "00/00/00 00:00:00");


  //
  // Create a lvgl label widget that is in the top left corner of the screen
  // and displays the MCU voltage
  //

  mcuVoltageLabel = lv_label_create(lv_scr_act());

  lv_obj_add_style(mcuVoltageLabel,
                   &mcuVoltageStyle,
                   0);

  lv_label_set_long_mode(mcuVoltageLabel,
                         LV_LABEL_LONG_CLIP);

  lv_obj_set_size(mcuVoltageLabel,
                  MCU_VOLTAGE_LABEL_WIDTH,
                  MCU_VOLTAGE_LABEL_HEIGHT);

  lv_obj_set_pos(mcuVoltageLabel,
                 MCU_VOLTAGE_LABEL_X_POSITION,
                 MCU_VOLTAGE_LABEL_Y_POSITION);

  lv_label_set_text(mcuVoltageLabel,
                    "0.00V");


  //
  // Create the speedometer label (use the screen as the parent object) 
  // using the speedometer style
  //

  speedometerNumericLabel = lv_label_create(lv_scr_act());

  lv_obj_add_style(speedometerNumericLabel,
                   &speedometerNumericStyle,
                   0);


  lv_label_set_long_mode(speedometerNumericLabel,
                         LV_LABEL_LONG_CLIP); 


  //
  // Set the size, position and initial text of the speedometer label
  //

  lv_obj_set_size(speedometerNumericLabel,
                  SPEED_LABEL_WIDTH,
                  SPEED_LABEL_HEIGHT);

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
                         LV_LABEL_LONG_CLIP); 


  //
  // Update the layout of the screen so that the MPH label is positioned correctly and
  // set the size, position and initial text of the speedometer MPH label
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

  //
  // Debounce the home button press
  //

  if (millis() - gpsDisplayData.lastHomeButtonPressMillis < 200) {
    return;
  } else {
    gpsDisplayData.lastHomeButtonPressMillis = millis();
  }


  //
  // Toggle the "recording" LED
  //

  if (gpsDisplayData.speedtrackingActive == false) {

    //
    // Turn on the LED
    //

    lv_led_on(mcuRecordingLED);


    //
    // Set the speed tracking flag
    //

    gpsDisplayData.speedtrackingActive = true;

  } else {

    //
    // Turn off the LED
    //

    lv_led_off(mcuRecordingLED);


    //
    // Clear the speed tracking flag
    //

    gpsDisplayData.speedtrackingActive = false;

  }
  
  return;
}
