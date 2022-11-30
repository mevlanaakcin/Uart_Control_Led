#ifndef taskLed.h
#define taskLed.h
#include "Arduino.h"

class led {
  public:

    int ledState = HIGH;

    void ledSetup(int pin);
};
#endif