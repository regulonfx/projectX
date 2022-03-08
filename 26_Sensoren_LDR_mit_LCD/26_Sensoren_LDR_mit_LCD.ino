// LDR - Sensor
#include <LiquidCrystal.h>
LiquidCrystal lcd(8, 13, 9, 4, 5, 6, 7);


int adcwert;

void setup() {
  lcd.begin(16, 2);
  lcd.clear();

}

void loop() {
  adcwert = analogRead(A1);
  lcd.setCursor(0, 0);
  lcd.print(adcwert);


  // Fensterdiskriminator (Wertebereiche oder Wertefenster)
  lcd.setCursor(0, 1);

  if (adcwert >= 0 && adcwert < 200) lcd.print("zu dunkel");
  if (adcwert >= 200 && adcwert < 700) lcd.print("all right");
  if (adcwert >= 700 && adcwert < 1023) lcd.print("zu hell");

  delay(500);

  lcd.setCursor(0, 0); lcd.print("   ");
  lcd.setCursor(0, 1); lcd.print("                ");





}
