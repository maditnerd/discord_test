#include "arduino_secrets.h"
/*
  Discord WebHook Example for ESP32
*/
#include "discord.h"

void setup() {
  Serial.begin(9600);
  connect_to_wifi();
  sendDiscord("Hello World!");
}

void loop() {
}
