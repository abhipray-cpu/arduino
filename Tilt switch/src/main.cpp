#include <Arduino.h>
int switch_pin = 3; // Definition of mercury tilt switch sensor interface
int val; // Defines a numeric variable

void setup()
{
	Serial.begin(9600);
	pinMode(switch_pin, INPUT);
}

void loop()
{
	val = digitalRead(switch_pin); // check mercury switch state
	if(val == HIGH)
	{
		Serial.println("Re tau ghoom gya bei");
	}
	else
	{
		Serial.println("Re tau chalan dei");
	}
}