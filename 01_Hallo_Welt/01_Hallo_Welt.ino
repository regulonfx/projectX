// Bereich für globale Variablen:


void setup() {
  // put your setup code here, to run once:

// Pin 13 sei ein digitaler Ausgang:
 pinMode(13, OUTPUT); // OUTPUT meint: 1
 

}

void loop() {
  // put your main code here, to run repeatedly:

 digitalWrite(13, HIGH); // HIGH meint: 1 (am Pin loegen 5V)
 delay(500); // in ms
 digitalWrite(13, LOW); // LOW meint: 0 (am Pin loegen 0V)
 delay(500); // in ms
}
