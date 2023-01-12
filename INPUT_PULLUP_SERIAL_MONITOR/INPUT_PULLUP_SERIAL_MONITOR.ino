
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(2,INPUT_PULLUP);
  pinMode(13,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int sensorVal = digitalRead(2); //ließt digital Pin 2
  Serial.println(sensorVal); //soll sensorval von digital Pin 2 auf serial Monitor schicken 
  if (sensorVal == HIGH) { //Wenn taster nicht gedrückt
    digitalWrite(13,LOW);
  }
  else { //Wenn tatser gedrückt
    digitalWrite(13,HIGH);
  }
  
}     
