#include<FirebaseESP8266.h>
#include<ESP8266WiFi.h>

#define WIFI_SSID "STARNET_A"
#define WIFI_PASSWORD "kamalanita1@"
#define FIREBASE_AUTH "J7zZWSjFYt1VW2h3Y6SgGz8JW7okCe1qrYYEnEe0"
#define FIREBASE_HOST "channel-relay-control-3a865-default-rtdb.asia-southeast1.firebasedatabase.app/"


 

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
  if (Firebase.getInt(firebaseData, "/relay1")){
    Serial.print("State of relay1:");
    Serial.println(firebaseData.intData());
    
     }
  }

void relay2_controller()
{
  if (Firebase.getInt(firebaseData, "/relay2")){
    Serial.print("State of relay2:");
    Serial.println(firebaseData.intData());
   
    
     }
  }

void relay3_controller()
{
  if (Firebase.getInt(firebaseData, "/relay3")){
    Serial.print("State of relay3:");
    Serial.println(firebaseData.intData());
  
     
     }
  }

void relay4_controller()
{
  if (Firebase.getInt(firebaseData, "/relay4")){
    Serial.print("State of relay4:");
    Serial.println(firebaseData.intData());
    
    
     }
  }

void relay5_controller()
{
  if (Firebase.getInt(firebaseData, "/relay5")){
    Serial.print("State of relay5:");
    Serial.println(firebaseData.intData());
   
    
     }
  }

void relay6_controller()
{
  if (Firebase.getInt(firebaseData, "/relay6")){
    Serial.print("State of relay6:");
    Serial.println(firebaseData.intData());
    
     
     }
  }

void relay7_controller()
{
  if (Firebase.getInt(firebaseData, "/relay7")){
    Serial.print("State of relay7:");
    Serial.println(firebaseData.intData());
   
    
     }
  }

 void relay8_controller()
{
  if (Firebase.getInt(firebaseData, "/relay8")){
    Serial.print("State of relay8:");
    Serial.println(firebaseData.intData());
    
   
     }
  }

 void relay9_controller()
{
  if (Firebase.getInt(firebaseData, "/relay9")){
    Serial.print("State of relay9:");
    Serial.println(firebaseData.intData());
  
     
     }
  }

void relay10_controller()
{
  if (Firebase.getInt(firebaseData, "/relay10")){
    Serial.print("State of relay10:");
    Serial.println(firebaseData.intData());
   
   
     }
  }

void relay11_controller()
{
  if (Firebase.getInt(firebaseData, "/relay11")){
    Serial.print("State of relay11:");
    Serial.println(firebaseData.intData());
   
    
     }
  }

void relay12_controller()
{
  if (Firebase.getInt(firebaseData, "/relay12")){
    Serial.print("State of relay12:");
    Serial.println(firebaseData.intData());
    
     
     }
  }

void relay13_controller()
{
  if (Firebase.getInt(firebaseData, "/relay13")){
    Serial.print("State of relay13:");
    Serial.println(firebaseData.intData());
   
    
     }
  }

void relay14_controller()
{
  if (Firebase.getInt(firebaseData, "/relay14")){
    Serial.print("State of relay14:");
    Serial.println(firebaseData.intData());
    
    
     }
  }

  void relay15_controller()
{
  if (Firebase.getInt(firebaseData, "/relay15")){
    Serial.print("State of relay15:");
    Serial.println(firebaseData.intData());
    
    
     }
  }
  void relay16_controller()
{
  if (Firebase.getInt(firebaseData, "/relay16")){
    Serial.print("State of relay16:");
    Serial.println(firebaseData.intData());
    
    
     }
  }
