#include "arduino_secrets.h"
/*
  Discord WebHook Example for Mkr Wifi 1010
*/

#include "discord.h"

void setup() {
  Serial.begin(9600);
  connectWIFI();
  discord_send("Hello World");
}

void loop() {
}
