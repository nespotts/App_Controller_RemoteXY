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
uint8_t RemoteXY_CONF[] =   // 685 bytes
  { 255,7,0,105,0,166,2,17,0,0,0,26,1,106,200,3,1,0,0,8,
  0,2,6,23,31,13,0,2,26,31,31,79,78,0,79,70,70,0,4,1,
  62,82,13,128,2,30,7,5,45,32,11,8,30,26,4,66,2,81,101,11,
  129,178,27,67,83,63,22,11,6,30,26,11,131,24,3,23,8,3,27,29,
  31,80,97,103,101,32,49,0,38,131,2,3,21,8,3,27,29,31,77,97,
  105,110,0,41,131,48,3,23,8,3,27,29,31,80,97,103,101,32,50,0,
  26,43,0,131,2,3,21,8,3,28,30,31,77,97,105,110,0,41,131,24,
  3,23,8,3,28,30,31,80,97,103,101,32,49,0,38,131,48,3,23,8,
  3,28,30,31,80,97,103,101,32,50,0,26,129,9,96,8,3,16,67,101,
  108,108,32,49,0,67,1,101,23,7,5,65,26,7,67,1,114,23,7,5,
  65,26,7,67,1,128,23,7,5,65,26,7,67,1,142,23,7,5,65,26,
  7,129,9,110,8,3,16,67,101,108,108,32,50,0,129,9,124,8,3,30,
  67,101,108,108,32,51,0,129,9,138,8,3,30,67,101,108,108,32,52,0,
  129,8,15,19,8,16,70,114,111,110,116,0,129,10,151,18,4,30,77,97,
  120,32,68,101,108,116,97,0,70,27,100,8,8,16,26,37,0,70,27,114,
  8,8,16,26,37,0,70,27,128,8,8,16,26,37,0,70,27,142,8,8,
  16,26,37,0,70,8,170,8,8,16,26,135,0,129,5,165,14,3,30,68,
  105,115,99,104,97,114,103,101,0,129,24,165,10,3,30,67,104,97,114,103,
  101,0,70,25,170,8,8,16,26,135,0,129,7,181,9,3,30,67,121,99,
  108,101,115,0,129,24,181,9,3,30,70,97,117,108,116,115,0,67,4,186,
  15,8,5,178,26,6,67,21,186,15,8,5,50,26,6,67,4,30,25,9,
  5,164,26,7,129,11,25,11,3,16,86,111,108,116,97,103,101,0,67,4,
  43,25,9,5,65,26,7,129,11,39,10,3,16,67,117,114,114,101,110,116,
  0,129,7,53,21,3,16,83,116,97,116,101,32,111,102,32,67,104,97,114,
  103,101,0,66,3,59,30,7,129,176,30,129,19,69,10,3,16,47,32,32,
  32,32,50,56,48,0,67,5,72,27,9,5,178,26,7,67,3,68,15,4,
  5,16,26,6,67,1,87,18,7,5,37,26,6,129,2,83,18,3,16,66,
  97,116,116,101,114,121,32,84,101,109,112,0,67,20,87,18,7,5,37,26,
  6,129,23,83,15,3,16,66,77,83,32,84,101,109,112,0,67,8,156,23,
  7,5,65,26,7,129,29,96,5,3,16,66,97,108,0,129,29,110,5,3,
  16,66,97,108,0,129,29,124,5,3,16,66,97,108,0,129,29,138,5,3,
  16,66,97,108,0,4,0,1,7,20,24,24,0,2,31,0,131,2,3,21,
  8,3,28,30,31,77,97,105,110,0,41,131,24,3,23,8,3,28,30,31,
  80,97,103,101,32,49,0,38,131,48,3,23,8,3,28,30,31,80,97,103,
  101,32,50,0,26 };
  
// this structure defines all the variables and events of your control interface 
struct {

    // input variables
  uint8_t switch_01; // =1 if switch ON and =0 if OFF
  int8_t set_temp; // from 0 to 100
  float Temp;
  uint8_t button_02; // =1 if button pressed, else =0

    // output variables
  int8_t set_temp_val; // from 0 to 100
  char set_temp_display[11]; // string UTF8 end zero
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
  int8_t bms1_balance_capacity; // from 0 to 100
  char bms1_state_of_charge_percentage[7]; // string UTF8 end zero
  char bms1_state_of_charge[6]; // string UTF8 end zero
  char bms1_battery_temp[6]; // string UTF8 end zero
  char bms1_bms_temp[6]; // string UTF8 end zero
  char bms1_max_cell_delta[7]; // string UTF8 end zero

    // other variable
  uint8_t connect_flag;  // =1 if wire connected, else =0

} RemoteXY, Sensors;  
#pragma pack(pop)
 
/////////////////////////////////////////////
//           END RemoteXY include          //
/////////////////////////////////////////////



String mainURL ="http://192.168.8.148";
JsonDocument doc;

long currenttime = 0;
long get_data_timer = 0;
long get_data_interval = 500; // ms


// convert float to char array
void floatToCharArray(char* output, float val, int decimal_places=3) {
  char temp[32];
  dtostrf(val, 0, decimal_places, temp);
  strcpy(output, temp);
}


void assign_Sensor_data(JsonDocument doc) {
  // Assign all variable values to Sensor structure
  floatToCharArray(Sensors.bms1_cell1_voltage, doc["bms1_cell1_voltage"]);
  floatToCharArray(Sensors.bms1_cell2_voltage, doc["bms1_cell2_voltage"]);
  floatToCharArray(Sensors.bms1_cell3_voltage, doc["bms1_cell3_voltage"]);
  floatToCharArray(Sensors.bms1_cell4_voltage, doc["bms1_cell4_voltage"]);
  floatToCharArray(Sensors.bms1_max_cell_delta, doc["bms1_max_cell_delta"]);

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

  Sensors.bms1_balance_capacity = doc["bms1_balance_capacity"];

  floatToCharArray(Sensors.bms1_state_of_charge_percentage, doc["bms1_state_of_charge_percentage"]);
  floatToCharArray(Sensors.bms1_state_of_charge, doc["bms1_state_of_charge"]);
  floatToCharArray(Sensors.bms1_battery_temp, doc["bms1_battery_temp"], 2);
  floatToCharArray(Sensors.bms1_bms_temp, doc["bms1_bms_temp"], 2);

  Sensors.connect_flag = doc["connect_flag"];
}

void SendSensorDataToApp() {
  // Apply changes coming from sensors (from python server) to app
  // all except app controls (buttons, sliders, etc.)
  strcpy(RemoteXY.bms1_cell1_voltage, Sensors.bms1_cell1_voltage);
  strcpy(RemoteXY.bms1_cell2_voltage, Sensors.bms1_cell2_voltage);
  strcpy(RemoteXY.bms1_cell3_voltage, Sensors.bms1_cell3_voltage);
  strcpy(RemoteXY.bms1_cell4_voltage, Sensors.bms1_cell4_voltage);
  strcpy(RemoteXY.bms1_max_cell_delta, Sensors.bms1_max_cell_delta);

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

  RemoteXY.bms1_balance_capacity = Sensors.bms1_balance_capacity;

  strcpy(RemoteXY.bms1_state_of_charge_percentage, Sensors.bms1_state_of_charge_percentage);
  strcpy(RemoteXY.bms1_state_of_charge, Sensors.bms1_state_of_charge);
  strcpy(RemoteXY.bms1_battery_temp, Sensors.bms1_battery_temp);
  strcpy(RemoteXY.bms1_bms_temp, Sensors.bms1_bms_temp);
}


void get_all_data() {
  if ((currenttime - get_data_timer) < get_data_interval) {
    return;
  }
  get_data_timer = currenttime;

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


