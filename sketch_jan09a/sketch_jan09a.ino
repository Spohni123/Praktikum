int LED = 6;
int taster = 7;
int tasterstatus = 0;
int wait = 500;




void setup() {
pinMode(LED, OUTPUT);
pinMode(taster,INPUT);
}

void loop() {
tasterstatus=digitalRead(taster);
if (tasterstatus == HIGH) {
  digitalWrite(LED, HIGH);
  delay(wait);
  digitalWrite(LED, LOW);
}
else {
  int randomNumber=random(50);
  analogWrite(LED,randomNumber);
}
}
