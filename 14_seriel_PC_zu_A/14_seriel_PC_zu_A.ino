// Program, das über sie serielle Schnittstelle Daten sendet
// Hier : PC --> Arduino
// Sinn: Während des arbeiten des Arduinos können wir ihn vn aussen steuern.
// Ziel: Wir senden '0' oder '1' vom seriellen Monitor ==> LED 13 aus|an

char datenpaket = ' ';

void setup() {
   Serial.begin(9600);
   pinMode(13, OUTPUT); // LED an
}

void loop() {
  if(Serial.available() > 0) // anzahl der Bytes im seriellen Datenpuffer
{
  datenpaket = Serial.read(); // liest den Puffer aus (Puffer ist nachher leer)
  if(datenpaket == '1') digitalWrite(13, 1);
  if(datenpaket == '0') digitalWrite(13, 0);
  delay(20);
}

Serial.flush(); //Löschen des Puffers

}
