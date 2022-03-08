//Testprogramm 1 für Luftdrucksensor BMP280
//Code fuer Arduino
//Author Retian
//Version 1.1

#include <Wire.h>

#include <MyBMP280.h>
#include <Metro.h>


MyBMP280 BMP(0x76);
Metro leseZyklus = Metro(1000); //Zykluszeit in ms für Auslesen des Sensors


int hoehe = 460; //Messort: 460 m über dem Meer
float luftTemp, luftDruck, redLuftDruck;


void setup() {
  Serial.begin(115200);
  if (BMP.isReady()) Serial.println("BMP280 Ok!");
  else
  {
    Serial.println("BMP280 Fehler!");
    while (1); //Im Fehlerfall geht's hier nicht weiter!
  }

  BMP.setPressOversampling(BMP280_P_OVERSAMPLING_x2); //Ändere Druck-Oversampling Parameter
  BMP.init();
}


void loop() {
  if (leseZyklus.check())
  {
    luftTemp = BMP.readTemp();
    Serial.print("Lufttmperatur  : ");
    Serial.print(luftTemp);
    Serial.println(" Grad C");

    luftDruck = BMP.readPress();
    Serial.print("Luftdruck      : ");
    Serial.print(luftDruck);
    Serial.println(" hPa");

    redLuftDruck = BMP.readReducedPress(hoehe);
    Serial.print("Reduz.Luftdruck: ");
    Serial.print(redLuftDruck);
    Serial.println(" hPa");

    Serial.println();
  }
}


Mehr Infos: https://arduino-projekte.webnode.at/meine-libraries/luftdrucksensor-bmp280/
