// Program, das über sie serielle Schnittstelle Daten sendet
// Hier : Arduino --> PC

int i=0;

void setup() {
  
 Serial.begin(9600);
}

void loop() {
  Serial.println("Hallo Computer! Hier ist Arduino.");
  Serial.print("Variable i ist ");
  Serial.println(i);
  i++;
  delay(500);

}
