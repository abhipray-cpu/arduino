#include<FirebaseESP8266.h>
#include<ESP8266WiFi.h>
#define WIFI_SSID "STARNET_A"
#define WIFI_PASSWORD "kamalanita1@"
#define FIREBASE_AUTH "J7zZWSjFYt1VW2h3Y6SgGz8JW7okCe1qrYYEnEe0"
#define FIREBASE_HOST "channel-relay-control-3a865-default-rtdb.asia-southeast1.firebasedatabase.app/"
#define relay1 2
#define relay2 3
#define relay3 4
#define relay4 5
#define relay5 9
#define relay6 10
#define relay7 12
#define relay8 13
#define relay9 14
#define relay10 15
#define relay11 16
#define relay12 17
#define relay13 18
#define relay14 19
 // 2 relays are left and fuck them

FirebaseData firebaseData;
FirebaseJson json;

void setup() {
  Serial.begin(9600);
  WiFi.begin(WIFI_SSID, WIFI_PASSWORD);
  Serial.print("Connecting to Wi-Fi");
  while (WiFi.status() != WL_CONNECTED)
  {
    Serial.print(".");
    delay(300);
  }
   
   Serial.println();
   Serial.print("Connected with IP: ");
   Serial.println(WiFi.localIP());
   Serial.println();

   Firebase.begin(FIREBASE_HOST, FIREBASE_AUTH);
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
   
   
   
 
}

void loop() {
 relay1_controller();
 relay2_controller();
 relay3_controller();
 relay4_controller();
 relay5_controller();
 relay6_controller();
 relay7_controller();
 relay8_controller();
 relay9_controller();
 relay10_controller();
 relay11_controller();
 relay12_controller();
 relay13_controller();
 relay14_controller();
 relay15_controller();
 relay16_controller();

}
// these 16 functions are used to control 16 channels of our relay module
void relay1_controller()
{
  if (Firebase.getString(firebaseData, "/relay1")){
    Serial.print("State of relay1:");
    Serial.println(firebaseData.stringData());
    
     }
  }

void relay2_controller()
{
  if (Firebase.getString(firebaseData, "/relay2")){
    Serial.print("State of relay2:");
    Serial.println(firebaseData.stringData());
    
     }
  }

void relay3_controller()
{
  if (Firebase.getString(firebaseData, "/relay3")){
    Serial.print("State of relay3:");
    Serial.println(firebaseData.stringData());
     
     }
  }

void relay4_controller()
{
  if (Firebase.getString(firebaseData, "/relay4")){
    Serial.print("State of relay4:");
    Serial.println(firebaseData.stringData());
    
     }
  }

void relay5_controller()
{
  if (Firebase.getString(firebaseData, "/relay5")){
    Serial.print("State of relay5:");
    Serial.println(firebaseData.stringData());
    
     }
  }

void relay6_controller()
{
  if (Firebase.getString(firebaseData, "/relay6")){
    Serial.print("State of relay6:");
    Serial.println(firebaseData.stringData());
     
     }
  }

void relay7_controller()
{
  if (Firebase.getString(firebaseData, "/relay7")){
    Serial.print("State of relay7:");
    Serial.println(firebaseData.stringData());
    
     }
  }

 void relay8_controller()
{
  if (Firebase.getString(firebaseData, "/relay8")){
    Serial.print("State of relay8:");
    Serial.println(firebaseData.stringData());
   
     }
  }

 void relay9_controller()
{
  if (Firebase.getString(firebaseData, "/relay9")){
    Serial.print("State of relay9:");
    Serial.println(firebaseData.stringData());
     
     }
  }

void relay10_controller()
{
  if (Firebase.getString(firebaseData, "/relay10")){
    Serial.print("State of relay10:");
    Serial.println(firebaseData.stringData());
   
     }
  }

void relay11_controller()
{
  if (Firebase.getString(firebaseData, "/relay11")){
    Serial.print("State of relay11:");
    Serial.println(firebaseData.stringData());
    
     }
  }

void relay12_controller()
{
  if (Firebase.getString(firebaseData, "/relay12")){
    Serial.print("State of relay12:");
    Serial.println(firebaseData.stringData());
     
     }
  }

void relay13_controller()
{
  if (Firebase.getString(firebaseData, "/relay13")){
    Serial.print("State of relay13:");
    Serial.println(firebaseData.stringData());
    
     }
  }

void relay14_controller()
{
  if (Firebase.getString(firebaseData, "/relay14")){
    Serial.print("State of relay14:");
    Serial.println(firebaseData.stringData());
    
     }
  }

void relay15_controller()
{
  if (Firebase.getString(firebaseData, "/relay15")){
    Serial.print("State of relay15:");
    Serial.println(firebaseData.stringData());
     
     }
  }

void relay16_controller()
{
  if (Firebase.getString(firebaseData, "/relay16")){
    Serial.print("State of relay16:");
    Serial.println(firebaseData.stringData());
     
     }
  }
