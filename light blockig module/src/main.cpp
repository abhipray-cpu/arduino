#include <Arduino.h>
int buttonpin = 3; // define photo interrupter signal pin
int val; //define a numeric variable

void setup()
{
	Serial.begin(9600);
	pinMode(buttonpin, INPUT); //photo interrupter pin as input
}

void loop()
{
	val=digitalRead(buttonpin); //read the value of the sensor 
	if(val == HIGH) // turn on LED when sensor is blocked 
	{
		Serial.println("An object is detected");
	}
	else
	{
		Serial.println("Sab bdiya mota bhai");
	}
}