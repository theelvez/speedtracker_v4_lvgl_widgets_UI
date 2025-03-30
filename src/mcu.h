#ifndef MCU_H
#define MCU_H

#include "speedtracker.h"
#include "esp_system.h"  // for esp_read_mac
#include "esp32/clk.h"   // for esp_clk_cpu_freq

// Core processor information structure
typedef struct _MCU_DATA {
  uint8_t number_of_cores;
  uint8_t mac_address[6];
  String macAddressString;
} MCU_DATA, *PMCU_DATA;


// Proccessor frequency definitions           
#define CPU_IDLE_FREQUENCY                                              80
#define CPU_SPEED_TRACKING_FREQUENCY                                    240

// Core definitions
#define CORE_0                                                          0
#define CORE_1                                                          1
#define NUMBER_OF_CORES                                                 2

// Scheduler				            
#define TICK_DELAY_TIME_MS                  				                    33
#define TICK_DELAY_MULTIPLIER               				                    1


// Function prototypes
void mcuInitialize();


// Global variables
extern LilyGo_AMOLED amoled;
extern MCU_DATA mcuData;

#endif // MCU_H