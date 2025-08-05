#pragma once
#include "Transport.h"

// Автобус
class Bus : public Transport
{
private:
	int maxPassengersQty; // макс. кол-во пассажиров
public:
	Bus();
	void showInfo() override;
};