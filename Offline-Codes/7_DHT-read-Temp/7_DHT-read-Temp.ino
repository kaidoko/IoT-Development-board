#include <DFRobot_DHT11.h>  //include DHT library
DFRobot_DHT11 DHT;

#define DHT11_PIN D7  // DHT data pin is connected to pin D7 of nodeMCU


void setup() {
  Serial.begin(9600);  // set serial baudrate to 9600
}

void loop() {
  DHT.read(DHT11_PIN);            // read data from DHT
  Serial.print("temp:");
  Serial.print(DHT.temperature);  //prints temperature value on Serial Monitor
  Serial.print("  humi:");
  Serial.println(DHT.humidity);   // prints humidity value on Serial Monitor
  delay(1000);                    // addded some delay to make the printing stable
}