// sasta wala version
// #include <Arduino.h>
// #define switch 3
// int state;
// void setup() {
//   // put your setup code here, to run once:
// Serial.begin(9600);
// pinMode(switch,INPUT);
// }

// void loop() {
//   // put your main code here, to run repeatedly:
//   state=digitalRead(switch);
//   if(state == 0)
//   {
//     Serial.print("A magnetic field is detected");
//     Serial.println();
//   }
//   else
//   Serial.println("Masoomiyat wali feeling");
//   delay(100);
// }

//mehenge wala sensor
#include <Arduino.h>
#define switch 3
int state;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(switch,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  state=digitalRead(switch);
  if(state == 1)
  {
    Serial.print("A magnetic field is detected");
    Serial.println();
  }
  else
  Serial.println("Masoomiyat wali feeling");
  delay(100);
}