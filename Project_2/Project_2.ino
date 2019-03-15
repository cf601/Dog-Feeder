#define BLYNK_PRINT Serial


#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

// You should get Auth Token in the Blynk App.
// Go to the Project Settings (nut icon).
char auth[] = "15a8ca95f8a54b30b9930391f6df4e37";

// Your WiFi credentials.
// Set password to "" for open networks.
char ssid[] = "IXD-AA1A-DEV";
char pass[] = "ixd4life!";

void setup()
{
  // Debug console
  Serial.begin(9600);

  Blynk.begin(auth, ssid, pass);
  // You can also specify server:
  //Blynk.begin(auth, ssid, pass, "blynk-cloud.com", 80);
  //Blynk.begin(auth, ssid, pass, IPAddress(192,168,1,100), 8080);

  pinMode(2,OUTPUT);
}

BLYNK_WRITE(V0){
  int buttonState = param.asInt();
    digitalWrite(2,buttonState);
    delay(1000);

//  if (param.asInt() == 0){
  //    digitalWrite(2,LOW);
   //   delay(3000);
   // } 
 
  
  }

void loop()
{
  Blynk.run();
}
