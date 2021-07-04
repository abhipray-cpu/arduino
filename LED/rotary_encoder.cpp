#include<Arduino.h>


// Rotary Encoder Inputs
#define CLK 6
#define DT 7

int counter = 255;
int currentStateCLK;
int lastStateCLK;
int redpin = 11; //select the pin for the red LED
int bluepin =10; // select the pin for the  blue LED
int greenpin = 9;// select the pin for the green LED



void setup() {
  
  // Set encoder pins as inputs
  pinMode(CLK,INPUT);
  pinMode(DT,INPUT);
   pinMode(redpin, OUTPUT);
  pinMode(bluepin, OUTPUT);
  pinMode(greenpin, OUTPUT);
  
  // Setup Serial Monitor
  Serial.begin(9600);
  

  
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
    } else {
      // Encoder is rotating CW so increment
      counter ++;
    }
  }
  int val=counter;
  // Remember last CLK state
  lastStateCLK = currentStateCLK;
   analogWrite(redpin, val);  //set PWM value for red
    analogWrite(bluepin, 255 - val); //set PWM value for blue
    analogWrite(greenpin, 128 - val); //set PWM value for green
    
}
