// Programm "Flasher" LED an Pin 13 blitzt
int ledPin = 12;


void setup() {
  // put your setup code here, to run once:
pinMode(ledPin, 1); // OUTPUT meint: 1
 

}

void loop() {
  // put your main code here, to run repeatedly:

 digitalWrite(ledPin, 1);
 delay(200); // in ms
 digitalWrite(ledPin, 0); 
 delay(500); // in ms
}
