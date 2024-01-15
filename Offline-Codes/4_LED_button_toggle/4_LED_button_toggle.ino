const int led_1 = D5;  // led 1, connected to pin D5 of NodeMCU
const int led_2 = D6;  // led 2, connected to pin D6 of NodeMCU

const int button1 = D3;  // button 1, connected to pin D3 of NodeMCU
const int button2 = D4;  // button 2, connected to pin D4 of NodeMCU

// the setup function runs once when you press reset or power the board
void setup() {
  pinMode(led_1, OUTPUT);  // initialize digital pin led_1 as an output.
  pinMode(led_2, OUTPUT);  // initialize digital pin led_2 as an output.

  pinMode(button1, INPUT);  // initialize digital pin button1 as an input.
  pinMode(button2, INPUT);  // initialize digital pin button2 as an input.
}

// the loop function runs over and over again forever
void loop() {
  if (digitalRead(button1) == LOW) {
    digitalWrite(led_1, !digitalRead(led_1));  // Toggle the state of LED 1
    delay(250);  // Add a small delay to debounce the button
  }

  if (digitalRead(button2) == LOW) {
    digitalWrite(led_2, !digitalRead(led_2));  // Toggle the state of LED 2
    delay(250);  // Add a small delay to debounce the button
  }
}
