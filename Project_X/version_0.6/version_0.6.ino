#include <Wire.h>
#include <Adafruit_SH1106.h>
#include <AS_BH1750.h>
#include <Adafruit_Sensor.h>
#define OLED_RESET 4
#define DHTPIN 7
#define DHTTYPE DHT22
#include <DHT.h>

Adafruit_SH1106 display(OLED_RESET);
DHT dht(DHTPIN, DHTTYPE);

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
  dht.begin();
  display.display();
  delay(2000);
  display.clearDisplay();
}

void loop()
{

  float h = dht.readHumidity();
  float t = dht.readTemperature();

  display.clearDisplay();
  display.setTextSize(2.5);
  display.setTextColor(WHITE);
  display.setCursor(0, 0);
  display.print ("GH: ");
  display.print((float(analogRead(soil_pin)) / 1023.0) * 3.3); // read sensor
  display.println(" V");
  delay(100); // slight delay between readings
  float lux = sensor.readLightLevel();
  display.print("LL: " + String(lux));

  display.display();
  delay(2500);
  display.clearDisplay();
  display.setCursor(0, 0);
  val_analogique = analogRead(A0);
  display.print("R: ");
  display.println(val_analogique);
  display.print("HU:");
  display.print(h);
  display.println(" %");
  display.print("T: ");
  display.print(t);
  display.print((char)247);
  display.print("C");
  display.display();
  delay(2500);
}
