#include "Arduino.h"
#include "Sonar.h"

int Sonar::readCm() {
    delay(50);
    return ping_cm();
}

int Sonar::readIn() {
    delay(50);
    return ping_in();
} 