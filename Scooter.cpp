#include "Scooter.h"

Scooter::Scooter()
{
	this->name = "самокат";
	this->wheelsQty = 2;
	this->maxSpeedKmH = 25;
	this->batteryCapacityMaH = 5000;
	this->chargingTimeMin = 240;
}

void Scooter::showInfo()
{
	Transport::showInfo();
	cout << "Ёмкость аккумулятора: " << this->batteryCapacityMaH << " мА*ч" << endl;
	cout << "Время полной зарядки аккумулятора: " << this->chargingTimeMin  << " мин." << endl;
}