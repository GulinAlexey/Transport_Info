#pragma once
#include "Transport.h"

// Самокат
class Scooter : public Transport
{
private:
	int batteryCapacityMaH; // ёмкость аккумулятора (мА*ч)
	int chargingTimeMin; // время полной зарядки аккумулятора (мин)
public:
	Scooter();
	void showInfo() override;
};