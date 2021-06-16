//metal touch sensor
#include <Arduino.h>
int analogInput = A0;
int digitalInput = 3;
 
void setup ()
{
  pinMode (analogInput, INPUT);
  pinMode (digitalInput, INPUT);     
  Serial.begin (9600);
}
 
 
void loop ()
{
  float analogValue;
  int digitalValue;
 
  // Current value will be read and converted to the voltage
   analogValue = analogRead (analogInput) * (5.0 / 1023.0); 
   digitalValue = digitalRead (digitalInput);
 
  // and outputted here
  Serial.print ("Analog voltage value:"); 
  Serial.print (analogValue, 4);  
  Serial.print ("V, ");
  Serial.print ("Touch input:");
 
  if(digitalValue==1)
  {
      Serial.println (" detected");
  }
  else
  {
      Serial.println (" not detected");
  }
  Serial.println ("----------------------------------------------------------------");
  delay (250);
}