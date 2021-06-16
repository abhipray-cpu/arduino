#include <Arduino.h>
#define resitor A2
int resistance;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:

  resistance=analogRead(resitor);
  Serial.print("The resistance of the photoresistor is = ");
  Serial.print(resistance);
  Serial.println();
  delay(100);
}