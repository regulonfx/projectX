// Programm "SOS" Benutzen von Methoden

int ledPin = 13;

void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin, 1); // OUTPUT meint: 1

}

void loop() {
  // put your main code here, to run repeatedly:
  for (int i = 0; i < 2; i++) {
    s(); pauseZwischenDenBuchstaben();
    o(); pauseZwischenDenBuchstaben();
    s(); pauseZwischenDenBuchstaben();
  }
  delay(1500);
}

void s() {
  did(); did(); did();
}

void did() {
  digitalWrite(ledPin, 1); pauseKurz();
  digitalWrite(ledPin, 0); pauseKurz();
}

void o() {
  da(); da(); da();
}

void da() {
  digitalWrite(ledPin, 1);
  pauseLang();
  digitalWrite(ledPin, 0);
  pauseLang();
}

void pauseKurz() {
  delay (100);
}

void pauseLang() {
  delay (200);
}

void pauseZwischenDenBuchstaben() {
  delay(2000);
}
