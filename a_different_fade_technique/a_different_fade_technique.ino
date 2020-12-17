int led_red = 9;
int led_yellow = 11;
int led_green = 5;
int fadeAmount_1 = 5;
int fadeAmount_2 = 5;
int fadeAmount_3 = 5;

int brightness_1 = 0;
int brightness_2 = 100;
int brightness_3 = 300;

void setup(){
  pinMode(led_red, OUTPUT);
  pinMode(led_yellow, OUTPUT);
  pinMode(led_green, OUTPUT);
}

void loop(){
  analogWrite(led_red, brightness_1);
  analogWrite(led_yellow, brightness_2);
  analogWrite(led_green, brightness_3);

brightness_1 = brightness_1 + fadeAmount_1;
brightness_2 = brightness_2 + fadeAmount_2;
brightness_3 = brightness_3 + fadeAmount_3;

  if(brightness_1 <= 0 || brightness_1 >= 255){
    fadeAmount_1 =-fadeAmount_1;
  }else if(brightness_2 <= 0 || brightness_2 >= 255){
    fadeAmount_2 = -fadeAmount_2;
  } else if(brightness_3 <= 0 || brightness_3 >= 255){
    fadeAmount_3 = -fadeAmount_3;
  }
  delay(30);
}
    
   
  
 
  
   

  
