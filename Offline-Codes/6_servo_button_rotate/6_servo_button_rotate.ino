#include <Servo.h>

Servo myservo;  // create servo object to control a servo
// twelve servo objects can be created on most boards

const int leftButton = D3;
const int rightButton = D4;

int buttonStateL, buttonStateR;


void setup() {
  myservo.attach(D8);  // attaches the servo on GIO2 to the servo object
  pinMode(leftButton, INPUT);
  pinMode(rightButton, INPUT);
}

void loop() {
  buttonStateR = digitalRead(rightButton);
  buttonStateL = digitalRead(leftButton);

  if (buttonStateR == LOW) {
    myservo.write(0);  // tell servo to go to position '0'
    delay(800);
  }
  if (buttonStateL == LOW) {
    myservo.write(180);  // tell servo to go to position '180'
    delay(800);
  }
}
