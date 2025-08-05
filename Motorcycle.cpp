#include "Motorcycle.h"

Motorcycle::Motorcycle()
{
	this->name = "мотоцикл";
	this->wheelsQty = 2;
	this->maxSpeedKmH = 200;
	this->isSidecar = false;
}

void Motorcycle::showInfo()
{
	Transport::showInfo();
	cout << "Наличие коляски: ";
	if (this->isSidecar)
		cout << "есть" << endl;
	else
		cout << "нет" << endl;
}