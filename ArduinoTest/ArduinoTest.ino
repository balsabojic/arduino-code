#include "Sensor.h"
#include "Device.h"
#include "Temperature.h"
#include "UIPEthernet.h" // Used for Ethernet
#include "Temperature.h";
#include "NetworkConnection.h";
#include "dht.h";


void setup() {
	Serial.begin(9600);

	NetworkConnection.init(); 
}

void loop() 
{
	NetworkConnection.run();
}
