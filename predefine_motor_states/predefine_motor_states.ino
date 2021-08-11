#include<Servo.h>
#define killpin 9 // Please ignore. This is only to activate ext power to transmitter
#include "SPI.h"
#include "TFT_22_ILI9225.h"
#include "math.h"

#define TFT_RST A4
#define TFT_RS  A3
#define TFT_CS  A5  // SS
#define TFT_SDI A2  // MOSI
#define TFT_CLK A1  // SCK
#define TFT_LED 0   // 0 if wired to +5V directly

#define TFT_BRIGHTNESS 200 // Initial brightness of TFT backlight (optional)

#define ROTATE_ANGLE 10 // Angle in degrees to rotate the triangl
#define RED COLOR_RED
#define BLUE COLOR_BLUE

// Use hardware SPI (faster - on Uno: 13-SCK, 12-MISO, 11-MOSI)
TFT_22_ILI9225 tft = TFT_22_ILI9225(TFT_RST, TFT_RS, TFT_CS, TFT_SDI, TFT_CLK, TFT_LED);

Servo myServo1;
Servo myServo2;
Servo myServo3;
Servo myServo4;
Servo myServo5;
Servo myServo6;
Servo myServo7;
Servo myServo8;
Servo myServo9;
Servo myServo10;
String MOTOR1 = "MOTOR1:0";
String MOTOR2 = "MOTOR2:0";
String MOTOR3 = "MOTOR3:0";
String MOTOR4 = "MOTOR4:0";
String MOTOR5 = "MOTOR5:0";
String MOTOR6 = "MOTOR6:0";
String MOTOR7 = "MOTOR7:0";
String MOTOR8 = "MOTOR8:0";
String MOTOR9 = "MOTOR9:0";
String MOTOR10 = "MOTOR10:0";
// Setup
void setup() {
  tft.begin();
  Serial.begin(9600);
  myServo1.attach(13);
  myServo2.attach(13);
  myServo3.attach(13);
  myServo4.attach(13);
  myServo5.attach(13);
  myServo6.attach(13);
  myServo7.attach(13);
  myServo8.attach(13);
  myServo9.attach(13);
  myServo10.attach(13);
  intro_ui();
  initial_states();
}

// Loop
void loop()
{
     position1();
     position2();
     position3();
     position4();
     position5();
     position6();
     position7();
     position8();
     position9();
     position10();
     position11();
     position12();
     position13();
     position14();
     position15();
     position16();
     position17();
     position18();
     tft.clear();
     position17();
     position16();
     position15();
     position14();
     position13();
     position12();
     position11();
     position10();
     position9();
     position8();
     position7();
     position6();
     position5();
     position4();
     position3();
     position2();
     position1();
     tft.clear();
   }
void initial_states()
{tft.setFont(Terminal6x8);
  tft.drawRectangle(0,0,tft.maxX()-1,tft.maxY()-1,COLOR_WHITE);
 tft.drawText(10,10,MOTOR1,BLUE);
 tft.drawText(120,10,MOTOR2,BLUE);
 tft.drawText(10,40,MOTOR3,BLUE);
 tft.drawText(120,40,MOTOR4,BLUE);
 tft.drawText(10,70,MOTOR5,BLUE);
 tft.drawText(120,70,MOTOR6,BLUE);
 tft.drawText(10,100,MOTOR7,RED);
 tft.drawText(120,100,MOTOR8,RED);
 tft.drawText(10,130,MOTOR9,RED);
 tft.drawText(120,130,MOTOR10,RED);
 write_servo(0,0,0,0,0,0,0,0,0,0); 

  }
void write_servo(int state1,int state2,int state3,int state4,int state5,int state6,int state7,int state8,int state9,int state10)
{
  myServo1.write(state1);
  myServo2.write(state2);
  myServo3.write(state3);
  myServo4.write(state4);
  myServo5.write(state5);
  myServo6.write(state6);
  myServo7.write(state7);
  myServo8.write(state8);
  myServo9.write(state9);
  myServo10.write(state10);
 }  
void intro_ui()
{
  tft.clear();
  tft.setOrientation(1);
  tft.setFont(Terminal12x16);
  tft.drawText(30,80,"JAI SHREE RAM",COLOR_ORANGE);
  delay(1000);
  tft.clear();
  tft.drawText(50,10,"Say with me");
  tft.drawText(50,30,"ROOPA MC");
  tft.drawText(50,50,"REMYA MC");
  tft.drawText(50,70,"HOD MC");
  tft.drawText(50,90,"NIE MC");
  tft.drawText(50,110,"VTU MC");
  delay(1000);
  tft.clear();
   tft.drawText(70,20,"Angle");
  tft.drawText(70,60,"OF");
  tft.drawText(70,100,"Servo");
  tft.drawText(70,140,"Motors");
  tft.clear();
  }

void position1()
{
  MOTOR1="MOTOR1:10";
  MOTOR2="MOTOR2:10";
  MOTOR3="MOTOR3:10";
  MOTOR4="MOTOR4:10";
  MOTOR5="MOTOR5:10";
  MOTOR6="MOTOR6:10";
  MOTOR7="MOTOR7:10";
  MOTOR8="MOTOR8:10";
  MOTOR9="MOTOR9:10";
  MOTOR10="MOTOR10:10";
  tft.setFont(Terminal6x8);
  tft.drawRectangle(0,0,tft.maxX()-1,tft.maxY()-1,COLOR_WHITE);
 tft.drawText(10,10,MOTOR1,BLUE);
 tft.drawText(120,10,MOTOR2,BLUE);
 tft.drawText(10,40,MOTOR3,BLUE);
 tft.drawText(120,40,MOTOR4,BLUE);
 tft.drawText(10,70,MOTOR5,BLUE);
 tft.drawText(120,70,MOTOR6,BLUE);
 tft.drawText(10,100,MOTOR7,RED);
 tft.drawText(120,100,MOTOR8,RED);
 tft.drawText(10,130,MOTOR9,RED);
 tft.drawText(120,130,MOTOR10,RED); 
 write_servo(10,10,10,10,10,10,10,10,10,10); 

  }
void position2()
{
  MOTOR1="MOTOR1:20";
  MOTOR2="MOTOR2:20";
  MOTOR3="MOTOR3:20";
  MOTOR4="MOTOR4:20";
  MOTOR5="MOTOR5:20";
  MOTOR6="MOTOR6:20";
  MOTOR7="MOTOR7:20";
  MOTOR8="MOTOR8:20";
  MOTOR9="MOTOR9:20";
  MOTOR10="MOTOR10:20";
  tft.setFont(Terminal6x8);
  tft.drawRectangle(0,0,tft.maxX()-1,tft.maxY()-1,COLOR_WHITE);
 tft.drawText(10,10,MOTOR1,BLUE);
 tft.drawText(120,10,MOTOR2,BLUE);
 tft.drawText(10,40,MOTOR3,BLUE);
 tft.drawText(120,40,MOTOR4,BLUE);
 tft.drawText(10,70,MOTOR5,BLUE);
 tft.drawText(120,70,MOTOR6,BLUE);
 tft.drawText(10,100,MOTOR7,RED);
 tft.drawText(120,100,MOTOR8,RED);
 tft.drawText(10,130,MOTOR9,RED);
 tft.drawText(120,130,MOTOR10,RED); 
 write_servo(20,20,20,20,20,20,20,20,20,20); 

  }
void position3()
{
  MOTOR1="MOTOR1:30";
  MOTOR2="MOTOR2:30";
  MOTOR3="MOTOR3:30";
  MOTOR4="MOTOR4:30";
  MOTOR5="MOTOR5:30";
  MOTOR6="MOTOR6:30";
  MOTOR7="MOTOR7:30";
  MOTOR8="MOTOR8:30";
  MOTOR9="MOTOR9:30";
  MOTOR10="MOTOR10:30";
  tft.setFont(Terminal6x8);
  tft.drawRectangle(0,0,tft.maxX()-1,tft.maxY()-1,COLOR_WHITE);
 tft.drawText(10,10,MOTOR1,BLUE);
 tft.drawText(120,10,MOTOR2,BLUE);
 tft.drawText(10,40,MOTOR3,BLUE);
 tft.drawText(120,40,MOTOR4,BLUE);
 tft.drawText(10,70,MOTOR5,BLUE);
 tft.drawText(120,70,MOTOR6,BLUE);
 tft.drawText(10,100,MOTOR7,RED);
 tft.drawText(120,100,MOTOR8,RED);
 tft.drawText(10,130,MOTOR9,RED);
 tft.drawText(120,130,MOTOR10,RED); 
 write_servo(30,30,30,30,30,30,30,30,30,30); 

  }

void position4()
{
  MOTOR1="MOTOR1:40";
  MOTOR2="MOTOR2:40";
  MOTOR3="MOTOR3:40";
  MOTOR4="MOTOR4:40";
  MOTOR5="MOTOR5:40";
  MOTOR6="MOTOR6:40";
  MOTOR7="MOTOR7:40";
  MOTOR8="MOTOR8:40";
  MOTOR9="MOTOR9:40";
  MOTOR10="MOTOR10:40";
  tft.setFont(Terminal6x8);
  tft.drawRectangle(0,0,tft.maxX()-1,tft.maxY()-1,COLOR_WHITE);
 tft.drawText(10,10,MOTOR1,BLUE);
 tft.drawText(120,10,MOTOR2,BLUE);
 tft.drawText(10,40,MOTOR3,BLUE);
 tft.drawText(120,40,MOTOR4,BLUE);
 tft.drawText(10,70,MOTOR5,BLUE);
 tft.drawText(120,70,MOTOR6,BLUE);
 tft.drawText(10,100,MOTOR7,RED);
 tft.drawText(120,100,MOTOR8,RED);
 tft.drawText(10,130,MOTOR9,RED);
 tft.drawText(120,130,MOTOR10,RED); 
 write_servo(40,40,40,40,40,40,40,40,40,40); 

  }
void position5()
{
  MOTOR1="MOTOR1:50";
  MOTOR2="MOTOR2:50";
  MOTOR3="MOTOR3:50";
  MOTOR4="MOTOR4:50";
  MOTOR5="MOTOR5:50";
  MOTOR6="MOTOR6:50";
  MOTOR7="MOTOR7:50";
  MOTOR8="MOTOR8:50";
  MOTOR9="MOTOR9:50";
  MOTOR10="MOTOR10:50";
  tft.setFont(Terminal6x8);
  tft.drawRectangle(0,0,tft.maxX()-1,tft.maxY()-1,COLOR_WHITE);
 tft.drawText(10,10,MOTOR1,BLUE);
 tft.drawText(120,10,MOTOR2,BLUE);
 tft.drawText(10,40,MOTOR3,BLUE);
 tft.drawText(120,40,MOTOR4,BLUE);
 tft.drawText(10,70,MOTOR5,BLUE);
 tft.drawText(120,70,MOTOR6,BLUE);
 tft.drawText(10,100,MOTOR7,RED);
 tft.drawText(120,100,MOTOR8,RED);
 tft.drawText(10,130,MOTOR9,RED);
 tft.drawText(120,130,MOTOR10,RED); 
 write_servo(50,50,50,50,50,50,50,50,50,50); 

  }
void position6()
{
  MOTOR1="MOTOR1:60";
  MOTOR2="MOTOR2:60";
  MOTOR3="MOTOR3:60";
  MOTOR4="MOTOR4:60";
  MOTOR5="MOTOR5:60";
  MOTOR6="MOTOR6:60";
  MOTOR7="MOTOR7:60";
  MOTOR8="MOTOR8:60";
  MOTOR9="MOTOR9:60";
  MOTOR10="MOTOR10:60";
  tft.setFont(Terminal6x8);
  tft.drawRectangle(0,0,tft.maxX()-1,tft.maxY()-1,COLOR_WHITE);
 tft.drawText(10,10,MOTOR1,BLUE);
 tft.drawText(120,10,MOTOR2,BLUE);
 tft.drawText(10,40,MOTOR3,BLUE);
 tft.drawText(120,40,MOTOR4,BLUE);
 tft.drawText(10,70,MOTOR5,BLUE);
 tft.drawText(120,70,MOTOR6,BLUE);
 tft.drawText(10,100,MOTOR7,RED);
 tft.drawText(120,100,MOTOR8,RED);
 tft.drawText(10,130,MOTOR9,RED);
 tft.drawText(120,130,MOTOR10,RED); 
 write_servo(60,60,60,60,60,60,60,60,60,60); 

  }
void position7()
{
  MOTOR1="MOTOR1:70";
  MOTOR2="MOTOR2:70";
  MOTOR3="MOTOR3:70";
  MOTOR4="MOTOR4:70";
  MOTOR5="MOTOR5:70";
  MOTOR6="MOTOR6:70";
  MOTOR7="MOTOR7:70";
  MOTOR8="MOTOR8:70";
  MOTOR9="MOTOR9:70";
  MOTOR10="MOTOR10:70";
  tft.setFont(Terminal6x8);
  tft.drawRectangle(0,0,tft.maxX()-1,tft.maxY()-1,COLOR_WHITE);
 tft.drawText(10,10,MOTOR1,BLUE);
 tft.drawText(120,10,MOTOR2,BLUE);
 tft.drawText(10,40,MOTOR3,BLUE);
 tft.drawText(120,40,MOTOR4,BLUE);
 tft.drawText(10,70,MOTOR5,BLUE);
 tft.drawText(120,70,MOTOR6,BLUE);
 tft.drawText(10,100,MOTOR7,RED);
 tft.drawText(120,100,MOTOR8,RED);
 tft.drawText(10,130,MOTOR9,RED);
 tft.drawText(120,130,MOTOR10,RED); 
 write_servo(70,70,70,70,70,70,70,70,70,70); 

  }
void position8()
{
  MOTOR1="MOTOR1:80";
  MOTOR2="MOTOR2:80";
  MOTOR3="MOTOR3:80";
  MOTOR4="MOTOR4:80";
  MOTOR5="MOTOR5:80";
  MOTOR6="MOTOR6:80";
  MOTOR7="MOTOR7:80";
  MOTOR8="MOTOR8:80";
  MOTOR9="MOTOR9:80";
  MOTOR10="MOTOR10:80";
  tft.setFont(Terminal6x8);
  tft.drawRectangle(0,0,tft.maxX()-1,tft.maxY()-1,COLOR_WHITE);
 tft.drawText(10,10,MOTOR1,BLUE);
 tft.drawText(120,10,MOTOR2,BLUE);
 tft.drawText(10,40,MOTOR3,BLUE);
 tft.drawText(120,40,MOTOR4,BLUE);
 tft.drawText(10,70,MOTOR5,BLUE);
 tft.drawText(120,70,MOTOR6,BLUE);
 tft.drawText(10,100,MOTOR7,RED);
 tft.drawText(120,100,MOTOR8,RED);
 tft.drawText(10,130,MOTOR9,RED);
 tft.drawText(120,130,MOTOR10,RED); 
 write_servo(80,80,80,80,80,80,80,80,80,80); 

  }

void position9()
{
  MOTOR1="MOTOR1:90";
  MOTOR2="MOTOR2:90";
  MOTOR3="MOTOR3:90";
  MOTOR4="MOTOR4:90";
  MOTOR5="MOTOR5:90";
  MOTOR6="MOTOR6:90";
  MOTOR7="MOTOR7:90";
  MOTOR8="MOTOR8:90";
  MOTOR9="MOTOR9:90";
  MOTOR10="MOTOR10:90";
  tft.setFont(Terminal6x8);
  tft.drawRectangle(0,0,tft.maxX()-1,tft.maxY()-1,COLOR_WHITE);
 tft.drawText(10,10,MOTOR1,BLUE);
 tft.drawText(120,10,MOTOR2,BLUE);
 tft.drawText(10,40,MOTOR3,BLUE);
 tft.drawText(120,40,MOTOR4,BLUE);
 tft.drawText(10,70,MOTOR5,BLUE);
 tft.drawText(120,70,MOTOR6,BLUE);
 tft.drawText(10,100,MOTOR7,RED);
 tft.drawText(120,100,MOTOR8,RED);
 tft.drawText(10,130,MOTOR9,RED);
 tft.drawText(120,130,MOTOR10,RED); 
 write_servo(90,90,90,90,90,90,90,90,90,90); 

  }
void position10()
{
  MOTOR1="MOTOR1:100";
  MOTOR2="MOTOR2:100";
  MOTOR3="MOTOR3:100";
  MOTOR4="MOTOR4:100";
  MOTOR5="MOTOR5:100";
  MOTOR6="MOTOR6:100";
  MOTOR7="MOTOR7:100";
  MOTOR8="MOTOR8:100";
  MOTOR9="MOTOR9:100";
  MOTOR10="MOTOR10:100";
  tft.setFont(Terminal6x8);
  tft.drawRectangle(0,0,tft.maxX()-1,tft.maxY()-1,COLOR_WHITE);
 tft.drawText(10,10,MOTOR1,BLUE);
 tft.drawText(120,10,MOTOR2,BLUE);
 tft.drawText(10,40,MOTOR3,BLUE);
 tft.drawText(120,40,MOTOR4,BLUE);
 tft.drawText(10,70,MOTOR5,BLUE);
 tft.drawText(120,70,MOTOR6,BLUE);
 tft.drawText(10,100,MOTOR7,RED);
 tft.drawText(120,100,MOTOR8,RED);
 tft.drawText(10,130,MOTOR9,RED);
 tft.drawText(120,130,MOTOR10,RED); 
 write_servo(100,100,100,100,100,100,100,100,100,100); 

  }
void position11()
{
  MOTOR1="MOTOR1:110";
  MOTOR2="MOTOR2:110";
  MOTOR3="MOTOR3:110";
  MOTOR4="MOTOR4:110";
  MOTOR5="MOTOR5:110";
  MOTOR6="MOTOR6:110";
  MOTOR7="MOTOR7:110";
  MOTOR8="MOTOR8:110";
  MOTOR9="MOTOR9:110";
  MOTOR10="MOTOR10:110";
  tft.setFont(Terminal6x8);
  tft.drawRectangle(0,0,tft.maxX()-1,tft.maxY()-1,COLOR_WHITE);
 tft.drawText(10,10,MOTOR1,BLUE);
 tft.drawText(120,10,MOTOR2,BLUE);
 tft.drawText(10,40,MOTOR3,BLUE);
 tft.drawText(120,40,MOTOR4,BLUE);
 tft.drawText(10,70,MOTOR5,BLUE);
 tft.drawText(120,70,MOTOR6,BLUE);
 tft.drawText(10,100,MOTOR7,RED);
 tft.drawText(120,100,MOTOR8,RED);
 tft.drawText(10,130,MOTOR9,RED);
 tft.drawText(120,130,MOTOR10,RED); 
 write_servo(110,110,110,110,110,110,110,110,110,110); 

  }
void position12()
{
  MOTOR1="MOTOR1:120";
  MOTOR2="MOTOR2:120";
  MOTOR3="MOTOR3:120";
  MOTOR4="MOTOR4:120";
  MOTOR5="MOTOR5:120";
  MOTOR6="MOTOR6:120";
  MOTOR7="MOTOR7:120";
  MOTOR8="MOTOR8:120";
  MOTOR9="MOTOR9:120";
  MOTOR10="MOTOR10:120";
  tft.setFont(Terminal6x8);
  tft.drawRectangle(0,0,tft.maxX()-1,tft.maxY()-1,COLOR_WHITE);
 tft.drawText(10,10,MOTOR1,BLUE);
 tft.drawText(120,10,MOTOR2,BLUE);
 tft.drawText(10,40,MOTOR3,BLUE);
 tft.drawText(120,40,MOTOR4,BLUE);
 tft.drawText(10,70,MOTOR5,BLUE);
 tft.drawText(120,70,MOTOR6,BLUE);
 tft.drawText(10,100,MOTOR7,RED);
 tft.drawText(120,100,MOTOR8,RED);
 tft.drawText(10,130,MOTOR9,RED);
 tft.drawText(120,130,MOTOR10,RED); 
 write_servo(120,120,120,120,120,120,120,120,120,120); 

  }
void position13()
{
  MOTOR1="MOTOR1:130";
  MOTOR2="MOTOR2:130";
  MOTOR3="MOTOR3:130";
  MOTOR4="MOTOR4:130";
  MOTOR5="MOTOR5:130";
  MOTOR6="MOTOR6:130";
  MOTOR7="MOTOR7:130";
  MOTOR8="MOTOR8:130";
  MOTOR9="MOTOR9:130";
  MOTOR10="MOTOR10:130";
  tft.setFont(Terminal6x8);
  tft.drawRectangle(0,0,tft.maxX()-1,tft.maxY()-1,COLOR_WHITE);
 tft.drawText(10,10,MOTOR1,BLUE);
 tft.drawText(120,10,MOTOR2,BLUE);
 tft.drawText(10,40,MOTOR3,BLUE);
 tft.drawText(120,40,MOTOR4,BLUE);
 tft.drawText(10,70,MOTOR5,BLUE);
 tft.drawText(120,70,MOTOR6,BLUE);
 tft.drawText(10,100,MOTOR7,RED);
 tft.drawText(120,100,MOTOR8,RED);
 tft.drawText(10,130,MOTOR9,RED);
 tft.drawText(120,130,MOTOR10,RED); 
 write_servo(130,130,130,130,130,130,130,130,130,130); 

  }
void position14()
{
  MOTOR1="MOTOR1:140";
  MOTOR2="MOTOR2:140";
  MOTOR3="MOTOR3:140";
  MOTOR4="MOTOR4:140";
  MOTOR5="MOTOR5:140";
  MOTOR6="MOTOR6:140";
  MOTOR7="MOTOR7:140";
  MOTOR8="MOTOR8:140";
  MOTOR9="MOTOR9:140";
  MOTOR10="MOTOR10:140";
  tft.setFont(Terminal6x8);
  tft.drawRectangle(0,0,tft.maxX()-1,tft.maxY()-1,COLOR_WHITE);
 tft.drawText(10,10,MOTOR1,BLUE);
 tft.drawText(120,10,MOTOR2,BLUE);
 tft.drawText(10,40,MOTOR3,BLUE);
 tft.drawText(120,40,MOTOR4,BLUE);
 tft.drawText(10,70,MOTOR5,BLUE);
 tft.drawText(120,70,MOTOR6,BLUE);
 tft.drawText(10,100,MOTOR7,RED);
 tft.drawText(120,100,MOTOR8,RED);
 tft.drawText(10,130,MOTOR9,RED);
 tft.drawText(120,130,MOTOR10,RED); 
 write_servo(140,140,140,140,140,140,140,140,140,140); 

  }
void position15()
{
  MOTOR1="MOTOR1:150";
  MOTOR2="MOTOR2:150";
  MOTOR3="MOTOR3:150";
  MOTOR4="MOTOR4:150";
  MOTOR5="MOTOR5:150";
  MOTOR6="MOTOR6:150";
  MOTOR7="MOTOR7:150";
  MOTOR8="MOTOR8:150";
  MOTOR9="MOTOR9:150";
  MOTOR10="MOTOR10:150";
  tft.setFont(Terminal6x8);
  tft.drawRectangle(0,0,tft.maxX()-1,tft.maxY()-1,COLOR_WHITE);
 tft.drawText(10,10,MOTOR1,BLUE);
 tft.drawText(120,10,MOTOR2,BLUE);
 tft.drawText(10,40,MOTOR3,BLUE);
 tft.drawText(120,40,MOTOR4,BLUE);
 tft.drawText(10,70,MOTOR5,BLUE);
 tft.drawText(120,70,MOTOR6,BLUE);
 tft.drawText(10,100,MOTOR7,RED);
 tft.drawText(120,100,MOTOR8,RED);
 tft.drawText(10,130,MOTOR9,RED);
 tft.drawText(120,130,MOTOR10,RED); 
 write_servo(150,150,150,150,150,150,150,150,150,150); 

  }
void position16()
{
  MOTOR1="MOTOR1:160";
  MOTOR2="MOTOR2:160";
  MOTOR3="MOTOR3:160";
  MOTOR4="MOTOR4:160";
  MOTOR5="MOTOR5:160";
  MOTOR6="MOTOR6:160";
  MOTOR7="MOTOR7:160";
  MOTOR8="MOTOR8:160";
  MOTOR9="MOTOR9:160";
  MOTOR10="MOTOR10:160";
  tft.setFont(Terminal6x8);
  tft.drawRectangle(0,0,tft.maxX()-1,tft.maxY()-1,COLOR_WHITE);
 tft.drawText(10,10,MOTOR1,BLUE);
 tft.drawText(120,10,MOTOR2,BLUE);
 tft.drawText(10,40,MOTOR3,BLUE);
 tft.drawText(120,40,MOTOR4,BLUE);
 tft.drawText(10,70,MOTOR5,BLUE);
 tft.drawText(120,70,MOTOR6,BLUE);
 tft.drawText(10,100,MOTOR7,RED);
 tft.drawText(120,100,MOTOR8,RED);
 tft.drawText(10,130,MOTOR9,RED);
 tft.drawText(120,130,MOTOR10,RED); 
 write_servo(160,160,160,160,160,160,160,160,160,160); 

  }
void position17()
{
  MOTOR1="MOTOR1:170";
  MOTOR2="MOTOR2:170";
  MOTOR3="MOTOR3:170";
  MOTOR4="MOTOR4:170";
  MOTOR5="MOTOR5:170";
  MOTOR6="MOTOR6:170";
  MOTOR7="MOTOR7:170";
  MOTOR8="MOTOR8:170";
  MOTOR9="MOTOR9:170";
  MOTOR10="MOTOR10:170";
  tft.setFont(Terminal6x8);
  tft.drawRectangle(0,0,tft.maxX()-1,tft.maxY()-1,COLOR_WHITE);
 tft.drawText(10,10,MOTOR1,BLUE);
 tft.drawText(120,10,MOTOR2,BLUE);
 tft.drawText(10,40,MOTOR3,BLUE);
 tft.drawText(120,40,MOTOR4,BLUE);
 tft.drawText(10,70,MOTOR5,BLUE);
 tft.drawText(120,70,MOTOR6,BLUE);
 tft.drawText(10,100,MOTOR7,RED);
 tft.drawText(120,100,MOTOR8,RED);
 tft.drawText(10,130,MOTOR9,RED);
 tft.drawText(120,130,MOTOR10,RED); 
 write_servo(170,170,170,170,170,170,170,170,170,170); 

  }
void position18()
{
  MOTOR1="MOTOR1:180";
  MOTOR2="MOTOR2:180";
  MOTOR3="MOTOR3:180";
  MOTOR4="MOTOR4:180";
  MOTOR5="MOTOR5:180";
  MOTOR6="MOTOR6:180";
  MOTOR7="MOTOR7:180";
  MOTOR8="MOTOR8:180";
  MOTOR9="MOTOR9:180";
  MOTOR10="MOTOR10:180";
  tft.setFont(Terminal6x8);
  tft.drawRectangle(0,0,tft.maxX()-1,tft.maxY()-1,COLOR_WHITE);
 tft.drawText(10,10,MOTOR1,BLUE);
 tft.drawText(120,10,MOTOR2,BLUE);
 tft.drawText(10,40,MOTOR3,BLUE);
 tft.drawText(120,40,MOTOR4,BLUE);
 tft.drawText(10,70,MOTOR5,BLUE);
 tft.drawText(120,70,MOTOR6,BLUE);
 tft.drawText(10,100,MOTOR7,RED);
 tft.drawText(120,100,MOTOR8,RED);
 tft.drawText(10,130,MOTOR9,RED);
 tft.drawText(120,130,MOTOR10,RED); 
 write_servo(180,180,180,180,180,180,180,180,180,180); 

  }
  
