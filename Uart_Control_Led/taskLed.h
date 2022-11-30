#ifndef taskLed.h
#define taskLed.h
#include "Arduino.h"

class led {
  public:

    int ledState = HIGH;
    int ledTime[2] = {300, 700};
    boolean uart = true;
    boolean serialStatus = false;
    String data = "";
    char temp[32];
    unsigned long lastTime = 0;

    void ledSetup(int pin);
    void task1();
    void task2();
};
#endif