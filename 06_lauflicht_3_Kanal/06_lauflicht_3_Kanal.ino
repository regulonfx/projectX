// Programm "Wechselblinker"
int ledPin10 = 10;
int ledPin11 = 11;
int ledPin12 = 12;
int t = 60;

void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin10, 1);
  pinMode(ledPin11, 1);
  pinMode(ledPin12, 1);

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(ledPin10, 1);
  digitalWrite(ledPin11, 0);
  digitalWrite(ledPin12, 0);
  delay(t); // in ms
  digitalWrite(ledPin10, 0);
  digitalWrite(ledPin11, 1);
  digitalWrite(ledPin12, 0);
  delay(t); // in ms
  digitalWrite(ledPin10, 0);
  digitalWrite(ledPin11, 0);
  digitalWrite(ledPin12, 1);
  delay(t); // in ms
  digitalWrite(ledPin10, 0);
  digitalWrite(ledPin11, 1);
  digitalWrite(ledPin12, 0);
  delay(t); // in ms

}
