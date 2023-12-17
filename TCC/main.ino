#include <Arduino.h>

void setup()
{
Serial.begin(9600);
}

void loop()
{
if(Serial.available() > 0)
{
    String receivedData = Serial.readString();
    Serial.print("Received: ");
    Serial.println(receivedData);
}
else 
{
    Serial.println("Nothing received...");
    delay(1000);
}
}