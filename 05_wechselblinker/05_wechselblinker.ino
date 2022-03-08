// Programm "Wechselblinker"
int ledPin11 = 11;
int ledPin12 = 12;

void setup() {
  // put your setup code here, to run once:
pinMode(ledPin11, 1); 
pinMode(ledPin12, 1); 

}

void loop() {
  // put your main code here, to run repeatedly:

 digitalWrite(ledPin12, 1);
 digitalWrite(ledPin11, 0); 
 delay(1000); // in ms
 digitalWrite(ledPin12, 0); 
 digitalWrite(ledPin11, 1);
 delay(1000); // in ms
 
}
