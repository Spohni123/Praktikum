int ledPin = 6;
int sensorPin = A0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);
  digitalWrite(ledPin, LOW);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.print("Analog output: ");
  Serial.println(readSensor());
  delay(500);
}


int readSensor() {
  int sensorValue = analogRead(sensorPin);
  int outputValue = map(sensorValue, 0, 1023, 255, 0); 
  analogWrite(ledPin, outputValue); 
  return outputValue;             
}
