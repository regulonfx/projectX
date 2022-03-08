#include <LiquidCrystal.h>
LiquidCrystal lcd(8, 13, 9, 4, 5, 6, 7); // Instanziierung des Objektes lcd


void setup() {
  // put your setup code here, to run once:
  lcd.begin(16, 2); // Spalte, Zeilen
  lcd.clear();

  lcd.setCursor(0, 0); // Spalte, Zeilen
  lcd.print("Daten"); lcd.print("\xF5"); lcd.print("bertragung");
  // oder so: lcd.print("Daten" "\xF5" "bertragung");
  lcd.setCursor(0, 1);
  lcd.print("\xE1"); // ä
  lcd.print("\xEF"); // ö
  lcd.print("\xF5"); // ü
  lcd.print("\xE2"); // ß
  lcd.print(" "); lcd.print("\xDF" "C "); // ° wie in °C
  lcd.print("\xF4"); // Ohm  Ω
  lcd.print("\xE4"); // µ wie Mikrocontroller µC

}

void loop() {
  // put your main code here, to run repeatedly:

}
