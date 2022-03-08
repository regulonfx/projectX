#include <Wire.h>
#include <Adafruit_SH1106.h>
#include <AS_BH1750.h>

// Display
#define OLED_RESET 4
Adafruit_SH1106 display(OLED_RESET);



int soil_pin = A1; // AOUT pin on sensor
AS_BH1750 sensor;
int val_analogique;
void setup()
{

  pinMode(A0, INPUT);
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
  display.setTextSize(2);
  display.setTextColor(WHITE);
  display.setCursor(0, 0);
  display.print ("GH: ");
  display.print((float(analogRead(soil_pin)) / 1023.0) * 3.3); // read sensor
  display.println(" V");
  delay(100); // slight delay between readings
  float lux = sensor.readLightLevel();
  display.print("LL: " + String(lux));

  val_analogique = analogRead(A0);
  display.print("R:  ");
  display.println(val_analogique);

  display.display();
  delay(2000);
}
