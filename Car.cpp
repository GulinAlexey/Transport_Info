#include "Car.h"

Car::Car()
{
	this->name = "автомобиль";
	this->wheelsQty = 4;
	this->maxSpeedKmH = 150;
}

void Car::showInfo()
{
	Transport::showInfo();
}