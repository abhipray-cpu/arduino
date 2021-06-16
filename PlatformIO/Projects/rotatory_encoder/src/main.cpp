#include<Arduino.h>
#include <Servo.h>

// Rotary Encoder Inputs
#define CLK 6
#define DT 7

Servo servo;
int counter = 0;
int currentStateCLK;
int lastStateCLK;

void setup() {
  
  // Set encoder pins as inputs
  pinMode(CLK,INPUT);
  pinMode(DT,INPUT);
  
  // Setup Serial Monitor
  Serial.begin(9600);
  
  // Attach servo on pin 9 to the servo object
  servo.attach(2);
  servo.write(counter);
  
  // Read the initial state of CLK
  lastStateCLK = digitalRead(CLK);
}

void loop() {
  
  // Read the current state of CLK
  currentStateCLK = digitalRead(CLK);
  
  // If last and current state of CLK are different, then pulse occurred
  // React to only 1 state change to avoid double count
  //i.e only one rotation ye nhi ki bc kutto ki tarah dabaei jaa rhe
  if (currentStateCLK != lastStateCLK  && currentStateCLK == 1){
    
    // If the DT state is different than the CLK state then
    // the encoder is rotating CCW so decrement
    if (digitalRead(DT) != currentStateCLK) { //anti/counterClockwise
      counter --;
      if (counter<0)
        counter=0;
    } else {
      // Encoder is rotating CW so increment
      counter ++;
      if (counter>179)
        counter=179;
    }
    // Move the servo
    servo.write(counter);
    Serial.print("Position: ");
    Serial.println(counter);
  }
  
  // Remember last CLK state
  lastStateCLK = currentStateCLK;
}
