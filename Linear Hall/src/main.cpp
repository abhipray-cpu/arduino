#include <Arduino.h>
int digitalPin = 3; // linear Hall magnetic sensor digital interface
int analogPin = A0; // linear Hall magnetic sensor analog interface
int digitalVal ; // digital readings
int analogVal; // analog readings

void setup ()
{ 
  pinMode (digitalPin, INPUT); 
  //pinMode(analogPin, INPUT); 
  Serial.begin(9600);
}

void loop ()
{
  // Read the digital interface
  // digitalVal = digitalRead(digitalPin) ; 
  // if (digitalVal == HIGH) // When magnetic field is present, Arduino LED is on
  // {
  //   Serial.println("Magnetic field is detected");
  // }
  // else
  // {
  //   Serial.println("Halak mei lawda phasa do");
  //   }
  
  // Read the analog interface
  int value = analogRead(analogPin);
   float uTesla = (value - 2.6) * 15;
  float mTesla = (value - 2.6) * 1.5;
  Serial.println("The magentic field in microtesla = "); // print analog value
Serial.print(uTesla);
Serial.print("   ");
Serial.print("The magnetic field in mini tesla = ");
Serial.print(mTesla);
Serial.println();
  delay(1000);
}
