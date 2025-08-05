#include "Transport.h"

Transport::Transport()
{
	this->name = "Некий транспорт";
	this->wheelsQty = 0;
	this->maxSpeedKmH = 0;
}

void Transport::showInfo()
{
	cout << "Наименование транспорта: " << this->name << endl;
	cout << "Количество колёс: " << this->wheelsQty << " шт." << endl;
	cout << "Максимальная скорость: " << this->maxSpeedKmH << " км/ч" << endl;
}