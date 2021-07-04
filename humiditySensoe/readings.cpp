#include<Arduino.h>
#include<DHT.h>//this library is required to get reading from the dht sensor i.e DHT11 and DHT22
#include <Adafruit_Sensor.h>//you have to include this library as well incase you want to use any adfruit library as here we are using DHT
#define DHTPIN 5 //we have to define the signal pin
#define DHTTYPE DHT11 //if you are using DHT22 use DHT22 in place of DHT11

DHT dht(DHTPIN, DHTTYPE);//defining the DHT parametrs

void setup() {
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

}


