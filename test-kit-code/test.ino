#include <DFRobot_DHT11.h>
#define DHT11_PIN D7
#include <Servo.h>

Servo myservo;  // create servo object to control a servo
DFRobot_DHT11 DHT;

// twelve servo objects can be created on most boards

const int led1 = D5, led2 = D6;
const int button1 = D3, button2 = D4;

void setup() {
  Serial.begin(115200);
  myservo.attach(D8);  // attaches the servo on GIO2 to the servo object
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(button1, INPUT);
  pinMode(button2, INPUT);
}

void loop() {
// test button 1
  if (digitalRead(button1) == LOW) {

    // test servo
    myservo.write(0);

    // test dht
    DHT.read(DHT11_PIN);
    Serial.print("temp:");
    Serial.println(DHT.temperature);

    // test led 1
    digitalWrite(led1, HIGH);
    delay(300);
    digitalWrite(led1, LOW);
  }

  // test button 2
  if (digitalRead(button2) == LOW) {

    // test servo
    myservo.write(180);

    // test DHT
    DHT.read(DHT11_PIN);
    Serial.print("temp:");
    Serial.println(DHT.temperature);

    // test led 2
    digitalWrite(led2, HIGH);
    delay(300);
    digitalWrite(led2, LOW);
  }
}
