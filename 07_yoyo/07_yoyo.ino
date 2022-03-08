// Programm "yoyo"
int ledPin10 = 10;
int ledPin11 = 11;
int ledPin12 = 12;
int slow = 150;
int med = 200;
int fast = 250;
int t = 150;

void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin10, 1);
  pinMode(ledPin11, 1);
  pinMode(ledPin12, 1);

}

void loop() {
  // put your main code here, to run repeatedly:
for (int t = 250; t >= 0; t -= 10) rechtsrum(t);
for (int t = 0; t < 250; t += 10) rechtsrum(t);
  delay(1000);

for (int t = 250; t >=0; t -=10) linksrum(t);
for (int t = 0; t < 250; t +=10) linksrum(t);
  delay(500);
  

/*
for (int i = 0; i < 2; i++) {
    rechtsLaufSlow();
    rechtsLaufMed();
    rechtsLaufFast();
  }

  for (int i = 0; i < 2; i++) {
    linksLaufSlow();
    linksLaufMed();
    linksLaufFast();
  }
*/
}

void rechtsrum(int t) {
    digitalWrite(ledPin10, 1);
    digitalWrite(ledPin11, 0);
    digitalWrite(ledPin12, 0);
    delay(t);
    digitalWrite(ledPin10, 0);
    digitalWrite(ledPin11, 1);
    digitalWrite(ledPin12, 0);
    delay(t);
    digitalWrite(ledPin10, 0);
    digitalWrite(ledPin11, 0);
    digitalWrite(ledPin12, 1);
    delay(t);
  }

  void linksrum(int t) {
    digitalWrite(ledPin10, 0);
    digitalWrite(ledPin11, 0);
    digitalWrite(ledPin12, 1);
    delay(t);
    digitalWrite(ledPin10, 0);
    digitalWrite(ledPin11, 1);
    digitalWrite(ledPin12, 0);
    delay(t);
    digitalWrite(ledPin10, 1);
    digitalWrite(ledPin11, 0);
    digitalWrite(ledPin12, 0);
    delay(t); 
  }

  void rechtsLaufSlow() {
    digitalWrite(ledPin10, 1);
    digitalWrite(ledPin11, 0);
    digitalWrite(ledPin12, 0);
    delay(slow); 
    digitalWrite(ledPin10, 0);
    digitalWrite(ledPin11, 1);
    digitalWrite(ledPin12, 0);
    delay(slow); 
    digitalWrite(ledPin10, 0);
    digitalWrite(ledPin11, 0);
    digitalWrite(ledPin12, 1);
    delay(slow); 
  }

  void rechtsLaufMed() {
    digitalWrite(ledPin10, 1);
    digitalWrite(ledPin11, 0);
    digitalWrite(ledPin12, 0);
    delay(med); 
    digitalWrite(ledPin10, 0);
    digitalWrite(ledPin11, 1);
    digitalWrite(ledPin12, 0);
    delay(med); 
    digitalWrite(ledPin10, 0);
    digitalWrite(ledPin11, 0);
    digitalWrite(ledPin12, 1);
    delay(med); 
  }
  void rechtsLaufFast() {
    digitalWrite(ledPin10, 1);
    digitalWrite(ledPin11, 0);
    digitalWrite(ledPin12, 0);
    delay(fast); 
    digitalWrite(ledPin10, 0);
    digitalWrite(ledPin11, 1);
    digitalWrite(ledPin12, 0);
    delay(fast); 
    digitalWrite(ledPin10, 0);
    digitalWrite(ledPin11, 0);
    digitalWrite(ledPin12, 1);
    delay(fast); 
  }
  void linksLaufSlow() {
    digitalWrite(ledPin10, 0);
    digitalWrite(ledPin11, 0);
    digitalWrite(ledPin12, 1);
    delay(t); 
    digitalWrite(ledPin10, 0);
    digitalWrite(ledPin11, 1);
    digitalWrite(ledPin12, 0);
    delay(t); 
    digitalWrite(ledPin10, 1);
    digitalWrite(ledPin11, 0);
    digitalWrite(ledPin12, 0);
    delay(t); 
  }

  void linksLaufMed() {
    digitalWrite(ledPin10, 0);
    digitalWrite(ledPin11, 0);
    digitalWrite(ledPin12, 1);
    delay(t); 
    digitalWrite(ledPin10, 0);
    digitalWrite(ledPin11, 1);
    digitalWrite(ledPin12, 0);
    delay(t); 
    digitalWrite(ledPin10, 1);
    digitalWrite(ledPin11, 0);
    digitalWrite(ledPin12, 0);
    delay(t); 
  }

  void linksLaufFast() {
    digitalWrite(ledPin10, 0);
    digitalWrite(ledPin11, 0);
    digitalWrite(ledPin12, 1);
    delay(t); 
    digitalWrite(ledPin10, 0);
    digitalWrite(ledPin11, 1);
    digitalWrite(ledPin12, 0);
    delay(t); 
    digitalWrite(ledPin10, 1);
    digitalWrite(ledPin11, 0);
    digitalWrite(ledPin12, 0);
    delay(t); 
  }
