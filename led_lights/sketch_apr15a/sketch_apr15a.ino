int timer = 80;

void setup() {
  for (int thisPin = 3; thisPin < 9; thisPin++) {
    pinMode(thisPin, OUTPUT);
  }
}

void loop() {
  for (int thisPin = 3; thisPin < 9; thisPin++) {
    digitalWrite(thisPin, HIGH);
    delay(timer);
    digitalWrite(thisPin, LOW);
  }


}
