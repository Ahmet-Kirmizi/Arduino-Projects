int led_red = 13;
int led_green = 12;
int led_yellow = 8;
int led_red2 = 7;
int led_green2 = 4;
int led_yellow2 = 2;
int button = 1;


void setup() {

  pinMode(led_red, OUTPUT);
  pinMode(led_green, OUTPUT);
  pinMode(led_yellow, OUTPUT);
  pinMode(led_red2, OUTPUT);
  pinMode(led_green2, OUTPUT);
  pinMode(led_yellow2, OUTPUT);
  pinMode(button, INPUT);
}
void loop() {
  if (digitalRead(button) == HIGH) {
    digitalWrite(led_red2, HIGH);
  }
  else {
    digitalWrite(led_red2, LOW);
  }


}
