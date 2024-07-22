
String mainURL ="http://192.168.8.148";
// String user="user=ahmad22";
float temperature=45.3;

JsonDocument doc;


void get_all_data() {
  WiFiClient client;
  HTTPClient http;

  Serial.print("[HTTP] begin...");

  if (http.begin(client, mainURL + "/get_all")) {  // HTTP
    Serial.print("[HTTP] GET...");
    // start connection and send HTTP header
    int httpCode = http.GET();

    // httpCode will be negative on error
    if (httpCode > 0) {
      // HTTP header has been send and Server response header has been handled
      Serial.printf("[HTTP] GET... code: %d", httpCode);

      // file found at server
      if (httpCode == HTTP_CODE_OK || httpCode == HTTP_CODE_MOVED_PERMANENTLY) {
        String payload = http.getString();
        deserializeJson(doc, payload);

        Sensors.switch_01 = doc["switch_01"];
        Sensors.set_temp = doc["set_temp"];
        Sensors.Temp = doc["Temp"];
        Sensors.set_temp_val = doc["set_temp"];
        Sensors.connect_flag = doc["connect_flag"];

        // Apply changes coming from sensors (from python server) to app
        RemoteXY.Temp = Sensors.Temp;
        // RemoteXY.set_temp_val = Sensors.set_temp_val;
        // RemoteXY.Humidity = Sensors.Humidity;
      }
    } else {
      Serial.printf("[HTTP] GET... failed, error: %s", http.errorToString(httpCode).c_str());
    }

    http.end();
  } else {
    Serial.printf("[HTTP} Unable to connect");
  }
}

void set_value(String key, String value) {
  WiFiClient client;
  HTTPClient http;

  Serial.print("[HTTP] begin...");

  if (http.begin(client, mainURL + "/set_value/" + key + "/" + value)) {  // HTTP
    Serial.print("[HTTP] GET...");
    // start connection and send HTTP header
    int httpCode = http.GET();

    // httpCode will be negative on error
    if (httpCode > 0) {
      // HTTP header has been send and Server response header has been handled
      Serial.printf("[HTTP] GET... code: %d", httpCode);

      // file found at server
      if (httpCode == HTTP_CODE_OK || httpCode == HTTP_CODE_MOVED_PERMANENTLY) {
        String payload = http.getString();
        // deserializeJson(doc, payload);
        // Serial.println(payload);
      }
    } else {
      Serial.printf("[HTTP] GET... failed, error: %s", http.errorToString(httpCode).c_str());
    }

    http.end();
  } else {
    Serial.printf("[HTTP} Unable to connect");
  }
}