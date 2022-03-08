// Program, das über sie serielle Schnittstelle Daten sendet
// Hier : PC --> Arduino
// Sinn: Während des arbeiten des Arduinos können wir ihn vn aussen steuern.
// Ziel: Wir senden '0' oder '1' vom seriellen Monitor ==> LED 13 aus|an

char datenpaket = ' ';
int ledPin4 = 4;
int ledPin5 = 5;
int ledPin6 = 6;
int t = 250;
char foo = ' ';


void setup() {
  Serial.begin(9600);
  pinMode(ledPin4, 1);
  pinMode(ledPin5, 1);
  pinMode(ledPin6, 1);
}

void loop() {
  if (Serial.available() > 0) // anzahl der Bytes im seriellen Datenpuffer
  {
    datenpaket = Serial.read(); // liest den Puffer aus (Puffer ist nachher leer)
    if (datenpaket == '1' | datenpaket == '2' | datenpaket == '0') foo = datenpaket;
  Serial.flush(); //Löschen des Puffers
  }

  // muss außerhalb von "Serial.available()" liegen
  if (foo == '1') rechtsrum(t);
  if (foo == '2') linksrum(t);
  if (foo == '0') halt(t);

  Serial.println(foo);
  delay(500);


}


void rechtsrum(int t) {
  digitalWrite(ledPin4, 1);
  digitalWrite(ledPin5, 0);
  digitalWrite(ledPin6, 0);
  delay(t);
  digitalWrite(ledPin4, 0);
  digitalWrite(ledPin5, 1);
  digitalWrite(ledPin6, 0);
  delay(t);
  digitalWrite(ledPin4, 0);
  digitalWrite(ledPin5, 0);
  digitalWrite(ledPin6, 1);
  delay(t);
}


void linksrum(int t) {
  digitalWrite(ledPin4, 0);
  digitalWrite(ledPin5, 0);
  digitalWrite(ledPin6, 1);
  delay(t);
  digitalWrite(ledPin4, 0);
  digitalWrite(ledPin5, 1);
  digitalWrite(ledPin6, 0);
  delay(t);
  digitalWrite(ledPin4, 1);
  digitalWrite(ledPin5, 0);
  digitalWrite(ledPin6, 0);
  delay(t);
}

void halt(int t) {
  digitalWrite(ledPin4, 0);
  digitalWrite(ledPin5, 0);
  digitalWrite(ledPin6, 0);
  delay(t);
  digitalWrite(ledPin4, 0);
  digitalWrite(ledPin5, 0);
  digitalWrite(ledPin6, 0);
  delay(t);
  digitalWrite(ledPin4, 0);
  digitalWrite(ledPin5, 0);
  digitalWrite(ledPin6, 0);
  delay(t);
}
