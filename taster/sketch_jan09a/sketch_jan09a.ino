int LED=6;
int taster=7;
int tasterzustand=0;
int volt=255;
int offvolt=50;
int wait=500;

void setup() {
  // put your setup code here, to run once:
pinMode(LED,OUTPUT);
pinMode(taster,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
tasterzustand=digitalRead(taster);
if (tasterzustand==HIGH) {
  analogWrite(LED,volt);
  delay(wait);
  analogWrite(LED,offvolt);
  delay(wait);
}
else {
  digitalWrite(LED,LOW);
}
}     
