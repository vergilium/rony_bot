#include "Arduino.h"
#include "HardwareSerial.h"
#include "BLE.h"

void BLE::begin(int baud){
  String bt_baud;
  switch(baud){
    case 2400: bt_baud = "2"; break;
    case 4800: bt_baud = "3"; break;
    case 9600: bt_baud = "4"; break;
    case 19200: bt_baud = "5"; break;
    case 38400: bt_baud = "6"; break;
    case 57600: bt_baud = "7"; break;
    case 115200: bt_baud = "8"; break;
    default: baud = 9600; bt_baud = "4"; break;
  }
  BLUETOOTH.begin(baud);
  BLUETOOTH.println("AT+PIN1234"); //set default pin 123456
  delay(10);
  BLUETOOTH.println("AT+BAUD" + bt_baud); //Set baud
  delay(10);
  BLUETOOTH.println("AT+TYPE1"); //Set type 1: Normal password
  delay(10);
  BLUETOOTH.println("AT+ROLE0"); //Set role 0: Transparent (Slave)
}

String BLE::getCommand(){
  if(BLUETOOTH.available()){
    return BLUETOOTH.readString();
  }
  return "";
}