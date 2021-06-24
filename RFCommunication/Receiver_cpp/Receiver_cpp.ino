//RF communication codes
//Receiver code
//Include Libraries
#include <SPI.h>
#include <nRF24L01.h>
#include <RF24.h>

//create an RF24 object
RF24 radio(9, 10);  // CE, CSN

//address through which two modules communicate.
const byte address[6] = "00001";

void setup()
{
  while (!Serial);
    Serial.begin(9600);
  
  radio.begin();
  
  //set the address
  radio.openReadingPipe(0, address);
  
  //Set module as receiver
  radio.startListening();
}

void loop()
{
  //Read the data if available in buffer
  if (radio.available())
  {
    char text[32] = {0};
    radio.read(&text, sizeof(text));
    Serial.println(text);
  }
}

This program looks quite similar to the program of the transmitter except some changes.

At the beginning of the setup function we start the serial communication. Next using radio.setReadingPipe() function we set the same address as transmitter and in that way we enable the communication between transmitter and receiver.

  //set the address
  radio.openReadingPipe(0, address);

The first argument is the number of the stream. You can create up to 6 streams that respond to different addresses. We created only address for the stream number 0. The second argument is the address to which the stream will react to collect the data.

The next step is to set the module as a receiver and start receiving data. To do that we use radio.startListening() function. From that moment the modem waits for data sent to the specified address.

//Set module as receiver
  radio.startListening();

In the loop function: The sketch checks whether any data has arrived at the address using radio.available() method. This method returns TRUE value if we any data is available in buffer.

if (radio.available())
  {
    char text[32] = {0};
    radio.read(&text, sizeof(text));
    Serial.println(text);
  }
