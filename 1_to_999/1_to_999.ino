 int delayTime = 100;

void setup(){
  for(int numberSeries = 1;numberSeries <= 999;numberSeries++){
    Serial.begin(9600);  
  }  
}

void loop(){
  for(int numberSeries = 1;numberSeries <= 999;numberSeries++){
    Serial.println(numberSeries);
delay(delayTime);

 } 
 Serial.println(); 
for(int numberSeries = 999;numberSeries >= 1;numberSeries--){
 Serial.println(numberSeries);
 delay(delayTime);

}
Serial.println();
}
