#include <dht.h>

int dht_pin = A0;     // Analog Pin A0 of Arduino is connected to DHT11 out pin
int red = 8;
int yellow = 9;
int green = 10;
dht DHT;
 
void setup()
{
  Serial.begin(9600);
  delay(500);
  Serial.println("DHT11 Humidity & temperature Sensor\n\n");
  delay(1000);
  pinMode(red, OUTPUT);
  pinMode(yellow, OUTPUT);
  pinMode(green, OUTPUT);
}
 
void loop()
{
    DHT.read11(A0);
    
    Serial.print("Humidity = ");
    Serial.print(DHT.humidity);
    Serial.print("%    ");
    Serial.print("Temperature = ");
    Serial.print(DHT.temperature);
    Serial.println(" C");
    if (DHT.temperature == 23.00) {
      digitalWrite(green, HIGH);
      digitalWrite(red, LOW);
      digitalWrite(yellow, LOW);
    }
    else if (DHT.temperature == 22.00 or DHT.temperature == 24.00) {
      digitalWrite(yellow, HIGH);
      digitalWrite(green, LOW);
      digitalWrite(red, LOW);
    }
    else if (DHT.temperature <= 21.00 or DHT.temperature >= 25.00) {
      digitalWrite(red, HIGH);
      digitalWrite(yellow, LOW);
      digitalWrite(green, LOW);
    }
    
    delay(2000); //Reduce Time for Quick Reply 
}
