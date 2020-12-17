int led = 12;
int button = 1;
void setup(){
  pinMode(button,INPUT);
  pinMode(led,OUTPUT);
}
void loop(){
if(digitalRead(button) == HIGH){
digitalWrite(led,LOW);
}
else{
  digitalWrite(led,LOW);  
}

}
