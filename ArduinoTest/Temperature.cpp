// 
// 
// 

#include "Temperature.h"
#include <dht.h>

// Pin for the temperature/humidity

#define DHT11_PIN A3
#define DHTTYPE DHT11   // DHT 11 

dht DHT;

void TemperatureClass::init(uint8_t pin)
{
	this->pin = pin;
}

float TemperatureClass::getHumidity() 
{
	int chk = DHT.read11(this->pin);
	return DHT.humidity;
}

float TemperatureClass::getTemperature() 
{
	int chk = DHT.read11(this->pin);
	return DHT.temperature;
}

float TemperatureClass::getValue(String value) {
	float result;
	if (value.equals("temperature")) {
		result = getTemperature();
	}
	else if (value.equals("humidity")) {
		result = getHumidity();
	}
	return result;
}

void TemperatureClass::setValue(int value) {	
}

TemperatureClass Temperature;

