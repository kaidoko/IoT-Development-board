#include <Servo.h>

Servo myservo;  // create servo object to control a servo
// twelve servo objects can be created on most boards


void setup() {
  myservo.attach(D8);  // attaches the servo on GIO2 to the servo object
}

void loop() {

  myservo.write(0);    // tell servo to go to position in variable 'pos'
  delay(1000);         // waits 1 second for the servo to reach the position
  myservo.write(180);  // tell servo to go to position in variable 'pos'
  delay(1000);         // waits 1 second for the servo to reach the position
}
