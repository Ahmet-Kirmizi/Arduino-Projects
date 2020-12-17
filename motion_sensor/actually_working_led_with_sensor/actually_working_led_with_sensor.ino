#define Trigger_pin 12
#define Echo_pin 11
int Light = 9;


void setup() {
  Serial.begin(115200);
  pinMode(Echo_pin, INPUT);
  pinMode(Trigger_pin, OUTPUT);
  pinMode(Light, OUTPUT);
}
void loop() {

  int duration, distance;
  digitalWrite(Trigger_pin, HIGH);
  delayMicroseconds(500);
  digitalWrite(Trigger_pin, LOW);
  duration = pulseIn(Echo_pin, HIGH);
  distance = (duration / 2) / 29.1;

  if (distance < 13)
  {
Light();
  }
  Serial.print(distance);
  Serial.println("cm");
  delay(500);
}
void Light();
  digitalWrite(Light, HIGH);
  delay(15000);
  digitalWrite(Light, LOW);

}
