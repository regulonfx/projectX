int adcwert; //0...1023
double spannungswert; // 0,0 ... 5,0V
void setup() {
Serial.begin(9600);
}

void loop() {

adcwert = analogRead(A1);
spannungswert = (5.0/1023.0)* (double)adcwert; 
Serial.print(adcwert);
Serial.print(" --> ");
Serial.print(spannungswert);
Serial.println("V");

delay(500);
  
}
