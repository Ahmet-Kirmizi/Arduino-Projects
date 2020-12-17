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
  if (digitalRead(button) == LOW) {
    digitalWrite(led_red, HIGH);
    delay(200);
    digitalWrite(led_green2, HIGH);
    delay(1000);
    digitalWrite(led_yellow2, HIGH);
    delay(400);
    digitalWrite(led_red2, HIGH);
    delay(100);
    digitalWrite(led_green, LOW);
    delay(200);
    digitalWrite(led_yellow, LOW);
    delay(200);
    digitalWrite(led_red, LOW);
    delay(200);
    digitalWrite(led_yellow, HIGH);
    delay(400);
    digitalWrite(led_red, LOW);
    delay(200);
    digitalWrite(led_red, HIGH);
    delay(1000);

  }

  else {
    digitalWrite(led_red, HIGH);
    digitalWrite(led_yellow, HIGH);
    digitalWrite(led_green, HIGH);
    digitalWrite(led_red2, HIGH);
    digitalWrite(led_yellow2, HIGH);
    digitalWrite(led_green2, HIGH);
  }

}
