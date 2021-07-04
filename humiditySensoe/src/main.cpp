//indicator
#include<Arduino.h>
#include<DHT.h>//this library is required to get reading from the dht sensor i.e DHT11 and DHT22
#include <Adafruit_Sensor.h>//you have to include this library as well incase you want to use any adfruit library as here we are using DHT
#define DHTPIN 5 //we have to define the signal pin
#define DHTTYPE DHT11 //if you are using DHT22 use DHT22 in place of DHT11
const int R=6;
const int G=7;
const int B=8;
int Rstate=0;
int Gstate=0;
int Bstate=0;

DHT dht(DHTPIN, DHTTYPE);//defining the DHT parametrs

void setup() {
  pinMode(R,OUTPUT);
  pinMode(G,OUTPUT);
  pinMode(B,OUTPUT);
  Serial.begin(9600);//serial communication
  Serial.println(F("DHTxx test!"));

  dht.begin();//to start the communication
}

void loop()
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

//printing the results
Serial.print(F(" Humidity: "));
Serial.print(h);
Serial.print(F("%  Temperature: "));
Serial.print(t);
Serial.print(F("°C "));
Serial.print(f);
Serial.print(F("°F  Heat index: "));
Serial.print(hic);
Serial.print(F("°C "));
Serial.print(hif);
Serial.println(F("°F"));
if(t<18.00)
{
  Serial.print("Temperature has fallen below the threshold temperature");
  Serial.println();
  Rstate=1;
}
else
{
  Serial.print("Temperature is well above the trreshold value");
  Serial.println();
  Rstate = 0;
}
if(h<85.00)
{
  Serial.print("The humidity have fallen below the threshold value");
Serial.println();
Gstate=1;
}
else
{
  Serial.print("The humidity is well above the threshold value");
  Serial.println();
  Gstate=0;
}
if(hic<20.00)
{
  Serial.print("The heat index has fallen below the threshold value");
  Serial.println();
  Bstate=1;
}
else
{
  Serial.print("The heat index is well above the threshold value");
  Serial.println();
  Gstate=0;
}
if(Rstate == 1)
{
  digitalWrite(R,HIGH);
  if(Gstate == 1)
{
  digitalWrite(G,HIGH);
  
if(Bstate == 1)
{
  digitalWrite(B,HIGH);
}
else
{
  digitalWrite(B,LOW);
}
}
else
{
  digitalWrite(G,LOW);
  
if(Bstate == 1)
{
  digitalWrite(B,HIGH);
}
else
{
  digitalWrite(B,LOW);
}
}

}
else
{
  digitalWrite(R,LOW);
  if(Gstate == 1)
{
  digitalWrite(G,HIGH);
  
if(Bstate == 1)
{
  digitalWrite(B,HIGH);
}
else
{
  digitalWrite(B,LOW);
}
}
else
{
  digitalWrite(G,LOW);
  
if(Bstate == 1)
{
  digitalWrite(B,HIGH);
}
else
{
  digitalWrite(B,LOW);
}
}
}
delay(10000);
}


