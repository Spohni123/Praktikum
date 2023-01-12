
int redLed=9;


void setup() {
  // put your setup code here, to run once:
  pinMode(redLed,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  analogWrite(redLed,255);
}
