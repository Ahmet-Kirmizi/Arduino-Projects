int Timing = 500;

void setup(){
  Serial.begin(9600);
}
void loop(){
for(int num = 10; num >= 1; num--){
Serial.println(num);
delay(Timing);
} 
Serial.println();
 
}
