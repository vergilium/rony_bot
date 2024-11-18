#ifndef __TEMPERATURE_H_
#define __TEMPERATURE_H_

class Temperature {
    public:
        float readTemperatureC();
        float readTemperatureF();
    private:
        float _temperatureC;
};


#endif