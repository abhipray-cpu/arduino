#include<Arduino.h>
#define buzzer 7 
#define flame 6

void setup()
{
  pinMode(flame,INPUT);
  pinMode(buzzer,OUTPUT);
}

void loop()
{
  int buzzer_val=digitalRead(flame);
  if(buzzer_val == HIGH)
  digitalWrite(buzzer,HIGH);
  delay(100);
}