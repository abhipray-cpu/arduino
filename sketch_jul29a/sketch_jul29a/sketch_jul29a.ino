#include<Arduino.h>
#define relay1 53
#define relay2 52
#define relay3 51
#define relay4 50
#define relay5 49
#define relay6 48
#define relay7 47
#define relay8 46
#define relay9 45
#define relay10 44
#define relay11 43
#define relay12 42
#define relay13 41
#define relay14 40
#define relay15 39
#define relay16 38
void setup() {
  // put your setup code here, to run once:

Serial.begin(9600);
pinMode(relay1,OUTPUT);
pinMode(relay2,OUTPUT);
pinMode(relay3,OUTPUT);
pinMode(relay4,OUTPUT);
pinMode(relay5,OUTPUT);
pinMode(relay6,OUTPUT);
pinMode(relay7,OUTPUT);
pinMode(relay8,OUTPUT);
pinMode(relay9,OUTPUT);
pinMode(relay10,OUTPUT);
pinMode(relay11,OUTPUT);
pinMode(relay12,OUTPUT);
pinMode(relay13,OUTPUT);
pinMode(relay14,OUTPUT);
pinMode(relay15,OUTPUT);
pinMode(relay16,OUTPUT);
for(int i=0;i<=100;i++)
{
  delay(10);
  }
  Serial.println("TURNING ON ALL RELAY CHANNELS");
  digitalWrite(relay1,HIGH);
  digitalWrite(relay2,HIGH);
  digitalWrite(relay3,HIGH);
  digitalWrite(relay4,HIGH);
  digitalWrite(relay5,HIGH);
  digitalWrite(relay6,HIGH);
  digitalWrite(relay7,HIGH);
  digitalWrite(relay8,HIGH);
  digitalWrite(relay9,HIGH);
  digitalWrite(relay10,HIGH);
  digitalWrite(relay11,HIGH);
  digitalWrite(relay12,HIGH);
  digitalWrite(relay13,HIGH);
  digitalWrite(relay14,HIGH);
  digitalWrite(relay15,HIGH);
  digitalWrite(relay16,HIGH);
}

void loop() {
  for(int i=0;i>=0;i++)
  {
    Serial.println("Switching off relay1");
    digitalWrite(relay1,LOW);
    delay(100);
    Serial.println("Switching off relay2");
    digitalWrite(relay2,LOW);
    delay(100);
    Serial.println("Switching off relay3");
    digitalWrite(relay3,LOW);
    delay(100);
    Serial.println("Switching off relay4");
    digitalWrite(relay4,LOW);
    delay(100);
    Serial.println("Switching off relay5");
    digitalWrite(relay5,LOW);
    delay(100);
    Serial.println("Switching off relay6");
    digitalWrite(relay6,LOW);
    delay(100);
    Serial.println("Switching off relay7");
    digitalWrite(relay7,LOW);
    delay(100);
    Serial.println("Switching off relay8");
    digitalWrite(relay8,LOW);
    delay(100);
    Serial.println("Switching off relay9");
    digitalWrite(relay9,LOW);
    delay(100);
    Serial.println("Switching off relay10");
    digitalWrite(relay10,LOW);
    delay(100);
    Serial.println("Switching off relay11");
    digitalWrite(relay11,LOW);
    delay(100);
    Serial.println("Switching off relay12");
    digitalWrite(relay12,LOW);
    delay(100);
    Serial.println("Switching off relay13");
    digitalWrite(relay13,LOW);
    delay(100);
    Serial.println("Switching off relay14");
    digitalWrite(relay14,LOW);
    delay(100);
    Serial.println("Switching off relay15");
    digitalWrite(relay15,LOW);
    delay(100);
    Serial.println("Switching off relay16");
    digitalWrite(relay16,LOW);
    delay(100);
    Serial.println("Switching on relay1");
    digitalWrite(relay1,HIGH);
    delay(100);
    Serial.println("Switching on relay2");
    digitalWrite(relay2,HIGH);
    delay(100);
    Serial.println("Switching on relay3");
    digitalWrite(relay3,HIGH);
    delay(100);
    Serial.println("Switching on relay4");
    digitalWrite(relay4,HIGH);
    delay(100);
    Serial.println("Switching on relay5");
    digitalWrite(relay5,HIGH);
    delay(100);
    Serial.println("Switching on relay6");
    digitalWrite(relay6,HIGH);
    delay(100);
    Serial.println("Switching on relay7");
    digitalWrite(relay7,HIGH);
    delay(100);
    Serial.println("Switching on relay8");
    digitalWrite(relay8,HIGH);
    delay(100);
    Serial.println("Switching on relay9");
    digitalWrite(relay9,HIGH);
    delay(100);
    Serial.println("Switching on relay10");
    digitalWrite(relay10,HIGH);
    delay(100);
    Serial.println("Switching on relay11");
    digitalWrite(relay11,HIGH);
    delay(100);
    Serial.println("Switching on relay12");
    digitalWrite(relay12,HIGH);
    delay(100);
    Serial.println("Switching on relay13");
    digitalWrite(relay13,HIGH);
    delay(100);
    Serial.println("Switching on relay14");
    digitalWrite(relay14,HIGH);
    delay(100);
    Serial.println("Switching on relay15");
    digitalWrite(relay15,HIGH);
    delay(100);
    Serial.println("Switching on relay16");
    digitalWrite(relay16,HIGH);
    delay(100);
    }

}
