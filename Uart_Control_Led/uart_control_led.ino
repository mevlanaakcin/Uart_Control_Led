#include "taskLed.h";
led led;

void setup() {
    led.ledSetup(13);
    Serial.begin(115200);
}

void loop() {
	led.task1(); // 1. task led on off yapacak. Örnek (300ms ON 700ms off) on off süreleri ayarlanabilir olacak. 
    
    led.task2(); //2. task uart'tan gelen datayı aynı port üzerinden echo yapacak. Uart interrupt ile çalışacak ve ayarları değiştirilebilir olacak
}
void serialEvent()
{
  while (Serial.available())
  {
    char rx = (char)Serial.read();
    rx == '\n' ? led.serialStatus = true : led.serialStatus = false; led.data += rx;

  }
}