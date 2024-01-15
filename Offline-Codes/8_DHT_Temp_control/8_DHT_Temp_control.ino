#include <DFRobot_DHT11.h>  //include DHT library
DFRobot_DHT11 DHT;

#define DHT11_PIN D7  // DHT data pin is connected to pin D7 of nodeMCU

int temp; // variable to save temperature value

void setup() {
  Serial.begin(9600);  // set serial baudrate to 9600
}

void loop() {
  DHT.read(DHT11_PIN);            // read data from DHT
  temp = DHT.temperature;         // get and save the temperature value to 'temp' variable
  Serial.print("temp:");          
  Serial.print(temp);  //prints temperature value on Serial Monitor
  if(temp < 28){
    Serial.println("!...WARNING TEMPERATURE IS MORE THAN 28 DEGREES...!");
  }
  delay(500);                    // addded some delay to make the printing stable
}