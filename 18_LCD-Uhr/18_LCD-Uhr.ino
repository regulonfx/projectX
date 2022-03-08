#include <LiquidCrystal.h>
LiquidCrystal lcd(8, 13, 9, 4, 5, 6, 7); // Instanziierung des Objektes lcd

// Programm "LCD-Millisekunden"
// Die Methode "mills()"
// liefert als int die seit dem letzten Start // LED an 13 leuchtet solange wie die Taste gedrückt ist.
// ist int64 ohne negativen Bereich

unsigned long s;
int m, h;

void setup() {
  lcd.begin(16, 2); // Spalte, Zeilen
  lcd.clear();
}

void loop() {

  s = (millis() / 1000) % 60;
  m = (((millis() / 60000)+59) % 60);
  h = ((millis() / 3600000) % 24);

  lcd.setCursor(0, 0);
  if (h < 10) lcd.print("0"); //führende 0
  lcd.print(h);
  
  lcd.print(":");
  
  lcd.setCursor(3, 0);
  if (m < 10) lcd.print("0"); //führende 0
  lcd.print(m);
  
  lcd.print(":");
 
  lcd.setCursor(6, 0);
   if (s < 10) lcd.print("0"); //führende 0
  lcd.print(s);

  delay(1000);
}

  //if (m == 00) bar++;
  //if (s == 00) foo++;
