#pragma once
#include <iostream>
#include <string>

using namespace std;

class Transport
{
protected:
	string name; // наименование
	int wheelsQty; // кол-во колёс
	int maxSpeedKmH; // максимальная скорость (км/ч)
public:
	Transport();
	virtual void showInfo();
};