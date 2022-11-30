#include "taskLed.h";

void led::ledSetup(int pin) {
  pinMode(13, OUTPUT);
  digitalWrite(13, ledState);
}

void led::task1() {
  if ( ledState == HIGH )
  {
    if ( (millis() - lastTime) >= ledTime[0]) {
      ledState = LOW;
      lastTime = millis();
    }
  }
  else
  {
    if ( (millis() - lastTime) >= ledTime[1]) {
      ledState = HIGH;
      lastTime = millis();
    }
  }
  digitalWrite(13, ledState);
}