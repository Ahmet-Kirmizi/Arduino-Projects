#include<NewPing.h>
#define TRIGGER_PIN 12
#define ECHO_PIN 11
#define MAX_DISTANCE 800
int led = 13;

NewPing sonar(TRIGGER_PIN, ECHO_PIN, MAX_DISTANCE);

void setup() {
  pinMode(led, OUTPUT);
  Serial.begin(115200);
  pinMode(ECHO_PIN,INPUT);
  pinMode(TRIGGER_PIN,OUTPUT);
}

void loop() {
  delay(50);
  Serial.print("ping; ")
  ;  Serial.print(sonar.ping_cm());
  Serial.println("cm")

  ;

if(analogRead(Newping) <= 30){
  digitalWrite(led,HIGH);
}
else{
digitalWrite(led,LOW);
}
}
