 const unsigned long EventInterval = 1000;
 unsigned long PreviousTime = 0;

  
void setup(){
  Serial.begin(9600);
  
}

void loop(){
  unsigned long currentTime = millis();
if(currentTime - PreviousTime >= EventInterval){
  Serial.println("ice ice baby");
  PreviousTime = currentTime;
}
  
}
