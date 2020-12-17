#define <Servo.h>   //first we kinda upload(inclued) the module on to our programe
Servo servo;       // ww create a servo object :) 

void setup(){
  servo.attach(12);  // we define attach pin to 12 (there is no specific reason)
  servo.write(0);   //we attach the pin 0 to write
  delay(2000);     // 2 second delay
}

void loop();
servo.write(90);   // 90 degree turn
delay(1000);      // 1 second delay
servo.write(0);  // so it basically starts from 0 degress and moves to 90 degrees
delay(1000);    // one second delay
