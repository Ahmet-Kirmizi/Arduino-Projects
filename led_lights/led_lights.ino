int led_red = 3;
int led_green = 11; 
int led_yellow = 10;
int led_red2 = 9;
int led_green2 = 6;
int led_yellow2 = 5;
int button = 1;

void setup(){

 pinMode(led_red,OUTPUT);
 pinMode(led_yellow,OUTPUT);
 pinMode(led_green,OUTPUT);
 pinMode(led_red2,OUTPUT);
 pinMode(led_green2,OUTPUT);
 pinMode(led_yellow2,OUTPUT);
 pinMode(button,INPUT);
 
}

void loop(){
  if(analogRead(button) == 255){
analogWrite(led_red, 255);
delay(50);
analogWrite(led_red, 200);
delay(50);
analogWrite(led_red, 150);
delay(50);
analogWrite(led_red, 100);
delay(50);
analogWrite(led_red, 50);
delay(50);
analogWrite(led_red, 0);
delay(50);
analogWrite(led_yellow, 255);
delay(50);
analogWrite(led_yellow, 200);
delay(50);
analogWrite(led_yellow, 150);
delay(50);
analogWrite(led_yellow, 100);
delay(50);
analogWrite(led_yellow, 50);
delay(50);
analogWrite(led_yellow, 0);
delay(50);
analogWrite(led_green, 255);
delay(50);
analogWrite(led_green, 200);
delay(50);
analogWrite(led_green, 150);
delay(50);
analogWrite(led_green, 100);
delay(50);
analogWrite(led_green, 50);
delay(50);
analogWrite(led_green, 0);
delay(50);
analogWrite(led_red2, 255);
delay(50);
analogWrite(led_red2, 200);
delay(50);
analogWrite(led_red2, 150);
delay(50);
analogWrite(led_red2, 100);
delay(50);
analogWrite(led_red2, 50);
delay(50);
analogWrite(led_red2, 0);
delay(50);
analogWrite(led_yellow2, 255);
delay(50);
analogWrite(led_yellow2, 200);
delay(50);
analogWrite(led_yellow2, 150);
delay(50);
analogWrite(led_yellow2, 100);
delay(50);
analogWrite(led_yellow2, 50);
delay(50);
analogWrite(led_yellow2, 0);
delay(50);
analogWrite(led_green2, 255);
delay(50);
analogWrite(led_green2, 200);
delay(50);
analogWrite(led_green2, 150);
delay(50);
analogWrite(led_green2, 100);
delay(50);
analogWrite(led_green2, 50);
delay(50);
analogWrite(led_green2, 0);
delay(50);
  }
else{
analogWrite(led_red, 0);
analogWrite(led_yellow, 0);
analogWrite(led_green, 0);
analogWrite(led_red2, 0);
analogWrite(led_yellow2, 0);
analogWrite(led_green2, 0);
  
}
  
}
