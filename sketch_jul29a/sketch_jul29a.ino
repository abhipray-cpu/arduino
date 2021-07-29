#define relay1 53
#define relay2 52
#define relay3 51
#define relay4 49
#define relay5 48
#define relay6 47
#define relay7 46
#define relay8 45
#define relay9 44
#define relay10 43
#define relay11 42
#define relay12 41
#define relay13 40
#define relay14 39
#define relay15 38
#define relay16 37

void setup()
{
  Serial.begin(9600);
  pinMode(relay1,OUTPUT);
  pinMode(relay2,OUTPUT);
  pinMode(relay3,OUTPUT);
  pinMode(relay4,OUTPUT);
  pinMode(relay5,OUTPUT);
  pinMode(relay6,OUTPUT);
  pinMode(relay7,OUTPUT);
  pinMode(relay8,OUTPUT);
  pinMode(relay9,OUTPUT);
  pinMode(relay10,OUTPUT);
  pinMode(relay11,OUTPUT);
  pinMode(relay12,OUTPUT);
  pinMode(relay13,OUTPUT);
  pinMode(relay14,OUTPUT);
  pinMode(relay15,OUTPUT);
  pinMode(relay16,OUTPUT);
  digitalWrite(relay1,HIGH);
  digitalWrite(relay2,HIGH);
  digitalWrite(relay3,HIGH);
  digitalWrite(relay4,HIGH);
  digitalWrite(relay5,HIGH);
  digitalWrite(relay6,HIGH);
  digitalWrite(relay7,HIGH);
  digitalWrite(relay8,HIGH);
  digitalWrite(relay9,HIGH);
  digitalWrite(relay10,HIGH);
  digitalWrite(relay11,HIGH);
  digitalWrite(relay12,HIGH);
  digitalWrite(relay13,HIGH);
  digitalWrite(relay14,HIGH);
  digitalWrite(relay15,HIGH);
  digitalWrite(relay16,HIGH);
  
  }

void loop()
{
  for(int i=0;i<180;i++)
  {
    digitalWrite(relay1,LOW);
    
    digitalWrite(relay2,HIGH);
  
    digitalWrite(relay3,LOW);

    digitalWrite(relay4,HIGH);
 
    digitalWrite(relay5,LOW);
   
    digitalWrite(relay6,HIGH);
 
    digitalWrite(relay7,LOW);
 
    digitalWrite(relay8,HIGH);
  
    digitalWrite(relay9,LOW);
   
    digitalWrite(relay10,HIGH);
  
    digitalWrite(relay11,LOW);
   
    digitalWrite(relay12,HIGH);
 
    digitalWrite(relay13,LOW);

    digitalWrite(relay14,HIGH);

    digitalWrite(relay15,LOW);
    
    digitalWrite(relay16,HIGH);

    digitalWrite(relay1,LOW);
    delay(100);
    digitalWrite(relay2,HIGH);

    digitalWrite(relay3,LOW);

    digitalWrite(relay4,HIGH);

    digitalWrite(relay5,LOW);

    digitalWrite(relay6,HIGH);
   
    digitalWrite(relay7,LOW);

    digitalWrite(relay8,HIGH);

    digitalWrite(relay9,LOW);
   
    digitalWrite(relay10,HIGH);
    
    digitalWrite(relay11,LOW);
    
    digitalWrite(relay12,HIGH);
  
    digitalWrite(relay13,LOW);
    
    digitalWrite(relay14,HIGH);
   
    digitalWrite(relay15,LOW);
   
    digitalWrite(relay16,HIGH);
   
    }
  }
