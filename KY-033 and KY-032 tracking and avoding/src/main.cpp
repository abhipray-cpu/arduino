#include <Arduino.h>
int Sensor = 10; // Declaration of the sensor input pin
   
void setup ()
{
  Serial.begin(9600); // Initialization serial output
  pinMode (Sensor, INPUT) ; // Initialization sensor pin
}
   
// The program reads the status of the sensor pins
// shows via serial terminal if the linetracker is on the line or not
void loop ()
{
  bool val = digitalRead (Sensor) ; // The current signal of the sensor will be read
   
  if (val == HIGH) // If a signal is detected the LED will light up.
  {
    Serial.println("LineTracker is on the line");
  }
  else
  {
    Serial.println("Linetracker is not on the line");
  }
  Serial.println("------------------------------------");
  delay(500); // Break of 500ms between the measurements 
}
 