#ifndef __TEMPERATURE_H_
#define __TEMPERATURE_H_

#define TEMPERATURE_PIN 1

class Temperature {
    public:
        float readTemperatureC();
        float readTemperatureF();
    private:
        float _temperatureC;
};


#endif