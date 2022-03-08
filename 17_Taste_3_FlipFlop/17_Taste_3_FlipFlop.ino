// Programm "taste"
// Taste an Pin 4
// LED an 13 leuchtet solange wie die Taste gedrückt ist.

void setup() {
pinMode(13, 1);         // Boadr-LED            Output = 1
pinMode(4, 0);
pinMode(3, 0);          // Taste                Input = 0
digitalWrite(4, HIGH);  // Pull UP einschalten  Hight = 1
digitalWrite(3, HIGH);
}

void loop() {

if(digitalRead(3) == LOW) {
  digitalWrite(13, HIGH);
  }
if(digitalRead(4) == LOW) {
  digitalWrite(13, LOW);
  }



}
