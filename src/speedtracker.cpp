#include "speedtracker.h"

//
// Global AMOLED object
//

LilyGo_AMOLED amoled;

INITIALIZATION_DATA initializationData = {0};

DEVICE_DATA deviceData = {
  .deviceInitialized = false,
  .deviceProvisioned = false,
  .runDataFileName = "/st_run_data.txt",
  .configDataFileName = "/st_config_data.txt"
};

// Reference to the global SD card object
fs::SDFS* sdCardPointer;


const uint64_t sleepDurationMs = 28800000;

bool g_shutdown = false;


void IRAM_ATTR ISR_BootButton() {

  g_shutdown = true;

} 


/**
 * @brief Global setup function
 * 
*/
void setup() {

  //
  // Initialize the counter for errors encountered during initialization 
  //

  uint8_t errorCount = 0;


  //
  // Initialize the serial port and wait for the serial port to be ready
  //

  Serial.begin(115200);
  delay(100);

  
  //
  // Initialize the I2C bus
  //

  Serial.println("****Initializing the I2C bus.****");

  if (Wire.begin(I2C_SDA_PIN,
                 I2C_SCL_PIN)) {

    Serial.println("****I2C bus initialized.****");


    //
    // Set the I2C bus init flag to true
    //

    initializationData.i2cBusInitialized = true;

  } else {
    Serial.println("####Failed to initialize the I2C bus.####");
    errorCount++;
  }



  //
  // Initialize the AMOLED display
  //

  Serial.println("****Initializing the AMOLED display.****");

  if (!amoled.begin()) {
    Serial.println("####Failed to initialize the AMOLED display.####\n");
    errorCount++;


    //
    // Freeze the processor in a loop to indicate that the AMOLED display initialization failed
    //

    while (true)
    {
      delay(1000);
    }
  } else {
    Serial.println("****Initialized the AMOLED display.****");


    // Set the charging target voltage, Range:3840 ~ 4608mV ,step:16 mV
    amoled.BQ.setChargeTargetVoltage(4208);

    // Set the precharge current , Range: 64mA ~ 1024mA ,step:64mA
    amoled.BQ.setPrechargeCurr(64);

    // Set the charging current , Range:0~5056mA ,step:64mA
    amoled.BQ.setChargerConstantCurr(832);

    // Turn on charging function
    amoled.BQ.enableCharge();

    //
    // Set the AMOLED display brightness "mid" brightness
    //

    amoled.setBrightness(120);

    //
    // Set pin 
    //

    pinMode(GPIO_NUM_0, INPUT);
    attachInterrupt(digitalPinToInterrupt(GPIO_NUM_0), ISR_BootButton, RISING);


    //
    // Initialize the LVGL graphics sub-system and helper functions
    //

    beginLvglHelper(amoled,
                    true);

    delay(250);
    

    //
    // Set the LVGL initialized flag to true
    //

    initializationData.lvglInitialized = true;

    Serial.println("****Initialized the LVGL graphics sub-system.****");


    //
    // Set the amoled initialized flag to true
    //

    initializationData.amoledInitialized = true;
  }


  //
  // Initialize the SD card subsystem
  //

  if (!SD.begin()) {
    Serial.println("####Failed to initialize the SD library.####\n");
    errorCount++;


    //
    // Draw the MAC address on the screen in large font using the LVGL graphics engine
    //

    dispDrawMACAddress();


    //
    // Freeze the processor in a loop to indicate that the SD card initialization failed
    //

    while (true)
    {
      delay(1000);
    }
    

  } else {
    Serial.println("****Initialized SD card.****");


    //
    // Set the SD card initialized flag to true
    //

    sdCardPointer = &SD;
    initializationData.sdCardInitialized = true;

    
      //
      // Dump all the files on the SD card to the serial port
      //
      Serial.println("****Dumping all files on the SD card.****");
      File root = sdCardPointer->open("/");
      File file = root.openNextFile();  

      while (file) {
        Serial.printf("File: %s, Size: %d bytes\n",
                      file.name(),
                      file.size());


        file.print("File: ");
        file.print(file.name());
        file.print(", Size: "); 
        file.print(file.size());
        file.println(" bytes");
        

        file = root.openNextFile();
      }


      //
      // Close the root directory
      //

      root.close();


    //
    // Check if the required files are present on the SD card
    //

    if (sdCardPointer->exists(deviceData.runDataFileName.c_str()) &&
        sdCardPointer->exists(deviceData.configDataFileName.c_str())) {
    } else {
      Serial.println("####Required files are missing on the SD card.####\n");


      //
      // Missing files, go into provisioning mode
      //

      dispInitialize_PROVISION(false);
    }
  }

  
  //
  // Get the MAC address of the device 
  //
  
  esp_read_mac(mcuData.mac_address,
               ESP_MAC_WIFI_STA);

  // Stash the Mac address for later use
  mcuData.macAddressString = String(mcuData.mac_address[0], HEX) + ":" +
                             String(mcuData.mac_address[1], HEX) + ":" +
                             String(mcuData.mac_address[2], HEX) + ":" +
                             String(mcuData.mac_address[3], HEX) + ":" +
                             String(mcuData.mac_address[4], HEX) + ":" +
                             String(mcuData.mac_address[5], HEX);



  //
  // Initialize the display and the display subsystem
  //

  Serial.println("****Initializing the MAIN display.****");

  if (!dispInitialize_MAIN()) {
    Serial.println("####Failed to initialize the MAIN display.####");
    errorCount++;
  } else {
    Serial.println("****Initialized the MAIN display.****");
  }


  //
  // Initialize the GPS module
  //

  Serial.println("****Initializing the GPS module.****");

  if (!gpsInitialize()) {
    Serial.println("####Failed to initialize the GPS module.####");
    errorCount++;
  } else {
    Serial.println("****Initialized the GPS module.****");


    //
    // Set the GPS module initialized flag to true
    //

    initializationData.gpsInitialized = true;
  }


  //
  // Print the processor frequency, system voltage and MAC address to the serial port
  //

  Serial.printf("CPU Frequency: %d MHz\n",
                getCpuFrequencyMhz());

  Serial.printf("MAC Address: %s\n",
                mcuData.macAddressString.c_str());

  Serial.printf("System Voltage: %d.%02dv\n",
                amoled.getSystemVoltage() / 1000,
                (amoled.getSystemVoltage() % 1000)/10);                

  Serial.printf("Vbus Voltage: %d.%02dv\n",
                amoled.getVbusVoltage() / 1000,
                (amoled.getVbusVoltage() % 1000)/10);


  //
  // Print out the error count and enter a "freeze" loop if there were any errors during initialization
  //

  if (errorCount > 0) {
    Serial.printf("####There were %d errors during initialization, freezing processor.####\n", errorCount);
  } else {
    Serial.println("****Device is ready.****");


    //
    // Set the device initialized flag to true
    //

    deviceData.deviceInitialized = true;
  }


  return;
}


/**
 * @brief Global loop function
 * 
 *      _____ __  __ _____   ____  _____ _______       _   _ _______ 
 *     |_   _|  \/  |  __ \ / __ \|  __ \__   __|/\   | \ | |__   __|
 *       | | | \  / | |__) | |  | | |__) | | |  /  \  |  \| |  | |   
 *       | | | |\/| |  ___/| |  | |  _  /  | | / /\ \ | . ` |  | |   
 *      _| |_| |  | | |    | |__| | | \ \  | |/ ____ \| |\  |  | |   
 *     |_____|_|  |_|_|     \____/|_|  \_\ |_/_/    \_\_| \_|  |_|   
 *                                                                  
 * 
 * It is critical that the loop() function does not block, and that the
 * LVLG graphics engine is run at least once every 33ms (lv_task_handler()) to 
 * keep the display frame rate at ~20 FPS, and to keep the UI responsive and 
 * flicker free.
 *  
 */
void loop() {

  //
  // Check if the shutdown button has been pressed
  //

  if (g_shutdown) {

    //
    // Shutdown the device
    //

    esp_sleep_pd_config(ESP_PD_DOMAIN_RTC_PERIPH, ESP_PD_OPTION_OFF);
    esp_deep_sleep_start();
  }

  //
  // If the screen has not been cleared yet, clear the screen
  //

  if (dispSplashScreenDisplayed) {
    
    //
    // Clear the splash screen
    //

    dispClearSplashScreen();
  }


  //
  // Update the GPS display data
  //

  gpsUpdateDisplayAndRunInfoData();


  //
  // Update the speedometer display
  //

  dispUpdateSpeedometer(gpsDisplayData.speedMph);


  //
  // Check for the gps connection status
  //

  if (gpsDisplayData.fixType >= 3) {
    lv_led_on(gpsFixOKLED);
  

    //
    // Check if the finish line has been crossed
    //

    if (gpsCheckFinishLineCrossed()) {

      //
      // Turn on the LED if the vehicle crosses the finish line and set the flag
      //

      gpsDisplayData.finishLineCrossed = true;

      lv_led_on(gpsInBoxLED);
      
    } else {

      //
      // Turn off the LED if the vehicle is not within the bounding box
      //

      gpsDisplayData.finishLineCrossed = false;

      lv_led_off(gpsInBoxLED);

    }
  }


  //
  // Update the sats in view label
  //

  lv_label_set_text_fmt(gpsSatellitesInViewLabel,
                        "%02d",
                        gpsDisplayData.satellitesInView);


  //
  // Update the UTC time label
  //
  char gpsUTCTimeRecoloredString[32];

  sprintf(gpsUTCTimeRecoloredString,
          "%02d/%02d/%02d  #00FF00 %02d:%02d:%02d#",
          gpsDisplayData.month,
          gpsDisplayData.day,
          gpsDisplayData.year,
          gpsDisplayData.hour,
          gpsDisplayData.minute,
          gpsDisplayData.second);

  lv_label_set_text(gpsUTCTimeLabel,
                    gpsUTCTimeRecoloredString);


  //
  // Update the MCU voltage label
  //

  lv_label_set_text_fmt(mcuVoltageLabel,
                        "%d.%02dv",
                        amoled.getSystemVoltage() / 1000,
                        (amoled.getSystemVoltage() % 1000)/10);


  //
  // Run the display task handler
  //

  uint32_t nextTick = dispTaskHandler();


  //
  // Yield the core until next tick to allow system tasks to run 
  //

  delay(nextTick);

  
  return;
}