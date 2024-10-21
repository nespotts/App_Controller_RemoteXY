
// apply changes for App Outputs - only need to do this for controls
void RemoteXY_callbacks() {
  // if (Sensors.set_temp != RemoteXY.set_temp) {
  //   Serial.println("setting temperature value");
  //   set_value("set_temp_display", String(RemoteXY.set_temp));
  //   set_value("set_temp", String(RemoteXY.set_temp));
  //   // set_value("Temp", String(RemoteXY.Temp));
  //   // RemoteXY.Temp = Sensors.Temp;
  //   Sensors = RemoteXY;
  // }

  if (Sensors.booster_power != RemoteXY.booster_power) {
    set_value("booster_power", String(RemoteXY.booster_power));
    Sensor.booster_power = RemoteXY.booster_power;
  }


}

  
  