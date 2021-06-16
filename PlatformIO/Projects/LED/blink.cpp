#include<Arduino.h>
const int R=3;
const int G=4;
const int B=5;

void setup()
{
  pinMode(R,OUTPUT);
  pinMode(G,OUTPUT);
  pinMode(B,OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  digitalWrite(R,HIGH);
  
  Serial.print("Red is on");
  Serial.println();
  delay(1000);
  digitalWrite(R,LOW);
   digitalWrite(G,HIGH);
  Serial.print("Green is on");
  Serial.println();
  delay(1000);
  digitalWrite(G,LOW);
   digitalWrite(B,HIGH);
  Serial.print("Blue is on");
  Serial.println();
  delay(1000);
  digitalWrite(B,LOW);
}