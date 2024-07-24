/*
   -- Test Project --
   
   This source code of graphical user interface 
   has been generated automatically by RemoteXY editor.
   To compile this code using RemoteXY library 3.1.13 or later version 
   download by link http://remotexy.com/en/library/
   To connect using RemoteXY mobile app by link http://remotexy.com/en/download/                   
     - for ANDROID 4.13.13 or later version;
     - for iOS 1.10.3 or later version;
    
   This source code is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.    
*/

//////////////////////////////////////////////
//        RemoteXY include library          //
//////////////////////////////////////////////

// you can enable debug logging to Serial at 115200
// #define REMOTEXY__DEBUGLOG    

// RemoteXY select connection mode and include library 
#define REMOTEXY_MODE__WIFI_CLOUD


// RemoteXY connection settings 
#define REMOTEXY_WIFI_SSID "GL-AX1800-50f"
#define REMOTEXY_WIFI_PASSWORD "SpottsHotSpot"
#define REMOTEXY_CLOUD_SERVER "cloud.remotexy.com"
#define REMOTEXY_CLOUD_PORT 6376
#define REMOTEXY_CLOUD_TOKEN "07adb9420a6362df80bc7a79ba58607b"


#include <RemoteXY.h>

// RemoteXY GUI configuration  
#pragma pack(push, 1)  
uint8_t RemoteXY_CONF[] =   // 3509 bytes
  { 255,5,0,67,2,174,13,17,0,0,0,26,1,106,200,5,1,0,0,0,
  0,41,0,130,1,108,104,21,1,26,130,1,84,104,22,1,26,130,1,60,
  104,22,1,26,130,1,12,104,46,1,26,66,4,23,73,11,129,178,27,131,
  22,2,18,8,3,27,29,31,66,77,83,0,166,2,131,2,2,19,8,3,
  27,29,31,77,97,105,110,0,169,2,131,60,2,26,8,3,27,29,31,67,
  111,110,116,114,111,108,115,0,106,2,131,41,2,18,8,3,27,29,31,83,
  111,108,97,114,0,154,2,68,1,130,104,69,35,25,65,94,35,66,97,116,
  116,101,114,121,32,67,117,114,114,101,110,116,0,83,111,108,97,114,32,67,
  117,114,114,101,110,116,0,76,111,97,100,32,67,117,114,114,101,110,116,0,
  67,79,24,20,9,5,178,26,11,129,99,26,4,5,178,37,0,129,38,37,
  17,4,16,47,32,32,56,52,48,32,65,104,0,67,24,36,11,5,5,16,
  26,11,67,40,42,20,9,5,65,26,11,67,74,42,20,9,5,178,26,11,
  129,96,44,5,5,178,87,0,129,62,44,4,5,65,65,0,129,26,44,4,
  5,164,86,0,129,61,51,22,4,16,40,43,32,67,104,97,114,103,105,110,
  103,41,0,129,37,15,31,6,16,66,97,116,116,101,114,121,32,73,110,102,
  111,0,129,40,63,26,6,16,83,111,108,97,114,32,73,110,102,111,0,67,
  40,71,20,9,5,65,26,11,67,74,71,20,9,5,178,26,11,129,96,73,
  5,5,178,87,0,129,62,73,4,5,65,65,0,129,26,73,4,5,164,86,
  0,129,40,87,26,6,16,76,111,97,100,32,73,110,102,111,0,67,40,95,
  20,9,5,65,26,11,129,62,97,4,5,65,65,0,67,5,42,20,9,5,
  164,26,11,67,5,71,20,9,5,164,26,11,129,23,111,21,3,16,73,110,
  118,101,114,116,101,114,32,67,117,114,114,101,110,116,0,67,19,114,20,9,
  5,65,26,11,129,41,116,4,5,65,65,0,129,57,111,24,3,16,65,108,
  116,101,114,110,97,116,111,114,32,67,117,114,114,101,110,116,0,67,56,114,
  20,9,5,65,26,11,129,78,116,4,5,65,65,0,129,25,123,17,3,16,
  40,43,32,67,104,97,114,103,105,110,103,41,0,129,61,123,17,3,16,40,
  43,32,67,104,97,114,103,105,110,103,41,0,131,87,2,17,8,3,27,29,
  31,84,101,109,112,0,170,1,155,0,130,1,12,34,186,1,26,129,8,99,
  8,3,16,67,101,108,108,32,49,0,67,3,104,17,7,5,65,26,7,67,
  3,117,17,7,5,65,26,7,67,3,131,17,7,5,65,26,7,67,3,145,
  17,7,5,65,26,7,129,8,113,8,3,16,67,101,108,108,32,50,0,129,
  8,127,8,3,16,67,101,108,108,32,51,0,129,8,141,8,3,16,67,101,
  108,108,32,52,0,129,9,15,19,8,16,70,114,111,110,116,0,129,9,154,
  18,4,16,77,97,120,32,68,101,108,116,97,0,70,25,103,8,8,16,26,
  37,0,70,25,117,8,8,16,26,37,0,70,25,131,8,8,16,26,37,0,
  70,25,145,8,8,16,26,37,0,70,6,173,8,8,16,26,135,0,129,3,
  168,14,3,16,68,105,115,99,104,97,114,103,101,0,129,22,168,10,3,16,
  67,104,97,114,103,101,0,70,23,173,8,8,16,26,135,0,129,5,184,9,
  3,16,67,121,99,108,101,115,0,129,22,184,9,3,16,70,97,117,108,116,
  115,0,67,2,189,15,8,5,178,26,6,67,19,189,15,8,5,50,26,6,
  67,6,30,21,9,5,164,26,7,129,11,25,11,3,16,86,111,108,116,97,
  103,101,0,67,6,43,21,9,5,65,26,7,129,11,39,10,3,16,67,117,
  114,114,101,110,116,0,129,7,53,21,3,16,83,116,97,116,101,32,111,102,
  32,67,104,97,114,103,101,0,66,4,58,28,7,129,176,30,129,16,67,17,
  4,16,47,32,32,50,56,48,32,65,104,0,67,5,72,26,9,5,178,26,
  7,67,4,66,11,5,5,16,26,6,67,3,91,14,6,5,37,26,6,129,
  4,87,10,3,16,66,97,116,116,101,114,121,0,67,19,91,15,6,5,37,
  26,6,129,23,87,7,3,16,66,77,83,0,67,7,159,23,7,5,65,26,
  7,129,27,99,5,3,16,66,97,108,0,129,27,113,5,3,16,66,97,108,
  0,129,27,127,5,3,16,66,97,108,0,129,27,141,5,3,16,66,97,108,
  0,129,27,32,4,5,164,86,0,129,27,45,4,5,65,65,0,129,20,105,
  3,4,65,86,0,129,20,118,3,4,65,86,0,129,20,132,3,4,65,86,
  0,129,20,146,3,4,65,86,0,129,28,160,3,4,65,86,0,129,28,74,
  4,5,178,37,0,129,8,82,17,3,16,84,101,109,112,101,114,97,116,117,
  114,101,0,130,36,12,34,186,1,26,129,43,99,8,3,16,67,101,108,108,
  32,49,0,67,38,104,17,7,5,65,26,7,67,38,117,17,7,5,65,26,
  7,67,38,131,17,7,5,65,26,7,67,38,145,17,7,5,65,26,7,129,
  43,113,8,3,16,67,101,108,108,32,50,0,129,43,127,8,3,16,67,101,
  108,108,32,51,0,129,43,141,8,3,16,67,101,108,108,32,52,0,129,41,
  15,25,8,16,77,105,100,100,108,101,0,129,44,154,18,4,16,77,97,120,
  32,68,101,108,116,97,0,70,60,103,8,8,16,26,37,0,70,60,117,8,
  8,16,26,37,0,70,60,131,8,8,16,26,37,0,70,60,145,8,8,16,
  26,37,0,70,41,173,8,8,16,26,135,0,129,38,168,14,3,16,68,105,
  115,99,104,97,114,103,101,0,129,57,168,10,3,16,67,104,97,114,103,101,
  0,70,58,173,8,8,16,26,135,0,129,40,184,9,3,16,67,121,99,108,
  101,115,0,129,57,184,9,3,16,70,97,117,108,116,115,0,67,37,189,15,
  8,5,178,26,6,67,54,189,15,8,5,50,26,6,67,41,30,21,9,5,
  164,26,7,129,46,25,11,3,16,86,111,108,116,97,103,101,0,67,41,43,
  21,9,5,65,26,7,129,46,39,10,3,16,67,117,114,114,101,110,116,0,
  129,42,53,21,3,16,83,116,97,116,101,32,111,102,32,67,104,97,114,103,
  101,0,66,39,58,28,7,129,176,30,129,51,67,17,4,16,47,32,32,50,
  56,48,32,65,104,0,67,40,72,26,9,5,178,26,7,67,39,66,11,5,
  5,16,26,6,67,38,91,14,6,5,37,26,6,129,39,87,10,3,16,66,
  97,116,116,101,114,121,0,67,54,91,15,6,5,37,26,6,129,58,87,7,
  3,16,66,77,83,0,67,42,159,23,7,5,65,26,7,129,62,99,5,3,
  16,66,97,108,0,129,62,113,5,3,16,66,97,108,0,129,62,127,5,3,
  16,66,97,108,0,129,62,141,5,3,16,66,97,108,0,129,62,32,4,5,
  164,86,0,129,62,45,4,5,65,65,0,129,55,105,3,4,65,86,0,129,
  55,118,3,4,65,86,0,129,55,132,3,4,65,86,0,129,55,146,3,4,
  65,86,0,129,63,160,3,4,65,86,0,129,63,74,4,5,178,37,0,129,
  43,82,17,3,16,84,101,109,112,101,114,97,116,117,114,101,0,130,71,12,
  34,186,1,26,129,78,99,8,3,16,67,101,108,108,32,49,0,67,73,104,
  17,7,5,65,26,7,67,73,117,17,7,5,65,26,7,67,73,131,17,7,
  5,65,26,7,67,73,145,17,7,5,65,26,7,129,78,113,8,3,16,67,
  101,108,108,32,50,0,129,78,127,8,3,16,67,101,108,108,32,51,0,129,
  78,141,8,3,16,67,101,108,108,32,52,0,129,79,15,18,8,16,66,97,
  99,107,0,129,79,154,18,4,16,77,97,120,32,68,101,108,116,97,0,70,
  95,103,8,8,16,26,37,0,70,95,117,8,8,16,26,37,0,70,95,131,
  8,8,16,26,37,0,70,95,145,8,8,16,26,37,0,70,76,173,8,8,
  16,26,135,0,129,73,168,14,3,16,68,105,115,99,104,97,114,103,101,0,
  129,92,168,10,3,16,67,104,97,114,103,101,0,70,93,173,8,8,16,26,
  135,0,129,75,184,9,3,16,67,121,99,108,101,115,0,129,92,184,9,3,
  16,70,97,117,108,116,115,0,67,72,189,15,8,5,178,26,6,67,89,189,
  15,8,5,50,26,6,67,76,30,21,9,5,164,26,7,129,81,25,11,3,
  16,86,111,108,116,97,103,101,0,67,76,43,21,9,5,65,26,7,129,81,
  39,10,3,16,67,117,114,114,101,110,116,0,129,77,53,21,3,16,83,116,
  97,116,101,32,111,102,32,67,104,97,114,103,101,0,66,74,58,28,7,129,
  176,30,129,86,67,17,4,16,47,32,32,50,56,48,32,65,104,0,67,75,
  72,26,9,5,178,26,7,67,74,66,11,5,5,16,26,6,67,73,91,14,
  6,5,37,26,6,129,74,87,10,3,16,66,97,116,116,101,114,121,0,67,
  89,91,15,6,5,37,26,6,129,93,87,7,3,16,66,77,83,0,67,77,
  159,23,7,5,65,26,7,129,97,99,5,3,16,66,97,108,0,129,97,113,
  5,3,16,66,97,108,0,129,97,127,5,3,16,66,97,108,0,129,97,141,
  5,3,16,66,97,108,0,129,97,32,4,5,164,86,0,129,97,45,4,5,
  65,65,0,129,90,105,3,4,65,86,0,129,90,118,3,4,65,86,0,129,
  90,132,3,4,65,86,0,129,90,146,3,4,65,86,0,129,98,160,3,4,
  65,86,0,129,98,74,4,5,178,37,0,129,78,82,17,3,16,84,101,109,
  112,101,114,97,116,117,114,101,0,131,22,2,18,8,3,27,29,31,66,77,
  83,0,166,2,131,2,2,19,8,3,27,29,31,77,97,105,110,0,169,2,
  131,60,2,26,8,3,27,29,31,67,111,110,116,114,111,108,115,0,106,2,
  131,41,2,18,8,3,27,29,31,83,111,108,97,114,0,154,2,131,87,2,
  17,8,3,27,29,31,84,101,109,112,0,170,1,56,0,131,22,2,18,8,
  3,27,29,31,66,77,83,0,166,2,131,2,2,19,8,3,27,29,31,77,
  97,105,110,0,169,2,131,60,2,26,8,3,27,29,31,67,111,110,116,114,
  111,108,115,0,106,2,131,41,2,18,8,3,27,29,31,83,111,108,97,114,
  0,154,2,131,87,2,17,8,3,27,29,31,84,101,109,112,0,170,1,130,
  1,12,34,82,1,26,129,3,15,30,6,16,70,114,111,110,116,32,82,105,
  103,104,116,0,67,6,55,21,9,5,164,26,7,129,7,52,18,3,16,83,
  111,108,97,114,32,86,111,108,116,97,103,101,0,67,6,27,21,9,5,65,
  26,7,129,6,24,21,3,16,66,97,116,116,101,114,121,32,67,117,114,114,
  101,110,116,0,129,27,57,4,5,164,86,0,129,27,29,4,5,65,65,0,
  67,6,41,21,9,5,177,26,7,129,8,38,17,3,16,83,111,108,97,114,
  32,80,111,119,101,114,0,129,26,43,5,5,177,87,0,67,6,69,21,9,
  5,36,26,7,129,7,66,14,3,16,67,111,110,116,114,111,108,108,101,114,
  0,129,26,71,5,5,36,194,176,70,0,67,6,83,21,9,5,164,26,7,
  129,6,80,21,3,16,66,97,116,116,101,114,121,32,86,111,108,116,97,103,
  101,0,129,27,85,4,5,164,86,0,130,36,12,34,82,1,26,129,44,15,
  19,6,16,77,105,100,100,108,101,0,67,41,55,21,9,5,164,26,7,129,
  42,52,18,3,16,83,111,108,97,114,32,86,111,108,116,97,103,101,0,67,
  41,27,21,9,5,65,26,7,129,41,24,21,3,16,66,97,116,116,101,114,
  121,32,67,117,114,114,101,110,116,0,129,62,57,4,5,164,86,0,129,62,
  29,4,5,65,65,0,67,41,41,21,9,5,177,26,7,129,43,38,17,3,
  16,83,111,108,97,114,32,80,111,119,101,114,0,129,61,43,5,5,177,87,
  0,67,41,69,21,9,5,36,26,7,129,42,66,14,3,16,67,111,110,116,
  114,111,108,108,101,114,0,129,61,71,5,5,36,194,176,70,0,67,41,83,
  21,9,5,164,26,7,129,41,80,21,3,16,66,97,116,116,101,114,121,32,
  86,111,108,116,97,103,101,0,129,62,85,4,5,164,86,0,130,71,12,34,
  82,1,26,129,82,15,14,6,16,66,97,99,107,0,67,76,55,21,9,5,
  164,26,7,129,77,52,18,3,16,83,111,108,97,114,32,86,111,108,116,97,
  103,101,0,67,76,27,21,9,5,65,26,7,129,76,24,21,3,16,66,97,
  116,116,101,114,121,32,67,117,114,114,101,110,116,0,129,97,57,4,5,164,
  86,0,129,97,29,4,5,65,65,0,67,76,41,21,9,5,177,26,7,129,
  78,38,17,3,16,83,111,108,97,114,32,80,111,119,101,114,0,129,96,43,
  5,5,177,87,0,67,76,69,21,9,5,36,26,7,129,77,66,14,3,16,
  67,111,110,116,114,111,108,108,101,114,0,129,96,71,5,5,36,194,176,70,
  0,67,76,83,21,9,5,164,26,7,129,76,80,21,3,16,66,97,116,116,
  101,114,121,32,86,111,108,116,97,103,101,0,129,97,85,4,5,164,86,0,
  16,0,10,34,19,17,17,48,65,149,31,79,78,0,31,79,70,70,0,70,
  54,19,17,17,16,26,178,0,129,38,13,27,5,16,67,101,108,108,32,66,
  111,111,115,116,101,114,0,10,6,47,17,17,48,65,149,31,79,78,0,31,
  79,70,70,0,10,32,47,17,17,48,65,149,31,79,78,0,31,79,70,70,
  0,10,57,47,17,17,48,65,149,31,79,78,0,31,79,70,70,0,10,82,
  47,17,17,48,65,149,31,79,78,0,31,79,70,70,0,129,3,41,24,4,
  16,87,97,116,101,114,32,72,101,97,116,101,114,0,129,34,41,14,4,16,
  73,110,118,101,114,116,101,114,0,129,56,41,19,4,16,83,111,108,97,114,
  32,70,97,110,115,0,129,80,41,22,4,16,69,120,104,97,117,115,116,32,
  70,97,110,0,131,22,2,18,8,3,27,29,31,66,77,83,0,166,2,131,
  2,2,19,8,3,27,29,31,77,97,105,110,0,169,2,131,60,2,26,8,
  3,27,29,31,67,111,110,116,114,111,108,115,0,106,2,131,41,2,18,8,
  3,27,29,31,83,111,108,97,114,0,154,2,131,87,2,17,8,3,27,29,
  31,84,101,109,112,0,170,1,18,0,131,22,2,18,8,3,27,29,31,66,
  77,83,0,166,2,131,2,2,19,8,3,27,29,31,77,97,105,110,0,169,
  2,131,60,2,26,8,3,27,29,31,67,111,110,116,114,111,108,115,0,106,
  2,131,41,2,18,8,3,27,29,31,83,111,108,97,114,0,154,2,131,87,
  2,17,8,3,27,29,31,84,101,109,112,0,170,1,129,8,31,19,3,16,
  73,110,118,101,114,116,101,114,32,84,101,109,112,0,67,5,34,20,9,5,
  35,26,11,129,25,36,5,5,35,194,176,70,0,129,8,17,21,3,16,73,
  110,115,105,100,101,32,82,86,32,84,101,109,112,0,67,5,20,20,9,5,
  35,26,11,129,25,22,5,5,35,194,176,70,0,129,39,17,19,3,16,79,
  117,116,115,105,100,101,32,84,101,109,112,0,67,37,20,20,9,5,35,26,
  11,129,57,22,5,5,35,194,176,70,0,129,68,17,32,3,16,69,108,101,
  99,116,114,105,99,97,108,32,67,97,98,105,110,101,116,32,84,101,109,112,
  0,67,70,20,20,9,5,35,26,11,129,90,22,5,5,35,194,176,70,0,
  68,1,50,104,85,36,8,36,135,94,204,73,110,115,105,100,101,0,79,117,
  116,115,105,100,101,0,69,108,101,99,46,32,67,97,98,105,110,101,116,0,
  73,110,118,101,114,116,101,114,0 };
  
// this structure defines all the variables and events of your control interface 
struct {

    // input variables
  uint8_t booster_power; // =1 if state is ON, else =0
  uint8_t water_heater; // =1 if state is ON, else =0
  uint8_t inverter; // =1 if state is ON, else =0
  uint8_t solar_fan; // =1 if state is ON, else =0
  uint8_t exhaust_fan; // =1 if state is ON, else =0

    // output variables
  int8_t battery_state_of_charge_percent; // from 0 to 100
  float onlineGraph_01_battery_current;
  float onlineGraph_01_solar_current;
  float onlineGraph_01_load_current;
  char battery_state_of_charge_percent2[11]; // string UTF8 end zero
  char battery_state_of_charge[11]; // string UTF8 end zero
  char battery_current[11]; // string UTF8 end zero
  char battery_power[11]; // string UTF8 end zero
  char solar_battery_current[11]; // string UTF8 end zero
  char solar_power[11]; // string UTF8 end zero
  char load_current[11]; // string UTF8 end zero
  char battery_voltage[11]; // string UTF8 end zero
  char solar_battery_voltage[11]; // string UTF8 end zero
  char inverter_current[11]; // string UTF8 end zero
  char dc_dc_current[11]; // string UTF8 end zero
  char bms1_cell1_voltage[7]; // string UTF8 end zero
  char bms1_cell2_voltage[7]; // string UTF8 end zero
  char bms1_cell3_voltage[7]; // string UTF8 end zero
  char bms1_cell4_voltage[7]; // string UTF8 end zero
  uint8_t bms1_cell1_bal_en; // from 0 to 1
  uint8_t bms1_cell2_bal_en; // from 0 to 1
  uint8_t bms1_cell3_bal_en; // from 0 to 1
  uint8_t bms1_cell4_bal_en; // from 0 to 1
  uint8_t bms1_discharge_status; // from 0 to 1
  uint8_t bms1_charge_status; // from 0 to 1
  char bms1_cycle_count[6]; // string UTF8 end zero
  char bms1_fault_count[6]; // string UTF8 end zero
  char bms1_voltage[7]; // string UTF8 end zero
  char bms1_current[7]; // string UTF8 end zero
  int8_t bms1_state_of_charge; // from 0 to 100
  char bms1_state_of_charge1[7]; // string UTF8 end zero
  char bms1_balance_capacity[6]; // string UTF8 end zero
  char bms1_battery_temp[6]; // string UTF8 end zero
  char bms1_bms_temp[6]; // string UTF8 end zero
  char bms1_max_cell_delta[7]; // string UTF8 end zero
  char bms2_cell1_voltage[7]; // string UTF8 end zero
  char bms2_cell2_voltage[7]; // string UTF8 end zero
  char bms2_cell3_voltage[7]; // string UTF8 end zero
  char bms2_cell4_voltage[7]; // string UTF8 end zero
  uint8_t bms2_cell1_bal_en; // from 0 to 1
  uint8_t bms2_cell2_bal_en; // from 0 to 1
  uint8_t bms2_cell3_bal_en; // from 0 to 1
  uint8_t bms2_cell4_bal_en; // from 0 to 1
  uint8_t bms2_discharge_status; // from 0 to 1
  uint8_t bms2_charge_status; // from 0 to 1
  char bms2_cycle_count[6]; // string UTF8 end zero
  char bms2_fault_count[6]; // string UTF8 end zero
  char bms2_voltage[7]; // string UTF8 end zero
  char bms2_current[7]; // string UTF8 end zero
  int8_t bms2_state_of_charge; // from 0 to 100
  char bms2_state_of_charge1[7]; // string UTF8 end zero
  char bms2_balance_capacity[6]; // string UTF8 end zero
  char bms2_battery_temp[6]; // string UTF8 end zero
  char bms2_bms_temp[6]; // string UTF8 end zero
  char bms2_max_cell_delta[7]; // string UTF8 end zero
  char bms3_cell1_voltage[7]; // string UTF8 end zero
  char bms3_cell2_voltage[7]; // string UTF8 end zero
  char bms3_cell3_voltage[7]; // string UTF8 end zero
  char bms3_cell4_voltage[7]; // string UTF8 end zero
  uint8_t bms3_cell1_bal_en; // from 0 to 1
  uint8_t bms3_cell2_bal_en; // from 0 to 1
  uint8_t bms3_cell3_bal_en; // from 0 to 1
  uint8_t bms3_cell4_bal_en; // from 0 to 1
  uint8_t bms3_discharge_status; // from 0 to 1
  uint8_t bms3_charge_status; // from 0 to 1
  char bms3_cycle_count[6]; // string UTF8 end zero
  char bms3_fault_count[6]; // string UTF8 end zero
  char bms3_voltage[7]; // string UTF8 end zero
  char bms3_current[7]; // string UTF8 end zero
  int8_t bms3_state_of_charge; // from 0 to 100
  char bms3_state_of_charge1[7]; // string UTF8 end zero
  char bms3_balance_capacity[6]; // string UTF8 end zero
  char bms3_battery_temp[6]; // string UTF8 end zero
  char bms3_bms_temp[6]; // string UTF8 end zero
  char bms3_max_cell_delta[7]; // string UTF8 end zero
  char solar1_voltage[7]; // string UTF8 end zero
  char solar1_battery_current[7]; // string UTF8 end zero
  char solar1_power[7]; // string UTF8 end zero
  char solar1_controller_temp[7]; // string UTF8 end zero
  char solar1_battery_voltage[7]; // string UTF8 end zero
  char solar2_voltage[7]; // string UTF8 end zero
  char solar2_battery_current[7]; // string UTF8 end zero
  char solar2_power[7]; // string UTF8 end zero
  char solar2_controller_temp[7]; // string UTF8 end zero
  char solar2_battery_voltage[7]; // string UTF8 end zero
  char solar3_voltage[7]; // string UTF8 end zero
  char solar3_battery_current[7]; // string UTF8 end zero
  char solar3_power[7]; // string UTF8 end zero
  char solar3_controller_temp[7]; // string UTF8 end zero
  char solar3_battery_voltage[7]; // string UTF8 end zero
  uint8_t booster_power_feedback; // from 0 to 1
  char inverter_temp[11]; // string UTF8 end zero
  char inside_temperature[11]; // string UTF8 end zero
  char outside_temperature[11]; // string UTF8 end zero
  char electrical_cabinet_temperature[11]; // string UTF8 end zero
  float onlineGraph_02_inside_temp;
  float onlineGraph_02_outside_temp;
  float onlineGraph_02_electrical_temp;
  float onlineGraph_02_inverter_temp;

    // other variable
  uint8_t connect_flag;  // =1 if wire connected, else =0

} RemoteXY, Sensors;        
#pragma pack(pop)
 
/////////////////////////////////////////////
//           END RemoteXY include          //
/////////////////////////////////////////////

#include <ESP8266HTTPClient.h>
#include <WiFiClient.h>
#include <ArduinoJson.h>

String mainURL ="http://192.168.8.146:8000";
JsonDocument doc;


long currenttime = 0;


class ApiAppController {

  public:
    long get_data_timer = 0;
    long get_data_interval = 250; // ms

    ApiAppController() {
      // constructor
    }

    void run() {
      if ((currenttime - get_data_timer) >= get_data_interval) {
        get_all_data();
        get_data_timer = currenttime;
      }
      RemoteXY_callbacks();
    }


    void assign_Sensor_data(JsonDocument doc) {
      // Assign all variable values to Sensor structure
      // BMS1
      floatToCharArray(Sensors.bms1_cell1_voltage, doc["bms1_cell1_voltage"]);
      floatToCharArray(Sensors.bms1_cell2_voltage, doc["bms1_cell2_voltage"]);
      floatToCharArray(Sensors.bms1_cell3_voltage, doc["bms1_cell3_voltage"]);
      floatToCharArray(Sensors.bms1_cell4_voltage, doc["bms1_cell4_voltage"]);
      Sensors.bms1_cell1_bal_en = doc["bms1_cell1_bal_en"];
      Sensors.bms1_cell2_bal_en = doc["bms1_cell2_bal_en"];
      Sensors.bms1_cell3_bal_en = doc["bms1_cell3_bal_en"];
      Sensors.bms1_cell4_bal_en = doc["bms1_cell4_bal_en"];
      Sensors.bms1_discharge_status = doc["bms1_discharge_status"];
      Sensors.bms1_charge_status = doc["bms1_charge_status"];
      floatToCharArray(Sensors.bms1_cycle_count, doc["bms1_cycle_count"], 0);
      floatToCharArray(Sensors.bms1_fault_count, doc["bms1_fault_count"], 0);
      floatToCharArray(Sensors.bms1_voltage, doc["bms1_voltage"], 2);
      floatToCharArray(Sensors.bms1_current, doc["bms1_current"], 2);
      Sensors.bms1_state_of_charge = doc["bms1_state_of_charge"];
      floatToCharArray(Sensors.bms1_state_of_charge1, doc["bms1_state_of_charge1"], 2);
      floatToCharArray(Sensors.bms1_balance_capacity, doc["bms1_balance_capacity"], 0);
      floatToCharArray(Sensors.bms1_battery_temp, doc["bms1_battery_temp"], 2);
      floatToCharArray(Sensors.bms1_bms_temp, doc["bms1_bms_temp"], 2);
      floatToCharArray(Sensors.bms1_max_cell_delta, doc["bms1_max_cell_delta"]);

      // BMS2
      floatToCharArray(Sensors.bms2_cell1_voltage, doc["bms2_cell1_voltage"]);
      floatToCharArray(Sensors.bms2_cell2_voltage, doc["bms2_cell2_voltage"]);
      floatToCharArray(Sensors.bms2_cell3_voltage, doc["bms2_cell3_voltage"]);
      floatToCharArray(Sensors.bms2_cell4_voltage, doc["bms2_cell4_voltage"]);
      Sensors.bms2_cell1_bal_en = doc["bms2_cell1_bal_en"];
      Sensors.bms2_cell2_bal_en = doc["bms2_cell2_bal_en"];
      Sensors.bms2_cell3_bal_en = doc["bms2_cell3_bal_en"];
      Sensors.bms2_cell4_bal_en = doc["bms2_cell4_bal_en"];
      Sensors.bms2_discharge_status = doc["bms2_discharge_status"];
      Sensors.bms2_charge_status = doc["bms2_charge_status"];
      floatToCharArray(Sensors.bms2_cycle_count, doc["bms2_cycle_count"], 0);
      floatToCharArray(Sensors.bms2_fault_count, doc["bms2_fault_count"], 0);
      floatToCharArray(Sensors.bms2_voltage, doc["bms2_voltage"], 2);
      floatToCharArray(Sensors.bms2_current, doc["bms2_current"], 2);
      Sensors.bms2_state_of_charge = doc["bms2_state_of_charge"];
      floatToCharArray(Sensors.bms2_state_of_charge1, doc["bms2_state_of_charge1"], 2);
      floatToCharArray(Sensors.bms2_balance_capacity, doc["bms2_balance_capacity"], 0);
      floatToCharArray(Sensors.bms2_battery_temp, doc["bms2_battery_temp"], 2);
      floatToCharArray(Sensors.bms2_bms_temp, doc["bms2_bms_temp"], 2);
      floatToCharArray(Sensors.bms2_max_cell_delta, doc["bms2_max_cell_delta"]);

      // BMS3
      floatToCharArray(Sensors.bms3_cell1_voltage, doc["bms3_cell1_voltage"]);
      floatToCharArray(Sensors.bms3_cell2_voltage, doc["bms3_cell2_voltage"]);
      floatToCharArray(Sensors.bms3_cell3_voltage, doc["bms3_cell3_voltage"]);
      floatToCharArray(Sensors.bms3_cell4_voltage, doc["bms3_cell4_voltage"]);
      Sensors.bms3_cell1_bal_en = doc["bms3_cell1_bal_en"];
      Sensors.bms3_cell2_bal_en = doc["bms3_cell2_bal_en"];
      Sensors.bms3_cell3_bal_en = doc["bms3_cell3_bal_en"];
      Sensors.bms3_cell4_bal_en = doc["bms3_cell4_bal_en"];
      Sensors.bms3_discharge_status = doc["bms3_discharge_status"];
      Sensors.bms3_charge_status = doc["bms3_charge_status"];
      floatToCharArray(Sensors.bms3_cycle_count, doc["bms3_cycle_count"], 0);
      floatToCharArray(Sensors.bms3_fault_count, doc["bms3_fault_count"], 0);
      floatToCharArray(Sensors.bms3_voltage, doc["bms3_voltage"], 2);
      floatToCharArray(Sensors.bms3_current, doc["bms3_current"], 2);
      Sensors.bms3_state_of_charge = doc["bms3_state_of_charge"];
      floatToCharArray(Sensors.bms3_state_of_charge1, doc["bms3_state_of_charge1"], 2);
      floatToCharArray(Sensors.bms3_balance_capacity, doc["bms3_balance_capacity"], 0);
      floatToCharArray(Sensors.bms3_battery_temp, doc["bms3_battery_temp"], 2);
      floatToCharArray(Sensors.bms3_bms_temp, doc["bms3_bms_temp"], 2);
      floatToCharArray(Sensors.bms3_max_cell_delta, doc["bms3_max_cell_delta"]);

      calculateBatteryTotals(doc);

      Sensors.booster_power = doc["booster_power"];
      Sensors.water_heater = doc["water_heater"];
      Sensors.inverter = doc["inverter"];
      Sensors.solar_fan = doc["solar_fan"];
      Sensors.exhaust_fan = doc["exhaust_fan"];
      Sensors.booster_power_feedback = doc["booster_power_feedback"];

      floatToCharArray(Sensors.inverter_current, doc["inverter_current"], 2);
      floatToCharArray(Sensors.dc_dc_current, doc["dc_dc_current"], 2);

      floatToCharArray(Sensors.inverter_temp, doc["inverter_temp"], 2);
      floatToCharArray(Sensors.inside_temperature, doc["inside_temperature"], 2);
      floatToCharArray(Sensors.outside_temperature, doc["outside_temperature"], 2);
      floatToCharArray(Sensors.electrical_cabinet_temperature, doc["electrical_cabinet_temperature"], 2);
      Sensors.onlineGraph_02_inverter_temp = doc["inverter_temp"];
      Sensors.onlineGraph_02_inside_temp = doc["inside_temperature"];
      Sensors.onlineGraph_02_outside_temp = doc["outside_temperature"];
      Sensors.onlineGraph_02_electrical_temp = doc["electrical_cabinet_temperature"];

      floatToCharArray(Sensors.solar1_voltage, doc["solar1_voltage"], 2);
      floatToCharArray(Sensors.solar1_battery_current, doc["solar1_battery_current"], 2);
      floatToCharArray(Sensors.solar1_power, doc["solar1_power"], 1);
      floatToCharArray(Sensors.solar1_controller_temp, doc["solar1_controller_temp"], 2);
      floatToCharArray(Sensors.solar1_battery_voltage, doc["solar1_battery_voltage"], 2);

      floatToCharArray(Sensors.solar2_voltage, doc["solar2_voltage"], 2);
      floatToCharArray(Sensors.solar2_battery_current, doc["solar2_battery_current"], 2);
      floatToCharArray(Sensors.solar2_power, doc["solar2_power"], 1);
      floatToCharArray(Sensors.solar2_controller_temp, doc["solar2_controller_temp"], 2);
      floatToCharArray(Sensors.solar2_battery_voltage, doc["solar2_battery_voltage"], 2);

      floatToCharArray(Sensors.solar3_voltage, doc["solar3_voltage"], 2);
      floatToCharArray(Sensors.solar3_battery_current, doc["solar3_battery_current"], 2);
      floatToCharArray(Sensors.solar3_power, doc["solar3_power"], 1);
      floatToCharArray(Sensors.solar3_controller_temp, doc["solar3_controller_temp"], 2);
      floatToCharArray(Sensors.solar3_battery_voltage, doc["solar3_battery_voltage"], 2);

      floatToCharArray(Sensors.solar_battery_voltage, doc["solar_battery_voltage"], 2);
      floatToCharArray(Sensors.solar_battery_current, doc["solar_battery_current"], 2);
      floatToCharArray(Sensors.solar_power, doc["solar_power"], 1);

      Sensors.connect_flag = doc["connect_flag"];
    }


    
    void calculateBatteryTotals(JsonDocument doc) {
      // combine voltage
      float bms1_voltage = doc["bms1_voltage"];
      float bms2_voltage = doc["bms2_voltage"];
      float bms3_voltage = doc["bms3_voltage"];
      float battery_voltage = (bms1_voltage + bms2_voltage + bms3_voltage) / 3.0;
      floatToCharArray(Sensors.battery_voltage, battery_voltage, 2);

      // combine current
      float bms1_current = doc["bms1_current"];
      float bms2_current = doc["bms2_current"];
      float bms3_current = doc["bms3_current"];
      float battery_current = bms1_current + bms2_current + bms3_current;
      floatToCharArray(Sensors.battery_current, battery_current, 2);
      Sensors.onlineGraph_01_battery_current = battery_current;

      // combine power
      float battery_power = battery_voltage * battery_current;
      floatToCharArray(Sensors.battery_power, battery_power, 1);

      // combine soc
      float bms1_balance_capacity = doc["bms1_balance_capacity"];
      float bms2_balance_capacity = doc["bms2_balance_capacity"];
      float bms3_balance_capacity = doc["bms3_balance_capacity"];
      float battery_soc = (bms1_balance_capacity + bms2_balance_capacity + bms3_balance_capacity);
      floatToCharArray(Sensors.battery_state_of_charge, battery_soc, 2);

      // soc percent
      float soc_percent = (battery_soc / (280.0*3.0)) * 100.0;
      Sensors.battery_state_of_charge_percent = soc_percent;
      floatToCharArray(Sensors.battery_state_of_charge_percent2, soc_percent, 2);

      set_battery_params(battery_voltage, battery_current, battery_power, battery_soc, soc_percent);
    }



    void SendSensorDataToApp() {
      // Apply changes coming from sensors (from python server) to app
      // all except app controls (buttons, sliders, etc.)

      // BMS1
      strcpy(RemoteXY.bms1_cell1_voltage, Sensors.bms1_cell1_voltage);
      strcpy(RemoteXY.bms1_cell2_voltage, Sensors.bms1_cell2_voltage);
      strcpy(RemoteXY.bms1_cell3_voltage, Sensors.bms1_cell3_voltage);
      strcpy(RemoteXY.bms1_cell4_voltage, Sensors.bms1_cell4_voltage);
      RemoteXY.bms1_cell1_bal_en = Sensors.bms1_cell1_bal_en;
      RemoteXY.bms1_cell2_bal_en = Sensors.bms1_cell2_bal_en;
      RemoteXY.bms1_cell3_bal_en = Sensors.bms1_cell3_bal_en;
      RemoteXY.bms1_cell4_bal_en = Sensors.bms1_cell4_bal_en;
      RemoteXY.bms1_discharge_status = Sensors.bms1_discharge_status;
      RemoteXY.bms1_charge_status = Sensors.bms1_charge_status;
      strcpy(RemoteXY.bms1_cycle_count, Sensors.bms1_cycle_count);
      strcpy(RemoteXY.bms1_fault_count, Sensors.bms1_fault_count);
      strcpy(RemoteXY.bms1_voltage, Sensors.bms1_voltage);
      strcpy(RemoteXY.bms1_current, Sensors.bms1_current);
      RemoteXY.bms1_state_of_charge = Sensors.bms1_state_of_charge;
      strcpy(RemoteXY.bms1_state_of_charge1, Sensors.bms1_state_of_charge1);
      strcpy(RemoteXY.bms1_balance_capacity, Sensors.bms1_balance_capacity);
      strcpy(RemoteXY.bms1_battery_temp, Sensors.bms1_battery_temp);
      strcpy(RemoteXY.bms1_bms_temp, Sensors.bms1_bms_temp);
      strcpy(RemoteXY.bms1_max_cell_delta, Sensors.bms1_max_cell_delta);

      //BMS2
      strcpy(RemoteXY.bms2_cell1_voltage, Sensors.bms2_cell1_voltage);
      strcpy(RemoteXY.bms2_cell2_voltage, Sensors.bms2_cell2_voltage);
      strcpy(RemoteXY.bms2_cell3_voltage, Sensors.bms2_cell3_voltage);
      strcpy(RemoteXY.bms2_cell4_voltage, Sensors.bms2_cell4_voltage);
      RemoteXY.bms2_cell1_bal_en = Sensors.bms2_cell1_bal_en;
      RemoteXY.bms2_cell2_bal_en = Sensors.bms2_cell2_bal_en;
      RemoteXY.bms2_cell3_bal_en = Sensors.bms2_cell3_bal_en;
      RemoteXY.bms2_cell4_bal_en = Sensors.bms2_cell4_bal_en;
      RemoteXY.bms2_discharge_status = Sensors.bms2_discharge_status;
      RemoteXY.bms2_charge_status = Sensors.bms2_charge_status;
      strcpy(RemoteXY.bms2_cycle_count, Sensors.bms2_cycle_count);
      strcpy(RemoteXY.bms2_fault_count, Sensors.bms2_fault_count);
      strcpy(RemoteXY.bms2_voltage, Sensors.bms2_voltage);
      strcpy(RemoteXY.bms2_current, Sensors.bms2_current);
      RemoteXY.bms2_state_of_charge = Sensors.bms2_state_of_charge;
      strcpy(RemoteXY.bms2_state_of_charge1, Sensors.bms2_state_of_charge1);
      strcpy(RemoteXY.bms2_balance_capacity, Sensors.bms2_balance_capacity);
      strcpy(RemoteXY.bms2_battery_temp, Sensors.bms2_battery_temp);
      strcpy(RemoteXY.bms2_bms_temp, Sensors.bms2_bms_temp);
      strcpy(RemoteXY.bms2_max_cell_delta, Sensors.bms2_max_cell_delta);

      //BMS3
      strcpy(RemoteXY.bms3_cell1_voltage, Sensors.bms3_cell1_voltage);
      strcpy(RemoteXY.bms3_cell2_voltage, Sensors.bms3_cell2_voltage);
      strcpy(RemoteXY.bms3_cell3_voltage, Sensors.bms3_cell3_voltage);
      strcpy(RemoteXY.bms3_cell4_voltage, Sensors.bms3_cell4_voltage);
      RemoteXY.bms3_cell1_bal_en = Sensors.bms3_cell1_bal_en;
      RemoteXY.bms3_cell2_bal_en = Sensors.bms3_cell2_bal_en;
      RemoteXY.bms3_cell3_bal_en = Sensors.bms3_cell3_bal_en;
      RemoteXY.bms3_cell4_bal_en = Sensors.bms3_cell4_bal_en;
      RemoteXY.bms3_discharge_status = Sensors.bms3_discharge_status;
      RemoteXY.bms3_charge_status = Sensors.bms3_charge_status;
      strcpy(RemoteXY.bms3_cycle_count, Sensors.bms3_cycle_count);
      strcpy(RemoteXY.bms3_fault_count, Sensors.bms3_fault_count);
      strcpy(RemoteXY.bms3_voltage, Sensors.bms3_voltage);
      strcpy(RemoteXY.bms3_current, Sensors.bms3_current);
      RemoteXY.bms3_state_of_charge = Sensors.bms3_state_of_charge;
      strcpy(RemoteXY.bms3_state_of_charge1, Sensors.bms3_state_of_charge1);
      strcpy(RemoteXY.bms3_balance_capacity, Sensors.bms3_balance_capacity);
      strcpy(RemoteXY.bms3_battery_temp, Sensors.bms3_battery_temp);
      strcpy(RemoteXY.bms3_bms_temp, Sensors.bms3_bms_temp);
      strcpy(RemoteXY.bms3_max_cell_delta, Sensors.bms3_max_cell_delta);

      // graph
      RemoteXY.onlineGraph_01_battery_current = Sensors.onlineGraph_01_battery_current;
      RemoteXY.onlineGraph_01_solar_current = Sensors.onlineGraph_01_solar_current;
      RemoteXY.onlineGraph_01_load_current = Sensors.onlineGraph_01_load_current;

      // battery
      strcpy(RemoteXY.battery_voltage, Sensors.battery_voltage);
      strcpy(RemoteXY.battery_current, Sensors.battery_current);
      strcpy(RemoteXY.battery_state_of_charge, Sensors.battery_state_of_charge);
      RemoteXY.battery_state_of_charge_percent = Sensors.battery_state_of_charge_percent;
      strcpy(RemoteXY.battery_state_of_charge_percent2, Sensors.battery_state_of_charge_percent2);
      strcpy(RemoteXY.battery_power, Sensors.battery_power);

      // Internet controls feedback
      RemoteXY.booster_power_feedback = Sensors.booster_power_feedback;

      // relay controller
      strcpy(RemoteXY.inverter_current, Sensors.inverter_current);
      strcpy(RemoteXY.dc_dc_current, Sensors.dc_dc_current);

      // temps
      strcpy(RemoteXY.inverter_temp, Sensors.inverter_temp);
      strcpy(RemoteXY.inside_temperature, Sensors.inside_temperature);
      strcpy(RemoteXY.outside_temperature, Sensors.outside_temperature);
      strcpy(RemoteXY.electrical_cabinet_temperature, Sensors.electrical_cabinet_temperature);
      RemoteXY.onlineGraph_02_inverter_temp = Sensors.onlineGraph_02_inverter_temp;
      RemoteXY.onlineGraph_02_inside_temp = Sensors.onlineGraph_02_inside_temp;
      RemoteXY.onlineGraph_02_outside_temp = Sensors.onlineGraph_02_outside_temp;
      RemoteXY.onlineGraph_02_electrical_temp = Sensors.onlineGraph_02_electrical_temp;

      // solar
      strcpy(RemoteXY.solar1_voltage, Sensors.solar1_voltage);
      strcpy(RemoteXY.solar1_battery_current, Sensors.solar1_battery_current);
      strcpy(RemoteXY.solar1_power, Sensors.solar1_power);
      strcpy(RemoteXY.solar1_controller_temp, Sensors.solar1_controller_temp);
      strcpy(RemoteXY.solar1_battery_voltage, Sensors.solar1_battery_voltage);

      strcpy(RemoteXY.solar2_voltage, Sensors.solar2_voltage);
      strcpy(RemoteXY.solar2_battery_current, Sensors.solar2_battery_current);
      strcpy(RemoteXY.solar2_power, Sensors.solar2_power);
      strcpy(RemoteXY.solar2_controller_temp, Sensors.solar2_controller_temp);
      strcpy(RemoteXY.solar2_battery_voltage, Sensors.solar2_battery_voltage);

      strcpy(RemoteXY.solar3_voltage, Sensors.solar3_voltage);
      strcpy(RemoteXY.solar3_battery_current, Sensors.solar3_battery_current);
      strcpy(RemoteXY.solar3_power, Sensors.solar3_power);
      strcpy(RemoteXY.solar3_controller_temp, Sensors.solar3_controller_temp);
      strcpy(RemoteXY.solar3_battery_voltage, Sensors.solar3_battery_voltage);

      strcpy(RemoteXY.solar_battery_voltage, Sensors.solar_battery_voltage);
      strcpy(RemoteXY.solar_battery_current, Sensors.solar_battery_current);
      strcpy(RemoteXY.solar_power, Sensors.solar_power);
    }


  // apply changes for App Outputs - only need to do this for controls
  void RemoteXY_callbacks() {
    if (Sensors.booster_power != RemoteXY.booster_power) {
      set_value("booster_power", String(RemoteXY.booster_power));
      Sensors.booster_power = RemoteXY.booster_power;
    }

    if (Sensors.water_heater != RemoteXY.water_heater) {
      set_value("water_heater", String(RemoteXY.water_heater));
      Sensors.water_heater = RemoteXY.water_heater;
    }

    if (Sensors.inverter != RemoteXY.inverter) {
      set_value("inverter", String(RemoteXY.inverter));
      Sensors.inverter = RemoteXY.inverter;
    }

    if (Sensors.solar_fan != RemoteXY.solar_fan) {
      set_value("solar_fan", String(RemoteXY.solar_fan));
      Sensors.solar_fan = RemoteXY.solar_fan;
    }

    if (Sensors.exhaust_fan != RemoteXY.exhaust_fan) {
      set_value("exhaust_fan", String(RemoteXY.exhaust_fan));
      Sensors.exhaust_fan = RemoteXY.exhaust_fan;
    }
  }



    void get_all_data() {
      WiFiClient client;
      HTTPClient http;

      // Serial.print("[HTTP] begin...");

      if (http.begin(client, mainURL + "/get_all")) {  // HTTP
        // Serial.print("[HTTP] GET...");
        // start connection and send HTTP header
        int httpCode = http.GET();

        // httpCode will be negative on error
        if (httpCode > 0) {
          // HTTP header has been send and Server response header has been handled
          Serial.printf("[HTTP] GET code: %d", httpCode);

          // file found at server
          if (httpCode == HTTP_CODE_OK || httpCode == HTTP_CODE_MOVED_PERMANENTLY) {
            String payload = http.getString();
            deserializeJson(doc, payload);

            // Assign all variable values to Sensor structure
            assign_Sensor_data(doc);

            // Apply changes coming from sensors (from python server) to app
            // all except app controls (buttons, sliders, etc.)
            SendSensorDataToApp();
          }
        } else {
          Serial.printf("[HTTP] GET failed, error: %s", http.errorToString(httpCode).c_str());
        }

        http.end();
      } else {
        Serial.printf("[HTTP} Unable to connect");
      }
    }

    void set_value(String key, String value) {
      WiFiClient client;
      HTTPClient http;

      // Serial.print("[HTTP] begin...");

      if (http.begin(client, mainURL + "/set_value/" + key + "/" + value)) {  // HTTP
        // Serial.print("[HTTP] GET...");
        // start connection and send HTTP header
        int httpCode = http.GET();

        // httpCode will be negative on error
        if (httpCode > 0) {
          // HTTP header has been send and Server response header has been handled
          Serial.printf("[HTTP] GET code: %d", httpCode);

          // file found at server
          if (httpCode == HTTP_CODE_OK || httpCode == HTTP_CODE_MOVED_PERMANENTLY) {
            String payload = http.getString();
            // deserializeJson(doc, payload);
            // Serial.println(payload);
          }
        } else {
          Serial.printf("[HTTP] GET failed, error: %s", http.errorToString(httpCode).c_str());
        }

        http.end();
      } else {
        Serial.printf("[HTTP} Unable to connect");
      }
    }


    void set_battery_params(float voltage, float current, float power, float soc, float soc_percent) {
      WiFiClient client;
      HTTPClient http;

      // Serial.print("[HTTP] begin...");

      if (http.begin(client, mainURL + "/set_battery_params/" + voltage + "/" + current + "/" + power + "/" + soc + "/" + soc_percent)) {  // HTTP
        // Serial.print("[HTTP] GET...");
        // start connection and send HTTP header
        int httpCode = http.GET();

        // httpCode will be negative on error
        if (httpCode > 0) {
          // HTTP header has been send and Server response header has been handled
          Serial.printf("[HTTP] GET code: %d", httpCode);

          // file found at server
          if (httpCode == HTTP_CODE_OK || httpCode == HTTP_CODE_MOVED_PERMANENTLY) {
            String payload = http.getString();
            // deserializeJson(doc, payload);
            // Serial.println(payload);
          }
        } else {
          Serial.printf("[HTTP] GET failed, error: %s", http.errorToString(httpCode).c_str());
        }

        http.end();
      } else {
        Serial.printf("[HTTP} Unable to connect");
      }
    }




  private:
    // convert float to char array
    void floatToCharArray(char* output, float val, int decimal_places=3) {
      char temp[32];
      dtostrf(val, 0, decimal_places, temp);
      strcpy(output, temp);
    }
};








