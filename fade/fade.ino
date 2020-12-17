int red_led = 6;
void setup() {
  pinMode(red_led,OUTPUT);
}

void loop() {
  analogWrite(red_led, 255);
  delay(500);
  analogWrite(red_led, 200);
  delay(500);
  analogWrite(red_led, 150);
  delay(500);
  analogWrite(red_led, 100);
  delay(500);
  analogWrite(red_led, 50);
  delay(500);
  analogWrite(red_led, 0);
  delay(500); 
  
} 
