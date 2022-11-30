#ifndef taskLed.h
#define taskLed.h
#include "Arduino.h"

class led {
  public:

    int ledState = HIGH;
    int ledTime[2] = {300, 700};
    unsigned long lastTime = 0;

    void ledSetup(int pin);
    void task1();
};
#endif