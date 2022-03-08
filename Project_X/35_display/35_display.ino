#include <Wire.h>
#include <Adafruit_SH1106.h>

#define OLED_RESET 4
Adafruit_SH1106 display(OLED_RESET);

void setup()
{
  Serial.begin(9600);
  display.begin(SH1106_SWITCHCAPVCC, 0x3C);

  display.display();
  delay(2000);
  display.clearDisplay();
}

void loop()
{
  display.setTextSize(2);
  display.setTextColor(WHITE);
  display.setCursor(0,0);
  display.println("Hello");
  display.setTextSize(2);
  display.setTextColor(WHITE);
  display.println("World!");
  display.display();
  delay(2000);
}
