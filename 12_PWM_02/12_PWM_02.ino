// Programm "PWM" - hier Hardware-PWM Pulsbreitenmodulation
// LED 1 und 2 werden hier verwendet

void setup() {
  pinMode(2, 1); digitalWrite(2, 1);  //Referenzhelligkeit
  
  //pinMode(3, 1); // Auf diesen Befehl kann verzichtet werden
analogWrite(3, 55); // (pin, bytewert) Pins: 3,5,6,9,10,11 Bytewert: 0...255
  
}

void loop() {
  //digitalWrite(3, 1); delayMicroseconds(1);
  //digitalWrite(3, 0); delayMicroseconds(9);

}
