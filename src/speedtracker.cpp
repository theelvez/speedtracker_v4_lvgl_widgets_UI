#include "speedtracker.h"

//
// Global AMOLED object
//

LilyGo_AMOLED amoled;


/**
 * @brief Function checks if a number is bounded by two other numbers
 * 
 * @param value The value to check
 * @param boundingValue1 The first bounding value
 * @param boundingValue2 The second bounding value
 * 
 * @return true if the value is bounded by the provided bounds
 * @return false if the value is not bounded by the provided bounds
 * 
*/
bool utilIsBoundedBy(int value, int boundingValue1, int boundingValue2) {

  //
  // Get the lower and upper bounds
  //

  int lowerBound = min(boundingValue1, boundingValue2);
  int upperBound = max(boundingValue1, boundingValue2);


  //
  // Check if the value is bounded by the provided bounds
  //

  if ((value >= lowerBound) && (value <= upperBound)) {
    return true;
  }

  return false;
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

  Serial.println("****Serial device ready.****");


  //
  // Initialize the I2C bus
  //

  Serial.println("****Initializing the I2C bus.****");

  if (Wire.begin(I2C_SDA_PIN,
                 I2C_SCL_PIN)) {
    Serial.println("****I2C bus initialized.****");
  } else {
    Serial.println("####Failed to initialize the I2C bus.####");
    errorCount++;
  }


  //
  // Initialize the display and the display subsystem
  //

  Serial.println("****Initializing the display.****");

  if (!dispInitialize()) {
    Serial.println("####Failed to initialize the display.####");
    errorCount++;
  } else {
    Serial.println("****Initialized the display.****");
  }


  //
  // Print out the build date/flavor/time string
  //

  Serial.println("Build date: " __DATE__ " " __TIME__ " " __VERSION__);
 

  //
  // Get the processor frequency
  //

  Serial.printf("CPU Frequency: %d MHz\n",
                getCpuFrequencyMhz());


  //
  // Turn off the red LED to indicate that the device is ready otherwise if there were any errors during initialization, 
  // print out the error count and enter a "freeze" loop
  //

  if (errorCount > 0) {
    Serial.printf("####There were %d errors during initialization, freezing processor.####\n", errorCount);
  } else {
    Serial.println("****Device is ready.****");
  }
  
  return;
}


/**
 * @brief Global loop function
 * 
*/
void loop() {
  
  /***
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
   ***/

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