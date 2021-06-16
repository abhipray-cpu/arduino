//analog sensor
// #include <Arduino.h>
// int ThermistorPin = A0;
// int Vo;
// float R1 = 10000; // value of R1 on board
// float logR2, R2, T;
// float c1 = 0.001129148, c2 = 0.000234125, c3 = 0.0000000876741; //steinhart-hart coeficients for thermistor

// void setup() {
//   Serial.begin(9600);
// }

// void loop() {
//   Vo = analogRead(ThermistorPin);
//   R2 = R1 * (1023.0 / (float)Vo - 1.0); //calculate resistance on thermistor
//   logR2 = log(R2);
//   T = (1.0 / (c1 + c2*logR2 + c3*logR2*logR2*logR2)); // temperature in Kelvin
//   T = T - 273.15; //convert Kelvin to Celcius
//  // T = (T * 9.0)/ 5.0 + 32.0; //convert Celcius to Farenheit

//   Serial.print("Temperature: "); 
//   Serial.print(T);
//   Serial.println(" K"); 

//   delay(500);
// }

//KY-028 Digital Sensor Module
// #include<Arduino.h>
// int led = 13; // define the LED pin
// int digitalPin = 2; // KY-028 digital interface
// int analogPin = A0; // KY-028 analog interface
// int digitalVal; // digital readings
// int analogVal; //analog readings

// void setup()
// {
//   pinMode(led, OUTPUT);
//   pinMode(digitalPin, INPUT);
//   //pinMode(analogPin, OUTPUT);
//   Serial.begin(9600);
// }

// void loop()
// {
//   // Read the digital interface
//   digitalVal = digitalRead(digitalPin); 
//   if(digitalVal == HIGH) // if temperature threshold reached
//   {
//     digitalWrite(led, HIGH); // turn ON Arduino's LED
//   }
//   else
//   {
//     digitalWrite(led, LOW); // turn OFF Arduino's LED
//   }

//   // Read the analog interface
//   analogVal = analogRead(analogPin); 
//   Serial.println(analogVal); // print analog value to serial

//   delay(100);
// }

