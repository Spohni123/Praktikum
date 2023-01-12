char recievedChar;
boolean newData = false;
int wait = 250;

void recievedOneChar() {
  if (Serial.available() > 0) {
    recievedChar = Serial.read();
    newData = true;
  }
}

void showNewData() {
  if (newData == true) {
    Serial.println("This is .....");
    delay(wait);
    Serial.println(recievedChar);
    newData=false;
  }
}



void setup() {
  Serial.begin(9600);
  Serial.println("Hello");
}

void loop() {
  recievedOneChar();
  showNewData();
}
