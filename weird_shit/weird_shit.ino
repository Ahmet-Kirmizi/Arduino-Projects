int delayTime = 80;
 int delayLoop = 5000;
int num;

void setup(){
 for(int thisLed = 1;thisLed <= 6; thisLed++){
  digitalWrite(thisLed, HIGH);
  delay(delayTime);
  digitalWrite(thisLed, LOW);
 }
for(int thisLed = 3;thisLed >= 1;thisLed--){
  digitalWrite(thisLed, HIGH);
  delay(delayTime);
  digitalWrite(thisLed, LOW); 
}
for(int thisLed = 2;thisLed <= 4;thisLed++){
  digitalWrite(thisLed, HIGH);
  delay(delayTime);
  digitalWrite(thisLed, LOW);  
}
for(int thisLed = 5;thisLed >= 3;thisLed--){
  digitalWrite(thisLed,HIGH);
  delay(delayTime);
  digitalWrite(thisLed, LOW);  
}
for(int thisLed = 4;thisLed <= 6;thisLed++){
  digitalWrite(thisLed, HIGH);
  delay(delayTime);
  digitalWrite(thisLed, LOW);
}
}
void loop(){
  int num = random(int(5));
  switch(num){
    case 0:
     for(int thisLed = 1;thisLed <= 6; thisLed++){
      digitalWrite(thisLed, HIGH);
      delay(delayTime);
      digitalWrite(thisLed, LOW);      
 }
   break;
   case 1:
    for(int thisLed = 3;thisLed >= 1;thisLed--){
  digitalWrite(thisLed, HIGH);
  delay(delayTime);
  digitalWrite(thisLed, LOW); 
}
  break;
  case 2:
   for(int thisLed = 2;thisLed <= 4;thisLed++){
  digitalWrite(thisLed, HIGH);
  delay(delayTime);
  digitalWrite(thisLed, LOW);  
}
 break;
  case 3:
    for(int thisLed = 5;thisLed >= 3;thisLed--){
  digitalWrite(thisLed,HIGH);
  delay(delayTime);
  digitalWrite(thisLed, LOW);  
}
break;
    case 4:   
     for(int thisLed = 4;thisLed <= 6;thisLed++){
  digitalWrite(thisLed, HIGH);
  delay(delayTime);
  digitalWrite(thisLed, LOW);
}
break;
  }
  delay(delayLoop);
}
