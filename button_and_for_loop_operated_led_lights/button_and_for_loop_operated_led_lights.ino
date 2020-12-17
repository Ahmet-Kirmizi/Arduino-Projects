int button = 1;
int delayTime = 100;

void setup(){
  pinMode(button, INPUT);
  pinMode(thisPin, OUTPUT);
  if(digitalRead(button) == HIGH){
    for(int thisPin = 1;thisPin <= 8;thisPin++){
      digitalWrite(thisPin, HIGH);
      delay(delayTime);
    }
  }
 else{
  for(int thisPin = 8;thisPin >= 1;thisPin--){
    digitalWrite(thisPin, LOW);
    delay(delayTime);
  }
   }
  

void loop(){
  if(digitalRead(button) == HIGH){
    for(int thisPin = 1;thisPin <= 8;thisPin++){
      digitalWrite(thisPin, HIGH);
      delay(delayTime);
    }
  }
else{
  for(int thisPin = 8;thisPin >= 1;thisPin--){
    digitalWrite(thisPin, LOW);
    delay(delayTime);
  }
  
}
}

}
