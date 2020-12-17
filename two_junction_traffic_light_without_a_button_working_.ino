int led_red = 13;
int led_yellow = 12;
int led_green = 11;
int led_red2 = 9;
int led_yellow2 = 8;
int led_green2 = 7;

void setup() {
  pinMode(led_red, OUTPUT);
  pinMode(led_yellow, OUTPUT);
  pinMode(led_green, OUTPUT);
  pinMode(led_red2, OUTPUT);
  pinMode(led_yellow2, OUTPUT);
  pinMode(led_green2, OUTPUT);
}
void loop() {
  changeLights();
  delay(15000);
}

void changeLights() {
  digitalWrite(led_green, LOW);
  digitalWrite(led_yellow, HIGH);
  digitalWrite(led_yellow2, HIGH);
  delay(5000);
  // it  will turn both of the yellow led's on

 digitalWrite(led_yellow, LOW);
 digitalWrite(led_red, HIGH);
 digitalWrite(led_yellow2, LOW);
 digitalWrite(led_red2, LOW);
 digitalWrite(led_green2, HIGH);
 delay(5000);
 // this will turn on the red led in the first traffic light close both of the yellow led's as well as the second red one after this green led in second light will turn on
 
 digitalWrite(led_yellow, HIGH);
 digitalWrite(led_yellow2, HIGH);
 digitalWrite(led_green2,LOW);
 delay(5000);
 // turns both yellow led' on again and shuts down the green led in second light
 digitalWrite(led_yellow,LOW);
 digitalWrite(led_green,HIGH);
 digitalWrite(led_red,LOW);
 digitalWrite(led_yellow2,LOW);
 digitalWrite(led_red2,HIGH);
delay(5000);


}
