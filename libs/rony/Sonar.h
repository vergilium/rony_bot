#ifndef __SONAR_H_
#define __SONAR_H_

#include "NewPing.h"

//
// Ultrasonic
//
#define SONAR_TRIG 24
#define SONAR_ECHO 25
#define MAX_DISTANCE 200

class Sonar {
    public:
        int readCm();
        int readIn();
    private:
        NewPing sonar = NewPing(SONAR_ECHO, SONAR_TRIG, MAX_DISTANCE);
};


#endif //__SONAR_H_