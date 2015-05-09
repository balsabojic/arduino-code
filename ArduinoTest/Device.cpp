// 
// 
// 

#include "Device.h"

void DeviceClass::init(int pin)
{
	this->pin = pin;
	pinMode(pin, OUTPUT);
}

void DeviceClass::turnOn() 
{
	digitalWrite(this->pin, HIGH);
}

void DeviceClass::turnOff() 
{
	digitalWrite(this->pin, LOW);
}

float DeviceClass::getValue(String value) {
	return 0;
}

void DeviceClass::setValue(int value) {
	if (value == 1) {
		turnOn();
	}
	else if (value == 0) {
		turnOff();
	}
}

DeviceClass Device;

