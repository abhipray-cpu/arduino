#include<Arduino.h>
#define relay1 13
#define relay2 12
#define relay3 11
#define relay4 10
#define sound 2
#define reed 3
#define swipeLeft 4
#define swipeRight 5
#define touch 6
#define red 7
#define green 8
#define blue 9
int sound_state=1;
int reed_state=1;
int touch_state=1;
int left_state=1;
int right_state=1;
/*colour assignment
red sound
green reed
blue swipe
white touch

*/

void setup()
{
  pinMode(relay1,OUTPUT);
  pinMode(relay2,OUTPUT);
  pinMode(relay3,OUTPUT);
  pinMode(relay4,OUTPUT);
  pinMode(red,OUTPUT);
  pinMode(green,OUTPUT);
  pinMode(blue,OUTPUT);
  pinMode(sound,INPUT);
  pinMode(reed,INPUT);
  pinMode(swipeLeft,INPUT);
  pinMode(swipeRight,INPUT);
  pinMode(touch,INPUT);
  digitalWrite(relay1,LOW);
  digitalWrite(relay2,LOW);
  digitalWrite(relay3,LOW);
  digitalWrite(relay4,LOW);
  Serial.begin(9600);
}

void loop()
{
  sound_method();
  reed_method();
  swipe_method();
  touch_method();
  delay(100);
}

void rgb(int r,int g,int b)
{
  digitalWrite(red,r);
  digitalWrite(green,g);
  digitalWrite(blue,b);
}

void sound_method()
{
    int val=digitalRead(sound);
    if(val == HIGH)
    {
      sound_control(sound_state);
      Serial.println("The sound sensor is interacted with");
    }

}
void reed_method()
{
  int val=digitalRead(reed);
  if(val == HIGH)
  {
    reed_control(reed_state);
    Serial.println("The reed sensor is interacted with");
  }
}
void swipe_method()
{
   int valL=digitalRead(swipeLeft);
   int valR=digitalRead(swipeRight);
   if(valL == HIGH && valR == HIGH)
   {
     Serial.println("The swipe sensors are interacted with");
     swipe_control(left_state,right_state);
   }
}
void touch_method()
{
  int val=digitalRead(touch);
  if(val == HIGH)
  {
    touch_control(touch_state);
    Serial.println("The touch sensor is interacted with");
  }
}

void sound_control(int state)
{
  if(state == 1)
  {
    digitalWrite(relay1,HIGH);
    sound_state=0;
    Serial.println("The sound control is opened");
  }
  else
  {
    digitalWrite(relay1,LOW);
    sound_state=1;
    Serial.println("The sound control is now closed");

  }
}
void reed_control(int state)
{
  if(state == 1)
  {
    digitalWrite(relay2,HIGH);
    reed_state=0;
    Serial.println("The reed control is opened");
  }
  else
  {
    digitalWrite(relay2,LOW);
    reed_state=1;
    Serial.println("The reed control is now closed");

  }
}
void swipe_control(int state)
{
  if(state == 1)
  {
    digitalWrite(relay3,HIGH);
    touch_state=0;
    Serial.println("The touch control is opened");
  }
  else
  {
    digitalWrite(relay3,LOW);
    touch_state=1;
    Serial.println("The touch control is now closed");

  }
}
void touch_control(int stateL,int stateR)
{
  if(stateL == 1 && stateR ==1)
  {
    digitalWrite(relay4,HIGH);
    left_state=0;
    right_state=0;
    Serial.println("The swipe control is opened");
  }
  else if(stateL == 0 && stateR == 0)
  {
    digitalWrite(relay4,LOW);
    left_state=right_state=1;
    Serial.println("The swipe control is now closed");

  }
}
