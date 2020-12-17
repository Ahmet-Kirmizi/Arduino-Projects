#include <Servo.h>
#include <NewPing.h>
const int servoPin = 11;
const int TRIGGER_PIN = 12;
const int ECHO_PIN = 13;
#define MAX_DISTANCE 200
Servo servo;
NewPing sonar(MAX_DISTANCE,TRIGGER_PIN,ECHO_PIN);

void setup(){
servo.attach(servoPin);
Serial.begin(9600);
}

void loop(){
int cm = sonar.ping_cm();
Serial.println(cm);
int angle = map(cm, 2, 15, 15, 165);
servo.write(angle);

 delay(60);
}
