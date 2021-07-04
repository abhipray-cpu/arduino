#include<Arduino.h>
#include<IRremote.h>
const int signal=4;
IRrecv irDetect(signal); 
void setup()
{
Serial.begin(9600);
irDetect.enableIRIn();//This command will start the receiver
}
void loop()
{
 if (irDetect.decode()) {
        // Print a short summary of received data
        irDetect.printIRResultShort(&Serial);
        Serial.println("Re milgayi chitti tau");
 }
 }