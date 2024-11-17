#include "Rony.h"

void Rony::buzz_enable(bool en) {
    pinMode(BUZZ_PIN, OUTPUT);
    digitalWrite(BUZZ_PIN, en);
}

int Rony::read_potenc(int pin) {
    return analogRead(pin);
}

bool Rony::read_btn(int pin) {
    return !digitalRead(pin);
}

void Rony::led_enable(int pin, bool en) {
    pinMode(pin, OUTPUT);
    digitalWrite(pin, en);
}

int Rony::read_temperature() {
    return (analogRead(TEMPERATURE_PIN) * (5.0 / 1023.0)) * 100.0;
}