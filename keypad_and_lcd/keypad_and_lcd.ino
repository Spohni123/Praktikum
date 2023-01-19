#include <LiquidCrystal.h>
#include <Keypad.h>
int rs=2;
int en=3;
int d4=4;
int d5=5;
int d6=6;
int d7=7;
LiquidCrystal lcd(rs,en,d4,d5,d6,d7);                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                      

int x=0;
int y=0;
int customkey1;
double firstNum;
double secNum;
char op;
float operand;
double answere;
int wait=5000;
  


const byte COLS = 4; //four rows
const byte ROWS = 4; //four columns
//define the cymbols on the buttons of the keypads
char hexaKeys[ROWS][COLS] = {
  {'+','=','0','.'},
  {'/','9','8','7'},
  {'-','6','5','4'},
  {'A','3','2','1'}
};
byte rowPins[COLS] = {A0, A1, A2, A3}; //connect to the row pinouts of the keypad
byte colPins[ROWS] = {13, 12, 11, 10}; //connect to the column pinouts of the keypad
//initialize an instance of class NewKeypad
lcd.print(secNum);
Keypad customKeypad = Keypad( makeKeymap(hexaKeys), colPins, rowPins, ROWS, COLS); 


void setup() {
lcd.begin(16,2);  
Serial.begin(9600);
}

void loop() {
  char customkey = customKeypad.getKey();
  int customkey1 = int(customkey) - 48;
  lcd.setCursor(0,0);
  lcd.print("Your Calculator");
  
  
  if (customkey == '.') {
    float between = operand / 10;
     operand = between;
     lcd.clear();
     lcd.setCursor(0,1);
     lcd.print(operand);
     delay(3000);
     x++;
     x++;
  }
  //if (customkey == 'A') {
    //lcd.clear();
    //firstNum = 0;
    //secNum = 0;
    //operand = 0;
    //x = 0;
    //lcd.setCursor(x,1);
  //}
  else if (customkey ==   '*' or customkey == '+' or customkey == '/' or customkey == '-') {
    firstNum = operand;
    op = customkey;
    lcd.setCursor(x,1);
    lcd.print(customkey);
    x++;
    operand = 0; 
  }
  else if (customkey == '=') {
    secNum = operand;
    Rechenzeichen();
    lcd.clear();
    lcd.setCursor(0,1);
    lcd.print(firstNum);
    lcd.print(op);
    lcd.print(secNum);
    delay(2000);   
    lcd.clear();
    lcd.setCursor(0,0);
    lcd.print("Your answere is");
    lcd.setCursor(0,1);
    lcd.print(answere);
    delay(wait);
    lcd.clear();
    x = 0;
    operand = 0;
    firstNum = 0;
    secNum= 0;
  }
  else if (customkey and customkey != 'A' and customkey != '.') {
    operand = operand * 10 + customkey1;
    lcd.setCursor(x,1);
    lcd.print(customkey1);
    x++;
  }
}


void Rechenzeichen () {
  if (op == '+') {
    answere = firstNum + secNum;
  }
  if (op == '*') {
    answere = firstNum * secNum;
  }
  if (op == '-') {
    answere = firstNum - secNum;
  }
  if (op == '/') { 
    answere = firstNum / secNum;
  }
}
