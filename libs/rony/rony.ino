#include "Rony.h"

Motor motor;

void setup() {
  motor.enable(true);
  Serial.begin(9600);
}

void loop() {
  // Serial.println(ble.getCommand());

}
