#define Trigger_Pin 3
#define Echo_Pin 2

long duration;  //stores time between sending and recieving sound waves
int distance;  //The distance variable is used to store the calculated distance.

void setup(){
  //setting them whether as inputs or outputs.  
  pinMode(Echo_Pin, INPUT);
  pinMode(Trigger_Pin, OUTPUT); 

  Serial.begin(9600);   //setting up the serial monitor by settingit up to 9600  brauds.
}

void loop(){
  digitalWrite(Trigger_Pin, LOW);      // basically we will turn off the trigger pin.
  delayMicroseconds(5);

  digitalWrite(Trigger_Pin, HIGH);
  delayMicroseconds(10);
  digitalWrite(Trigger_Pin, LOW);

  duration = pulseIn(Echo_Pin, HIGH);
  distance =duration*0.0329/2

  Serial.print("distance = ");
  Serial.print(distance);
  Serial.println("cm");

  delay(50);


  
}
