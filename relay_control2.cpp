//Room details project
/*We will be measuring following
1)Humidity sound1 violet
2)Room temp sound2 yellow 
3)Heat index sound3 green
4)Flame detection sound4 red
5)Light sensor white
6)Heart rate measure sound5 blue*/
#include<Arduino.h>
#define relay1 13 //room lights
#define relay2 12 //water dispenser
#define relay3 11 //humidity control
#define relay4 10 //temperature control
#define red 2
#define green 3
#define blue 4
#define humid 6
#define aag 7
#define roshni 8
#define dil 9
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
digitalWrite(relay,LOW);
Serial.begin(9600);
}

void loop()
{
    humidity();
    flame();
    light();
    heart();
}

void humidity()//this function will be used for humidity room temperature and heat index
{

}

void flame()//will be used for flame
{

}

void light()//will be used for room lighting
{

}

void heart()//measures the heart rate 
{

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

    }
    if(option == 2)
    {

    }
     if(option == 3)
     {

     }
    if(option == 4)
    {

    }
     if(option == 5)
     {

     }
    if(option == 6)
    {

    }
     if(option == 7)
     {

     }
    if(option == 8)
    {

    }
     if(option == 9)
     {

     }
    
}
void control_lights(int state)
{

}
void contorl_flame(int state)
{

}
void control_temperature(int state)
{

}

void control_humidity(int state)
{

}