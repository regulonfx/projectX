#include <LiquidCrystal.h>
LiquidCrystal lcd(8, 13, 9, 4, 5, 6, 7); // Instanziierung des Objektes lcd

// Programm "LCD Hallo Welt"
// Taste an Pin 4
// LED an 13 leuchtet solange wie die Taste gedrückt ist.

void setup() {
  lcd.begin(16, 2); // Spalte, Zeilen
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("** Hallo Welt **");
  lcd.setCursor(0,1);
  lcd.print("*** Awesome ***");
}

void loop() {

  
  }
