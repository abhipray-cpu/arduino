//Room details project
/*We will be measuring following
1)Humidity sound1 violet
2)Room temp sound2 yellow
3)Heat index sound3 green
4)Flame detection sound4 red
5)Light sensor white
6)Heart rate measure sound5 blue*/
#include<Arduino.h>
#include<DHT.h>//this library is required to get reading from the dht sensor i.e DHT11 and DHT22
#include <Adafruit_Sensor.h>//you have to include this library as well incase you want to use any adfruit library as here we are using DHT
#define DHTPIN 5 //we have to define the signal pin
#define DHTTYPE DHT11 //if you are using DHT22 use DHT22 in place of DHT11
#define relay1 13 //room lights
#define relay2 12 //water dispenser
#define relay3 11 //humidity control
#define relay4 10 //temperature control
#define red 2
#define green 3
#define blue 4
#define humid 6
#define flame 7
#define light A0
#define heart 9
#define samp_siz 4
#define rise_threshold 4

DHT dht(DHTPIN, DHTTYPE);//defining the DHT parametrs



void setup()
{
pinMode(relay,OUTPUT);
pinMode(red,OUTPUT);
pinMode(green,OUTPUT);
pinMode(blue,OUTPUT);
pinMode(humid,INPUT);
pinMode(aag,INPUT);
pinMode(roshni,INPUT);
pinMode(dil,INPUT);
digitalWrite(relay1,LOW);
digitalWrite(relay1,LOW);
digitalWrite(relay1,LOW);
digitalWrite(relay1,LOW);
Serial.begin(9600);
dht.begin();//to start the communication
}

void loop()
{
    humidity();
    flame_method();
    light_method();
    heart_method();
    delay(100);
}

void humidity()//this function will be used for humidity room temperature and heat index
{
  float h = dht.readHumidity();        // read humidity
 float t = dht.readTemperature();     // read temperature
 float f = dht.readTemperature(true);  //read temperature as farenhite if set true
 //to check if any of the above readings has failed
 if (isnan(h) || isnan(t) || isnan(f)) {
   Serial.println(F("Failed to read from DHT sensor!"));
   return;
}
//getting headIndex

//Compute heat index in Fahrenheit (the default)

float hif = dht.computeHeatIndex(f, h);
//Compute heat index in Celsius (isFahreheit = false)

float hic = dht.computeHeatIndex(t, h, false);
humid1(h);
humid2(t);
humid3(t);
if(hic < 20.00 )
{
  Serial.println("The heat index has fallen below the min threshold");
  rgb(0,123,221);
  sound(6);
}
else if(hic > 40.00)
{
  Serial.println("The heat index has risen beyond the max threshold");
  rgb(255,123,1);
  sound(7);
}
}
void humid1(float value)//will control humid issue
{
  if(value < 85.00)
  {
    Serial.println("The humidity has fallen below the min threshold");
    control_humidity(1);
    rgb(0,0,255);
    sound(8);
  }
  else
  control_humidity(0);
}
void humid2(float value)//low temperature
{
   if(value < 18.00)
   {
     Serial.println("The temperature has fallen below the min threshold value");
     sound(9);
     rgb(0,255,0);
     control_low_temperature(1);
   }
   else
   control_low_temperature(0);
}

void humid3(float value)//high temperature
{
  if(value > 35.00)
  {
    Serial.println("The temperature has risen beyonf the max threshold value");
    sound(10);
    rgb(255,0,0);
    control_high_temperature(1);
  }
  else
  control_high_temperature(0);
}
void flame_method()//will be used for flame
{
   int val=digitalRead(flame);
   if(val==HIGH)
   {
     Serial.println("Fire");
     sound(5);
     rgb(255,0,0);
     control_flame(1);
   }
   else
   control_flame(2);
}

void light_method()//will be used for room lighting
{
     int val=analogRead(light);
     if(val < 5)
     {
       Serial.println("It's morning bitch wakeup");
       sound(3);
       rgb(255,0,123);
     }
     else
     {
       Serial.println("It's night bitch go to bed");
       sound(4);
       rgb(0,123,255);
     }
     }
}

void heart_method()//measures the heart rate
{
  float reads[samp_siz], sum;
      long int now, ptr;
      float last, reader, start;
      float first, second, third, before, print_value;
      bool rising;
      int rise_count;
      int n;
      long int last_beat;

      for (int i = 0; i < samp_siz; i++)
        reads[i] = 0;
      sum = 0;
      ptr = 0;

      while(1)
      {
        // calculate an average of the sensor
        // during a 20 ms period (this will eliminate
        // the 50 Hz noise caused by electric light
        n = 0;
        start = millis();
        reader = 0.;
        do
        {
          reader += analogRead(heart);
          n++;
          now = millis();
        }
        while (now < start + 20);
        reader/= n;  // we got an average

        // Add the newest measurement to an array
        // and subtract the oldest measurement from the array
        // to maintain a sum of last measurements
        sum-= reads[ptr];
        sum+= reader;
        reads[ptr] = reader;
        last = sum/samp_siz;
        // now last holds the average of the values in the array

        // check for a rising curve (= a heart beat)
        if (last > before)
        {
          rise_count++;
          if (!rising && rise_count > rise_threshold)
          {
            // Ok, we have detected a rising curve, which implies a heartbeat.
            // Record the time since last beat, keep track of the two previous
            // times (first, second, third) to get a weighed average.
            // The rising flag prevents us from detecting the same rise more than once.
            rising = true;
            first = millis() - last_beat;
            last_beat = millis();

            // Calculate the weighed average of heartbeat rate
            // according to the three last beats
            print_value = 60000. / (0.4 * first + 0.3 * second + 0.3 * third);

            Serial.print(print_value);
            Serial.print('\n');

            third = second;
            second = first;
            sound(1);
            rgb(255,255,255);
            Serial.println("Your heartbeat is rising");

          }
        }
        else
        {
          // Ok, the curve is falling
          rising = false;
          rise_count = 0;
          sound(2);
          rgb(255,255,255);
          Serial.println("Your heartbear is falling");
        }
        before = last;


        ptr++;
        ptr %= samp_siz;

      }
  }

}

void rgb(int r,int b,int g)
{
       digitalWrite(red,r);
       digitalWrite(green,g);
       digitalWrite(blue,b);
}

void sound(int option)
{
    if(option == 1)
    {
      for (int i = 0; i < 80; i++) {  // make a sound
      digitalWrite(buzzer, HIGH); // send high signal to buzzer
       delay(1); // delay 1ms
      digitalWrite(buzzer, LOW); // send low signal to buzzer
 	     delay(1);
 }

    }
    if(option == 2)
    {
      for (int i = 0; i < 100; i++) {  // make a sound
      digitalWrite(buzzer, HIGH); // send high signal to buzzer
       delay(5); // delay 1ms
      digitalWrite(buzzer, LOW); // send low signal to buzzer
       delay(1);
    }
     if(option == 3)
     {
       for (int i = 0; i < 180; i++) {  // make a sound
        digitalWrite(buzzer, LOW); // send high signal to buzzer
        delay(1); // delay 1ms
        digitalWrite(buzzer, HIGH); // send low signal to buzzer
  	     delay(10);
     }
    if(option == 4)
    {
      for (int i = 0; i < 50; i++) {  // make a sound
      digitalWrite(buzzer, HIGH); // send high signal to buzzer

      digitalWrite(buzzer, LOW); // send low signal to buzzer
        delay(1);
    }
     if(option == 5)
     {
       for (int i = 0; i < 100; i++) {  // make a sound
       digitalWrite(buzzer, HIGH); // send high signal to buzzer
        delay(10); // delay 1ms
       digitalWrite(buzzer, LOW); // send low signal to buzzer
         delay(3);
     }
    if(option == 6)
    {
      for (int i = 0; i < 80; i++) {  // make a sound
      digitalWrite(buzzer, HIGH); // send high signal to buzzer
       delay(6); // delay 1ms
      digitalWrite(buzzer, LOW); // send low signal to buzzer
 	     delay(3);
    }
     if(option == 7)
     {
       for (int i = 0; i < 140; i++) {  // make a sound
       digitalWrite(buzzer, LOW); // send high signal to buzzer
        delay(3); // delay 1ms
       digitalWrite(buzzer, HIGH); // send low signal to buzzer
         delay(3);
  }
  if(option == 8)
  {
    for (int i = 0; i < 120; i++) {  // make a sound
    digitalWrite(buzzer, HIGH); // send high signal to buzzer
     delay(5); // delay 1ms
    digitalWrite(buzzer, LOW); // send low signal to buzzer
      delay(2);
}
if(option == 9)
{
  for (int i = 0; i < 60; i++) {  // make a sound
  digitalWrite(buzzer, LOW); // send high signal to buzzer
   delay(6); // delay 1ms
  digitalWrite(buzzer, HIGH); // send low signal to buzzer
    delay(3);
}
if(option == 10)
{
  for (int i = 0; i < 40; i++) {  // make a sound
  digitalWrite(buzzer, HIGH); // send high signal to buzzer
   delay(1); // delay 1ms
  digitalWrite(buzzer, HIGH); // send low signal to buzzer
    delay(4);
}
if(option == 11)
{
  for (int i = 0; i < 140; i++) {  // make a sound
  digitalWrite(buzzer, LOW); // send high signal to buzzer
   delay(1); // delay 1ms
  digitalWrite(buzzer, HIGH); // send low signal to buzzer
    delay(3);
}
}

void control_flame(int state)
{
   if(state == 1)
   {
     digitalWrite(relay1,HIGH);//will switch on the water dispenser
   }
   else
   digitalWrite(relay1,LOW);//the water dispenser will be off
}
void control_high_temperature(int state)
{
      if(state == 1)
      digitalWrite(relay2,HIGH);//will switch on fan
      else
      digitalWrite(relay2,LOW);
}

void control_humidity(int state)
{
   if(state == 1)
   digitalWrite(relay3,HIGH);//will switch on ac
   else
   digitalWrite(relay3,LOW);
}
void control_low_temperature(int state)
{
  if(state == 1)
  {
    digitalWrite(relay4,HIGH);//will switch on heater
  }
  else
  digitalWrite(relay4,LOW);
}
