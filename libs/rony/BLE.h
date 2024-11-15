#ifndef __BLE_H_
#define __BLE_H_

#include "Arduino.h"
#include "WString.h"
#include "HardwareSerial.h"

#define BLUETOOTH Serial1
#define BLE_PWRC 29
#define BLE_STAT 38

class BLE {
public:
  BLE();
  void begin(int);
  String getCommand();
};

#endif  // __BLE_H_