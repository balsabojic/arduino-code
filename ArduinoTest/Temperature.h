// Temperature.h

#ifndef _TEMPERATURE_h
#define _TEMPERATURE_h

#if defined(ARDUINO) && ARDUINO >= 100
	#include "Arduino.h"
#else
	#include "WProgram.h"
#endif

#include "Sensor.h"

class TemperatureClass : SensorClass
{
 protected:
	 uint8_t pin;
 public:
	void init(uint8_t pin);
	float getTemperature();
	float getHumidity();
	float getValue(String value);
	void setValue(int value);
};

extern TemperatureClass Temperature;

#endif

