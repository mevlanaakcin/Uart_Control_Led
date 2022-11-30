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

void led::task2() {
  if (serialStatus) {
    data.toCharArray(temp, 32);

    sscanf(temp, "ledon=%d", &ledTime[0]);
    sscanf(temp, "ledoff=%d", &ledTime[1]);

    if (!strncmp(temp, "stop", 4)) {
      uart = false;
      ledTime[0] = 1000;
      ledTime[1] = 1000;
    }
    if (!strncmp(temp, "start", 5)) {
      uart = true;
      ledTime[0] = 300;
      ledTime[1] = 700;
    }
    if (uart) {
      Serial.print(temp);
    }

    data = "";
    serialStatus = false;

  }
}