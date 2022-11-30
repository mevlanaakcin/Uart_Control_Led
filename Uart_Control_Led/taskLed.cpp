#include "taskLed.h";

void led::ledSetup(int pin) {
  pinMode(13, OUTPUT);
  digitalWrite(13, ledState);
}