#include<Arduino.h>
const int knockSensor = A0; // the piezo is connected to analog pin 0
const int threshold = 400;  // threshold value to decide when the detected sound is a knock or not
const int in1=7;

// these variables will change:
int sensorReading = 0;      // variable to store the value read from the sensor pin

void setup() {

pinMode(in1,OUTPUT);
  Serial.begin(9600);
  digitalWrite(in1,LOW);
}
void loop() {
  // read the sensor and store it in the variable sensorReading:
  sensorReading = analogRead(knockSensor);

  // if the sensor reading is greater than the threshold:
  if (sensorReading >= threshold) {
    // send the string "Knock!" back to the computer, followed by newline
    Serial.println("Knock!");
    digitalWrite(in1,HIGH);
  }
  else
  {
      digitalWrite(in1,LOW);
  }
     delay(10000);
}