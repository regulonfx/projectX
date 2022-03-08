#include <TimerOne.h>

volatile int s = 0; // "volatile" für Variablen die innerhalb und ausserhalb von interrupt serviceroutinen auftreten

void setup() {
  pinMode(11, 1);
  pinMode(12, 1);

  //Timer1.initialize(1000000); // 1.000.000µs =1s
  Timer1.initialize(300000); // 300.000µs = 0,3s - Periodendauer T=0,6s
  Timer1.attachInterrupt(timerISR); // aufzurufende Methode

  interrupts(); // globales Erlauben von Interrupts

}

void loop() {
  digitalWrite(12, 1); delay(500);
  digitalWrite(12, 0); delay(500);


  
}

void timerISR() {
  if (s == 0) {
    digitalWrite(11, 0);
  } else {
    digitalWrite(11, 1);
  }
  s++; if (s == 2) s = 0;
  
}
