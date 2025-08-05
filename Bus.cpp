#include "Bus.h"

Bus::Bus()
{
	this->name = "автобус";
	this->wheelsQty = 6;
	this->maxSpeedKmH = 100;
	this->maxPassengersQty = 20;
}

void Bus::showInfo()
{
	Transport::showInfo();
	cout << "ћаксимальное количество пассажиров: " << this->maxPassengersQty << " чел." << endl;
}