#include <LiquidCrystal.h>
LiquidCrystal lcd(8, 13, 9, 4, 5, 6, 7);


int adcwert; //0...1023
double spannungswert; // 0,0 ... 5,0V
void setup() {
Serial.begin(9600);
  lcd.begin(16, 2); 
  lcd.clear();
}

void loop() {

adcwert = analogRead(A1);
spannungswert = (5.0/1023.0)* (double)adcwert; 
Serial.print(adcwert);
Serial.print(" --> ");
Serial.print(spannungswert);
Serial.println("V");

  lcd.setCursor(0, 0);
 // lcd.print(adcwert);
 // lcd.print("\xF4");
 // lcd.print(" --> ");
  lcd.print(spannungswert, 1); // eine nachkommastelle
  lcd.print("V");
delay(500);
lcd.setCursor(0, 0);
lcd.print("              ");
  
}
