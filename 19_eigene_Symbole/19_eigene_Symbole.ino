// Programm eigene Symbole
// Byte Array --> Speicherplatz --> Ausgabe

#include <LiquidCrystal.h>
LiquidCrystal lcd(8, 13, 9, 4, 5, 6, 7); // Instanziierung des Objektes lcd
// ein unvollständiges Byte nennt man Nibble.
byte battery[] = { 0b01110,
                   0b10001,
                   0b10001,
                   0b10001,
                   0b10001,
                   0b10001,
                   0b10001,
                   0b11111 };
byte battery1[] = {0b01110,
                   0b10001,
                   0b10001,
                   0b10001,
                   0b10001,
                   0b10001,
                   0b11111,
                   0b11111 };
byte battery2[] = {0b01110,
                   0b10001,
                   0b10001,
                   0b10001,
                   0b10001,
                   0b11111,
                   0b11111,
                   0b11111 };
byte battery3[] = {0b01110,
                   0b10001,
                   0b10001,
                   0b11111,
                   0b11111,
                   0b11111,
                   0b11111,
                   0b11111 };
byte battery4[] = {0b01110,
                   0b10001,
                   0b11111,
                   0b11111,
                   0b11111,
                   0b11111,
                   0b11111,
                   0b11111 };

byte battery5[] = {0b01110,
                   0b11111,
                   0b11111,
                   0b11111,
                   0b11111,
                   0b11111,
                   0b11111,
                   0b11111 };                                                         

                   
void setup() {
  // put your setup code here, to run once:
  lcd.begin(16, 2); // Spalte, Zeilen
  lcd.clear();

  // Das Byte-Array auf einen von 8 Speicherplätzen legen
  lcd.createChar(0, battery);
  lcd.createChar(1, battery1);
  lcd.createChar(2, battery2);
  lcd.createChar(3, battery3);
  lcd.createChar(4, battery4);
  lcd.createChar(5, battery5);
  
  // Das Zeichen aus dem Speicherplatz 0 auf dem Display ausgeben
  lcd.setCursor(0, 0);
  lcd.write((uint8_t)0);
  lcd.write((uint8_t)1);
  lcd.write((uint8_t)2);
  lcd.write((uint8_t)3);
  lcd.write((uint8_t)4);
  lcd.write((uint8_t)5);
  

}

void loop() {
  // put your main code here, to run repeatedly:

}
