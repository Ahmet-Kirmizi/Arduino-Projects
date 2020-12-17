int delayTime = 200;
void setup(){
  for(int led_lights = 1;led_lights <= 8;led_lights++){
    pinMode(led_lights, OUTPUT);      
  }
void loop(){
for(int led_lights =1;led_lights <= 8;led_lights++){
  digitalWrite(led_lights, HIGH);
  delay(delayTime);    
}
 for(int led_lights = 999;led_lights >= 1;led_lights--){
  digitalWrite(led_lights, LOW);
  delay(delayTime); 
 }
}



}
