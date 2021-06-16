//sketch for transmitter
#include<Arduino.h>
#define cr_pin 9

void setup() {
  Serial.begin(1200);	/* Define baud rate for serial communication */
  tone(cr_pin, 38000);	/* For modulation at 38kHz */
}

void loop() {
  int count;
  for(count = 0; count<100; count++)
  {
    Serial.println(count);
    delay(1000);
  }
}

//code for receiver
// #include<Arduino.h>
// void setup() {
//   Serial.begin(1200);	/* Define baud rate for serial communication */
// }
//
// void loop() {
// if(Serial.available())	/* If data is available on serial port */
//   {
//     Serial.print(char(Serial.read()));	/* Print character received on to the serial monitor */
//   }
// }
