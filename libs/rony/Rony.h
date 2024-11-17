#ifndef __RONY_H_
#define __RONY_H_

//
// Obstacle sensors
//
#define SENS_LEFT 28
#define SENS_RIGHT 27
#define SESN_ENABLE

//
// Buzzer
//
#define BUZZ_PIN 22

//
// Sensors
//
#define RED_BUTTON 41
#define GREEN_BUTTON 40
#define BLUE_BUTTON 39
#define FIRST_POTENC 6
#define SECOND_POTENC 7
#define TEMPERATURE_PIN 1

//
// Leds
//
#define RED_LED 35
#define GREEN_LED 34
#define BLUE_LED 33


#include "Motor.h"
#include "BLE.h"
#include "Sonar.h"
#include "LineTracker.h"
#include "WS2812.h"

class Rony { 
public:
    void buzz_enable(bool en);
    int read_potenc(int pin);
    bool read_btn(int pin);
    void led_enable(int pin, bool en);
    int read_temperature();
};

#endif // __RONY_H_