#include "DHT.h" //von ladyada: https://github.com/adafruit/DHT-sensor-library
#define DHTPIN 15     // benutzter ARDUINO-Pin (Analog-Pin 1)

#include <LiquidCrystal.h>
LiquidCrystal lcd(8, 13, 9, 4, 5, 6, 7); // diese Pins werden benutzt

#define DHTTYPE DHT11   // DHT 11

DHT dht(DHTPIN, DHTTYPE);

void setup() {
  Serial.begin(9600);
  Serial.println("DHT11-Test");
 
  lcd.clear();      // LCD löschen
  lcd.begin(16, 2); // verfügbare Spalten und Zeilen
  
  dht.begin();
}

void loop() {
  // Das Erfassen von Temperatur und Luftfeuchtigkeit benoetigt ca. 250 Millisekunden.
  float h = dht.readHumidity();
  delay(500);
  float t = dht.readTemperature();
  delay(500);

  // Check, ob die Daten Zahlen sind, falls nicht (NaN: not a number), ist was falsch gelaufen!
  if (isnan(t) || isnan(h))
  {
    Serial.println("Fehler beim Lesen vom DHT-Sensor");
  }
  else
  {
         
    Serial.print("Feuchtigkeit: ");
    Serial.print(h);
    Serial.print(" %\t   ");
    Serial.print("Temperatur: ");
    Serial.print(t);
    Serial.println(" Grad Celsius");
   
    lcd.setCursor(0,0);     
    lcd.print("Feuchtigk.:");
    lcd.print(h);
    lcd.print("prozent");
     lcd.setCursor(0,1);     
    lcd.print("Temperatur:");
    lcd.print(t);
    lcd.print("C");
  }
}
