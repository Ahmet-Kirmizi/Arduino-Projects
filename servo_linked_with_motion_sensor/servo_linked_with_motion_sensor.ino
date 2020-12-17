#include <Servo.h>
Servo servo;
#include<NewPing.h>
const int  TRIGGER_PIN = 12;
const int ECHO_PIN = 2;
#define MAX_DISTANCE 200
const int servoPin = 11;
NewPing sonar(TRIGGER_PIN,MAX_DISTANCE,ECHO_PIN);

void setup(){
  servo.attach(servoPin);
  Serial.begin(9600);
  
}

void loop(){
int cm =sonar.ping_cm();
Serial.println(cm);
int angle = map(cm, 2, 15, 15, 165); 
servo.write(angle);


delay(60);
  
}
