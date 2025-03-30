#include "speedtracker.h"


// The core microcontroller information data structure
MCU_DATA mcuData;


/*
* @brief Initialize the microcontroller
*/
void mcuInitialize() {

  //
  // Initialize the core microcontroller information
  //

  mcuData.number_of_cores = NUMBER_OF_CORES;
  esp_read_mac(mcuData.mac_address,
               ESP_MAC_WIFI_STA);


  //
  // Print out the core information
  //

  Serial.printf("Number of cores: %d\n",
                mcuData.number_of_cores);

  Serial.printf("MAC Address: %02X:%02X:%02X:%02X:%02X:%02X\n",
                mcuData.mac_address[0],
                mcuData.mac_address[1],
                mcuData.mac_address[2],
                mcuData.mac_address[3],
                mcuData.mac_address[4],
                mcuData.mac_address[5]);


  //
  // Set the home button callback
  //
  
  amoled.setHomeButtonCallback(dispHomeButtonPressed);

  
  return;
}