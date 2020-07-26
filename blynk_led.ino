#define BLYNK_PRINT Serial
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>
#include <Servo.h>

char auth[] = "ymrLl6AeDB_AKFxJ8tKTWKRMoS-BU1El";
char ssid[] = "vivo 1814";
char pass[] = "FARREL GANTENG";

Servo gerak_servo;

BLYNK_WRITE(V1){
  
  gerak_servo.write(param.asInt());
}

void setup() {
  Serial.begin(9600);

  gerak_servo.attach(2);

 Blynk.begin(auth,ssid,pass);

}

void loop() {
  Blynk.run();
}
