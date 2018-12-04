int dioda = 13;
int czas = 500;
void setup() {
  pinMode(dioda, OUTPUT);
}
void loop() {
  /*digitalWrite(dioda, HIGH);
  delay(czas);
  digitalWrite(dioda, LOW);
  delay(czas);

  if (czas <= 0) {
    czas = 100;
    for(int i=100; i==0; i--) {
      digitalWrite(dioda, HIGH);
      delay(czas);
      digitalWrite(dioda, LOW);
      delay(czas);
    }
    czas = 500;
  }
  else {
    czas = czas - 10;
  }*/

  for (int i = 0; i < 3; i++) {
    digitalWrite(dioda, HIGH);
    delay(250);
    digitalWrite(dioda, LOW);
    delay(250);
  }
  delay(250);

  for (int i = 0; i < 3; i++) {
    digitalWrite(dioda, HIGH);
    delay(500);
    digitalWrite(dioda, LOW);
    delay(250);
  }
  delay(250);

  for (int i = 0; i < 3; i++) {
    digitalWrite(dioda, HIGH);
    delay(250);
    digitalWrite(dioda, LOW);
    delay(250);
  }
  delay(2000);
}
