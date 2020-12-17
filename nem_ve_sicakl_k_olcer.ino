#include <SimpleDHT.h>

// for DHT11,
//      +: 5V
//      GND: GND
//      DATA: 2
int pinDHT11 = 4;
SimpleDHT11 dht11(pinDHT11);

void setup() {
  Serial.begin(115200);
}

void loop()
{
  // start working...
  Serial.println("=================================");
  Serial.println("Sample DHT11...");

  // read without samples.
  byte temperature = 0;
  byte humidity = 0;
  dht11.read(&temperature, &humidity, NULL);


  Serial.print("Sample OK: ");
  Serial.print((int)temperature); Serial.print(" *C, ");
  Serial.print((int)humidity); Serial.println(" H");

  // DHT11 sampling rate is 1HZ.
  delay(1500);
}
