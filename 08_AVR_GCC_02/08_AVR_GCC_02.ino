// Programm "08_AVR_GCC_02"
int ledPin0 = 0;
int ledPin1 = 1;
int ledPin2 = 2;
int ledPin3 = 3;
int ledPin4 = 4;
int ledPin5 = 5;
int ledPin6 = 6;
int ledPin7 = 7;
int t = 150;

void setup() {
  // put your setup code here, to run once:
// Datenrichtungsregister
DDRD = 0b11111111; // oder: DDRD = 255
/*
  pinMode(ledPin0, 1);
  pinMode(ledPin1, 1);
  pinMode(ledPin2, 1);
  pinMode(ledPin3, 1);
  pinMode(ledPin4, 1);
  pinMode(ledPin5, 1);
  pinMode(ledPin6, 1);
  pinMode(ledPin7, 1);
*/

}

void loop() {
  // put your main code here, to run repeatedly:

PORTD = 0b10000000; delay(t); //LED an Pin 7 
PORTD = 0b01000000; delay(t);
PORTD = 0b00100000; delay(t);
PORTD = 0b00010000; delay(t);
PORTD = 0b00001000; delay(t);
PORTD = 0b00000100; delay(t);
PORTD = 0b00000010; delay(t);
PORTD = 0b00000001; delay(t);

PORTD = 0b10000001; delay(t); 
PORTD = 0b01000010; delay(t);
PORTD = 0b00100100; delay(t);
PORTD = 0b00011000; delay(t);
PORTD = 0b00011000; delay(t);
PORTD = 0b00100100; delay(t);
PORTD = 0b01000010; delay(t);
PORTD = 0b10000001; delay(t);

PORTD = 0b00000001; delay(t); //LED an Pin 7 
PORTD = 0b00000010; delay(t);
PORTD = 0b00000100; delay(t);
PORTD = 0b00001000; delay(t);
PORTD = 0b00010000; delay(t);
PORTD = 0b00100000; delay(t);
PORTD = 0b01000000; delay(t);
PORTD = 0b10000000; delay(t);

//PORTD = 0b0000000; delay(t); // Alles aus


/*  for (int i = 0; i <= 7; i++) {
    digitalWrite(ledPin0 + i, 1);
    delay(t);
    digitalWrite(ledPin0 + i, 0);
  }

 * digitalWrite(ledPin0, 1); delay(100); digitalWrite(ledPin0, 0); 
 * digitalWrite(ledPin1, 1); delay(100); digitalWrite(ledPin1, 0);
 * digitalWrite(ledPin2, 1); delay(100); digitalWrite(ledPin2, 0);
 * digitalWrite(ledPin3, 1); delay(100); digitalWrite(ledPin3, 0);
 * digitalWrite(ledPin4, 1); delay(100); digitalWrite(ledPin4, 0);
 * digitalWrite(ledPin5, 1); delay(100); digitalWrite(ledPin5, 0);
 * digitalWrite(ledPin6, 1); delay(100); digitalWrite(ledPin6, 0);
 * digitalWrite(ledPin7, 1); delay(100); digitalWrite(ledPin7, 0);
 */
  
}
