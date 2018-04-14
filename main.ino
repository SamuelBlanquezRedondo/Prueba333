#include <Arduino.h>

#declare LED 12

void setup()
{
    pinMode(LED,OUTPUT);
	
}

void loop()
{
	digitalWrite(LED,HIGH);
}
