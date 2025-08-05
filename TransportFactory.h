#pragma once
#include "Transport.h"
#include "Motorcycle.h"
#include "Scooter.h"
#include "Car.h"
#include "Bus.h"

class TransportFactory
{
public:
	static Transport* create(int type);
};