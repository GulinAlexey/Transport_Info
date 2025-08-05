#pragma once
#include "Transport.h"

// Автомобиль
class Car : public Transport
{
public:
	Car();
	void showInfo() override;
};