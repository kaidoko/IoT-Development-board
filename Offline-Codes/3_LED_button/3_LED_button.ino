const int led_1 = D5;  // led 1, connected to pin D5 of NodeMCU
const int led_2 = D6;  // led 1, connected to pin D6 of NodeMCU

const int button1 = D3;  // button 1, connected to pin D3 of NodeMCU
const int button2 = D4;  // button 1, connected to pin D3 of NodeMCU

int buttonState1;
int buttonState2;

// the setup function runs once when you press reset or power the board
void setup() {
  pinMode(led_1, OUTPUT);  // initialize digital pin led_1 as an output.
  pinMode(led_2, OUTPUT);  // initialize digital pin led_2 as an output.

  pinMode(button1, INPUT);  // initialize digital pin button1 as an output.
  pinMode(button2, INPUT);  // initialize digital pin button2 as an output.
}


// the loop function runs over and over again forever
void loop() {
  buttonState1 = digitalRead(button1);  // reads HIGH or LOW on button pin
  buttonState2 = digitalRead(button1);  // reads HIGH or LOW on button pin

  if (buttonState1 == LOW) {
    digitalWrite(led_1, HIGH);  // turn the led_1 on (HIGH is the voltage level)
  } else {
    digitalWrite(led_1, LOW);  // turn the led_1 off by making the voltage LOW
  }

  // same logic for other button
  if (buttonState2 == LOW) {
    digitalWrite(led_2, HIGH);  // turn the led_1 on (HIGH is the voltage level)
  } else {
    digitalWrite(led_2, LOW);  // turn the led_1 off by making the voltage LOW
  }
}
