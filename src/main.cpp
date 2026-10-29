#include <Arduino.h>
extern "C" {
#include "payload.h"
}

void setup() { Serial.begin(115200); }

void loop() {
  char buf[128];
  payload_encode(buf, sizeof buf, "node-1", 21.5f, 40.0f);
  Serial.println(buf);
  delay(5000);
}
