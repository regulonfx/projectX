#include <Wire.h>
#include <Adafruit_SH1106.h>
#include <AS_BH1750.h>

#define OLED_RESET 4
Adafruit_SH1106 display(OLED_RESET);

int soil_pin = A0; // AOUT pin on sensor
AS_BH1750 sensor;

void setup()
{
  Serial.begin(9600);
  if (!sensor.begin()) {
    Serial.println("BH1750 init failed!");
    while (true);
  }


  display.begin(SH1106_SWITCHCAPVCC, 0x3C);
  //analogReference(EXTERNAL); // set the analog reference to 3.3V
  display.display();
  delay(2000);
  display.clearDisplay();
}

void loop()
{
  display.clearDisplay();
  Serial.print("Soil Moisture Sensor Voltage: ");
  display.print((float(analogRead(soil_pin)) / 1023.0) * 3.3); // read sensor
  display.println(" V");
  delay(100); // slight delay between readings
  float lux = sensor.readLightLevel();
  Serial.println("Light level: " + String(lux) + " lx");
  
  display.setTextSize(2);
  display.setTextColor(WHITE);
  display.setCursor(0, 0);
  display.println(lux);
  display.setTextSize(2);
  display.setTextColor(WHITE);
  //display.println("World!");

  display.display();
  delay(2000);
}
