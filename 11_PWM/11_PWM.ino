// Programm "PWM" - hier Software-PWM Pulsbreitenmodulation
// LED 1 und 2 werden hier verwendet

void setup() {
  pinMode(2, 1); digitalWrite(2, 1);  //Referenzhelligkeit
  
  pinMode(3, 1);                      // PWM gesteuerte Helligkeit

  
}

void loop() {
  digitalWrite(3, 1); delayMicroseconds(1);
  digitalWrite(3, 0); delayMicroseconds(9);

}
