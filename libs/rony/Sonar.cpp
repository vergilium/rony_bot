#include "Arduino.h"
#include "Sonar.h"

int Sonar::readCm() {
    delay(50);
    return sonar.ping_cm();
}

int Sonar::readIn() {
    delay(50);
    return sonar.ping_in();
}