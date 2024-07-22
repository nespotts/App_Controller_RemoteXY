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

#include <Arduino.h>
#include <ESP8266WiFi.h>
#include <ESP8266HTTPClient.h>
#include <WiFiClient.h>
#include <ArduinoJson.h>

// RemoteXY connection settings 
#define REMOTEXY_WIFI_SSID "GL-AX1800-50f"
#define REMOTEXY_WIFI_PASSWORD "SpottsHotSpot"
#define REMOTEXY_CLOUD_SERVER "cloud.remotexy.com"
#define REMOTEXY_CLOUD_PORT 6376
#define REMOTEXY_CLOUD_TOKEN "07adb9420a6362df80bc7a79ba58607b"

#include <RemoteXY.h>

// RemoteXY GUI configuration  
#pragma pack(push, 1)  
uint8_t RemoteXY_CONF[] =   // 94 bytes
  { 255,7,0,12,0,87,0,17,0,0,0,31,1,106,200,3,1,0,0,6,
  0,2,12,12,31,18,0,2,26,31,31,79,78,0,79,70,70,0,4,3,
  70,72,15,128,2,26,7,11,45,40,10,44,2,26,2,4,66,8,88,86,
  10,129,2,26,67,74,71,29,14,6,25,31,11,10,5,167,24,24,48,4,
  26,31,79,78,0,31,79,70,70,0,0,0,0,0 };
  
// this structure defines all the variables and events of your control interface 
struct {

    // input variables
  uint8_t switch_01; // =1 if switch ON and =0 if OFF
  int8_t set_temp; // from 0 to 100
  float Temp;

    // output variables
  int8_t set_temp_val; // from 0 to 100
  char set_temp_display[11]; // string UTF8 end zero

    // other variable
  uint8_t connect_flag;  // =1 if wire connected, else =0

} RemoteXY, Sensors;  
#pragma pack(pop)
 
/////////////////////////////////////////////
//           END RemoteXY include          //
/////////////////////////////////////////////

#include "network.h"
#include "functions.h"



void setup() 
{
  RemoteXY_Init (); 
  
  // TODO you setup code
  Serial.begin(115200);
  
  ConnectWifi();
  get_all_data();
  RemoteXY = Sensors;
}

void loop() 
{ 
  RemoteXY_Handler ();
  get_all_data();
  
  // TODO you loop code
  // use the RemoteXY structure for data transfer
  // do not call delay(), use instead RemoteXY_delay() 
  RemoteXY_delay(50);

  // RemoteXY.set_temp_display = RemoteXY.set_temp;
  dtostrf(RemoteXY.set_temp, 4, 2, RemoteXY.set_temp_display);
  // RemoteXY.set_temp_display = dtostrf(RemoteXY.set_temp, , 0);
  RemoteXY.Temp = RemoteXY.set_temp;


  Serial.printf("doc Temperature: %f slider temp: %f", Sensors.set_temp, RemoteXY.set_temp);
  Serial.println();


  // apply changes for App Outputs - only need to do this for controls
  if (Sensors.set_temp != RemoteXY.set_temp) {
    Serial.println("setting temperature value");
    set_value("set_temp_val", String(RemoteXY.set_temp_val));
    set_value("set_temp", String(RemoteXY.set_temp));
    // set_value("Temp", String(RemoteXY.Temp));
    // RemoteXY.Temp = Sensors.Temp;
    Sensors = RemoteXY;
  }
}

