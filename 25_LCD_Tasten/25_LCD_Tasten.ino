#include <LiquidCrystal.h>
LiquidCrystal lcd(8, 13, 9, 4, 5, 6, 7);

int adcwert; //0...1023

void setup() {

  lcd.begin(16, 2);
  lcd.clear();
}

void loop() {
  adcwert = analogRead(A0) / 100; // durch 100 zu dividieren erspart uns einen aufwendigen Fensterdiskriminator
  /*
   * 10: nix
   * 7: select 
   * 5: left 
   * 1: up
   * 3: down
   * 0: right
   */
  lcd.setCursor(0, 0);
lcd.print(adcwert);

delay(500);

lcd.setCursor(0, 0);
lcd.print("              ");
}
