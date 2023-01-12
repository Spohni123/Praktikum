int taster1 = 2;
int taster2 = 3;
int taster3 = 4;
int tasterzustand1 = 2;
int tasterzustand2 = 3;
int tasterzustand3 = 4;
int myNumb1 = 5;
int wait = 500;


void setup() {
  pinMode(taster1, INPUT);
  pinMode(taster2, INPUT);
  pinMode(taster3, INPUT);
  Serial.begin(9600);

}

void loop() {
  
   tasterzustand1 = digitalRead(taster1);
   if (tasterzustand1 == digitalRead(taster1)) {
     if (tasterzustand1 == 1) {
       Serial.print("5");     
       delay(wait);
     }
   }
  
  tasterzustand2 = digitalRead(taster2);
  if (tasterzustand2 == digitalRead(taster2)) {
    if (tasterzustand2 == 1) {
      Serial.print("4");
      delay(wait);
    }
  }
//tasterzustand3 = digitalRead(taster3);
//if (tasterzustand3 == digitalRead(taster3)) {
  //if (tasterzustand == 1) {
    //Serial.println("+");
    //}
//}
  




}
