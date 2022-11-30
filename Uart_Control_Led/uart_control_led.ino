#include "taskLed.h";
led led;

void setup() {
    led.ledSetup(13);
    Serial.begin(115200);
}

void loop() {
	led.task1(); // 1. task led on off yapacak. Örnek (300ms ON 700ms off) on off süreleri ayarlanabilir olacak. 
}
