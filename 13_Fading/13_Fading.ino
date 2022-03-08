// Programm "Fading" - hier Hardware-PWM Pulsbreitenmodulation
// LED 3 

//int t=5; 

void setup() {
    //pinMode(3, 1); // Auf diesen Befehl kann verzichtet werden
 analogWrite(3, 0); // (pin, bytewert) Pins: 3,5,6,9,10,11 Bytewert: 0...255
  
}

void loop() {

for (int i = 0; i < 255; i++) {

    analogWrite(3, + i);
    delay(5);
   
 }

 for (int i = 255; i >= 0; i--) {

    analogWrite(3, + i);
    delay(5);
   
 }

 

  
  //digitalWrite(3, 1); delayMicroseconds(1);
  //digitalWrite(3, 0); delayMicroseconds(9);

// digitalWrite(ledPin0 + i, 1);
  //  delay(t);
  //  digitalWrite(ledPin0 + i, 0);


}
