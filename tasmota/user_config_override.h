/*
  user_config_override.h - user configuration overrides my_user_config.h for Tasmota

  Copyright (C) 2021  Theo Arends

  This program is free software: you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation, either version 3 of the License, or
  (at your option) any later version.

  This program is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef _USER_CONFIG_OVERRIDE_H_
#define _USER_CONFIG_OVERRIDE_H_

#define USE_PING

#define USE_DHT
#undef USE_DOMOTICZ
#undef USE_HOME_ASSISTANT
#undef USE_EMULATION_HUE
#undef USE_EMULATION_WEMO
#undef USE_TIMERS
#undef USE_TIMERS_WEB
#undef USE_SUNRISE
#undef ROTARY_V1
#undef USE_SONOFF_RF
#undef USE_RF_FLASH

#undef USE_SONOFF_SC                            // Add support for Sonoff Sc (+1k1 code)
#undef USE_TUYA_MCU                             // Add support for Tuya Serial MCU
  #undef USE_TUYA_TIME                          // Add support for Set Time in Tuya MCU
#undef USE_ARMTRONIX_DIMMERS                    // Add support for Armtronix Dimmers (+1k4 code)
#undef USE_PS_16_DZ                             // Add support for PS-16-DZ Dimmer (+2k code)
#undef USE_SONOFF_IFAN                          // Add support for Sonoff iFan02 and iFan03 (+2k code)
#undef USE_BUZZER                               // Add support for a buzzer (+0k6 code)
#undef USE_ARILUX_RF                            // Add support for Arilux RF remote controller (+0k8 code, 252 iram (non 2.3.0))
#undef USE_SHUTTER                              // Add Shutter support for up to 4 shutter with different motortypes (+11k code)
#undef USE_DEEPSLEEP                            // Add support for deepsleep (+1k code)
#undef USE_EXS_DIMMER                           // Add support for ES-Store WiFi Dimmer (+1k5 code)
#undef USE_DEVICE_GROUPS                        // Add support for device groups (+5k5 code)
  #undef USE_DEVICE_GROUPS_SEND                 // Add support for the DevGroupSend command (+0k6 code)
#undef USE_PWM_DIMMER                           // Add support for MJ-SD01/acenx/NTONPOWER PWM dimmers (+2k3 code, DGR=0k7)
  #undef USE_PWM_DIMMER_REMOTE                  // Add support for remote switches to PWM Dimmer (requires USE_DEVICE_GROUPS) (+0k6 code)
#undef USE_SONOFF_D1                            // Add support for Sonoff D1 Dimmer (+0k7 code)
#undef USE_SHELLY_DIMMER                        // Add support for Shelly Dimmer (+3k code)

// -- Optional light modules ----------------------
#undef USE_WS2812                               // WS2812 Led string using library NeoPixelBus (+5k code, +1k mem, 232 iram) - Disable by //
  #undef USE_WS2812_RMT  0                      // ESP32 only, hardware RMT support (default). Specify the RMT channel 0..7. This should be preferred to software bit bang.
  #undef USE_WS2812_HARDWARE  NEO_HW_WS2812     // Hardware type (NEO_HW_WS2812, NEO_HW_WS2812X, NEO_HW_WS2813, NEO_HW_SK6812, NEO_HW_LC8812, NEO_HW_APA106, NEO_HW_P9813)
  #undef USE_WS2812_CTYPE     NEO_GRB           // Color type (NEO_RGB, NEO_GRB, NEO_BRG, NEO_RBG, NEO_RGBW, NEO_GRBW)
#undef USE_MY92X1                               // Add support for MY92X1 RGBCW led controller as used in Sonoff B1, Ailight and Lohas
#undef USE_SM16716                              // Add support for SM16716 RGB LED controller (+0k7 code)
#undef USE_SM2135                               // Add support for SM2135 RGBCW led control as used in Action LSC (+0k6 code)
#undef USE_SONOFF_L1                            // Add support for Sonoff L1 led control
#undef USE_ELECTRIQ_MOODL                       // Add support for ElectriQ iQ-wifiMOODL RGBW LED controller (+0k3 code)
#undef USE_LIGHT_PALETTE                        // Add support for color palette (+0k7 code)
#undef USE_LIGHT_VIRTUAL_CT                     // Add support for Virtual White Color Temperature (+1.1k code)
#undef USE_DGR_LIGHT_SEQUENCE                   // Add support for device group light sequencing (requires USE_DEVICE_GROUPS) (+0k2 code)

// -- Counter input -------------------------------
#undef USE_COUNTER                              // Enable inputs as counter (+0k8 code)

// -- One wire sensors ----------------------------
#undef USE_DS18x20                              // Add support for DS18x20 sensors with id sort, single scan and read retry (+2k6 code)
//  #define W1_PARASITE_POWER                      // Optimize for parasite powered sensors

// -- I2C sensors ---------------------------------
#undef USE_I2C                                  // I2C using library wire (+10k code, 0k2 mem, 124 iram)
    #undef USE_VEML6070_RSET    270000          // VEML6070, Rset in Ohm used on PCB board, default 270K = 270000ohm, range for this sensor: 220K ... 1Meg
    #undef USE_VEML6070_SHOW_RAW                // VEML6070, shows the raw value of UV-A
    #undef USE_APDS9960_GESTURE                   // Enable APDS9960 Gesture feature (+2k code)
    #undef USE_APDS9960_PROXIMITY                 // Enable APDS9960 Proximity feature (>50 code)
    #undef USE_APDS9960_COLOR                     // Enable APDS9960 Color feature (+0.8k code)
    #undef USE_APDS9960_STARTMODE  0              // Default to enable Gesture mode
  #undef USE_ADE7953                            // [I2cDriver7] Enable ADE7953 Energy monitor as used on Shelly 2.5 (I2C address 0x38) (+1k5)
    #undef USE_DISPLAY_MODES1TO5                // Enable display mode 1 to 5 in addition to mode 0
    #undef USE_DISPLAY_LCD                      // [DisplayModel 1] [I2cDriver3] Enable Lcd display (I2C addresses 0x27 and 0x3F) (+6k code)
    #undef USE_DISPLAY_SSD1306                  // [DisplayModel 2] [I2cDriver4] Enable SSD1306 Oled 128x64 display (I2C addresses 0x3C and 0x3D) (+16k code)
    #undef USE_DISPLAY_MATRIX                   // [DisplayModel 3] [I2cDriver5] Enable 8x8 Matrix display (I2C adresseses see below) (+11k code)
    #undef USE_DISPLAY_SEVENSEG                 // [DisplayModel 11] [I2cDriver47] Enable sevenseg display (I2C 0x70-0x77) (<+11k code)


// -- Power monitoring sensors --------------------
#undef USE_ENERGY_MARGIN_DETECTION              // Add support for Energy Margin detection (+1k6 code)
  #undef USE_ENERGY_POWER_LIMIT                 // Add additional support for Energy Power Limit detection (+1k2 code)
#undef USE_ENERGY_DUMMY                         // Add support for dummy Energy monitor allowing user values (+0k7 code)
#undef USE_PZEM004T                             // Add support for PZEM004T Energy monitor (+2k code)
#undef USE_PZEM_AC                              // Add support for PZEM014,016 Energy monitor (+1k1 code)
#undef USE_PZEM_DC                              // Add support for PZEM003,017 Energy monitor (+1k1 code)
#undef USE_MCP39F501                            // Add support for MCP39F501 Energy monitor as used in Shelly 2 (+3k1 code)
#undef USE_BL0940                               // Add support for BL0940 Energy monitor as used in Blitzwolf SHP-10 (+1k6 code)

// -- IR Remote features - subset of IR protocols --------------------------
#undef USE_IR_REMOTE                            // Send IR remote commands using library IRremoteESP8266 and ArduinoJson (+4k3 code, 0k3 mem, 48 iram)
  #undef USE_IR_SEND_NEC                        // Support IRsend NEC protocol
  #undef USE_IR_SEND_RC5                        // Support IRsend Philips RC5 protocol
  #undef USE_IR_SEND_RC6                        // Support IRsend Philips RC6 protocol

  #undef USE_IR_RECEIVE                         // Support for IR receiver (+7k2 code, 264 iram)

#endif  // _USER_CONFIG_OVERRIDE_H_
