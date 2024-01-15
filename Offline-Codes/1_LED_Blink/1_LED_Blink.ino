const int led_1 = D5;  // led 1, connected to pin D5 of 
const int led_2 = D6;
// const int button_1 = 

// the setup function runs once when you press reset or power the board
void setup() {
  // declare led_1as OUTPUT
  pinMode(led_1, OUTPUT);
  pinMode(led_2, OUTPUT);
}


// the loop function runs over and over again forever
void loop() {
  digitalWrite(led_1, HIGH);  // turn the led_1 on (HIGH is the voltage level)
  digitalWrite(led_2, HIGH);  // turn the led_1 on (HIGH is the voltage level)
  delay(400);                // wait for a second
  digitalWrite(led_1, LOW);   // turn the LED off by making the voltage LOW
  digitalWrite(led_2, LOW);  // turn the led_1 on (HIGH is the voltage level
  delay(400);                // wait for a second

  digitalWrite(led_1, HIGH);  // turn the led_1 on (HIGH is the voltage level)
  delay(400);
  digitalWrite(led_1, LOW); 
  delay(400);

  digitalWrite(led_2, HIGH);  // turn the led_1 on (HIGH is the voltage level)
  delay(400);
  digitalWrite(led_2, LOW); 
  delay(400);
}
