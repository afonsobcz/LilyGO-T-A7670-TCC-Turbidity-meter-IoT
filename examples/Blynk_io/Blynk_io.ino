#include <Arduino.h>
#define PIN 32 
void setup()
{
Serial.begin(9600);
pinMode(PIN,OUTPUT);
}

void loop()
{
    Serial.print("PIN: ");
    Serial.print(PIN);
    Serial.print(" ");
    Serial.println("LOW");
    digitalWrite(PIN,HIGH);
    
    delay(1000);

    Serial.print("PIN: ");
    Serial.print(PIN);
    Serial.print(" ");
    Serial.println("LOW");
    digitalWrite(PIN,LOW);
    delay(1000);
}