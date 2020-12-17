int green_led = 13;
int yellow_led = 4;     //first we have to define our term(idk what else to call them lol :) )
int red_led = 2;
int button = 1;

void setup() {                        //then we have to tell the system if our button or led is either an output or an input
  pinMode(green_led, OUTPUT);
  pinMode(yellow_led, OUTPUT);       // im basicaly doing this to get better at using buttons and etc.
  pinMode(red_led, OUTPUT);
  pinMode(button, INPUT);
}
void loop() {
  if (digitalRead(button) == HIGH) {  // the only thing im not sure in this part is to whether to write digitalWrite(green_led, LOW) and etc.  to turn the led off cos i will define the else term whivh will basically tell the system to not to turn on the led s if i dont press the button
    digitalWrite(green_led, LOW);
    delay(1000);
    digitalWrite(green_led, HIGH);
    delay(200);

  }
  else {
    digitalWrite(green_led, LOW);
  }

}
