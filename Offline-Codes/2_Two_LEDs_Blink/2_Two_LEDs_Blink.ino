const int led_1 = D5;  // led 1, connected to pin D5 of NodeMCU
const int led_1 = D6;  // led 1, connected to pin D6 of NodeMCU


// the setup function runs once when you press reset or power the board
void setup() {
  pinMode(led_1, OUTPUT);     // initialize digital pin led_1 as an output.
  pinMode(led_2, OUTPUT);     // initialize digital pin led_2 as an output.
}


// the loop function runs over and over again forever
void loop() {
  digitalWrite(led_1, HIGH);  // turn the led_1 on (HIGH is the voltage level)
  delay(1000);                // wait for a second
  digitalWrite(led_1, LOW);   // turn the led_1 off by making the voltage LOW
  delay(1000);                // wait for a second

  digitalWrite(led_2, HIGH);  // turn the led_2 on (HIGH is the voltage level)
  delay(1000);                // wait for a second
  digitalWrite(led_2, LOW);   // turn the led_2 off by making the voltage LOW
  delay(1000);                // wait for a second
}
