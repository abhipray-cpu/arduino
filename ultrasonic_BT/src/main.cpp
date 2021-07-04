#include <Arduino.h>

#define trigPin 10
#define echoPin 9

void setup() {
  
  Serial.begin (9600);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
 
}

void loop() {
  
  long duration, distance;
  digitalWrite(trigPin, LOW); 
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH);
  distance = (duration/2) / 29.1;
 
  Serial.print(distance);
  Serial.println(" cm");
  delay(50);


}