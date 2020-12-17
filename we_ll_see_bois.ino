int led_red = 13;
int led_green = 12;
int led_yellow = 11;
int led_red2 = 10;
int led_green2 = 9;
int led_yellow2 = 8;
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
    digitalWrite(led_red, LOW);
    delay(1000);
    digitalWrite(led_green2, HIGH);
    delay(1000);
    digitalWrite(led_yellow2, HIGH);
    delay(200);
    digitalWrite(led_red2,HIGH);
    delay(







  }
