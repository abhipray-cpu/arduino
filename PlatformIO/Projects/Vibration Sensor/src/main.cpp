#include <Arduino.h>
#define sig 5
int val;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(sig,INPUT);
}

int state()
{
  int read;
  read=digitalRead(sig);
  if(read == 1)
  return 1;
  else 
  return 0;
}

void loop() {
  // put your main code here, to run repeatedly:
  val=state();
  if(val==1)
  Serial.println("Is ki Maa ka bhosda hila dala");
  else
  Serial.println("Re tau chalan de");
  delay(1000);

}

