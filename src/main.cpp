#include <Arduino.h>
#include <ESP8266WiFi.h>

#include "network.h"
#include "RemoteXY_functions.h"
#include "RemoteXY_Writes.h"

ApiAppController api;


void setup() 
{
  RemoteXY_Init (); 
  
  // TODO you setup code
  Serial.begin(115200);
  
  ConnectWifi();
  api.get_all_data();
  RemoteXY = Sensors;

}

void loop() 
{ 
  currenttime = millis();
  RemoteXY_Handler();

  
  // TODO you loop code
  // use the RemoteXY structure for data transfer
  // do not call delay(), use instead RemoteXY_delay() 


  api.get_all_data();

  // apply changes for App Outputs - only need to do this for controls
  RemoteXY_callbacks();
}

