#include "TransportFactory.h"

Transport* TransportFactory::create(int type)
{
	switch (type)
	{
	case 0: // Мотоцикл
		return new Motorcycle();
	case 1: // Самокат
		return new Scooter();
	case 2: // Автомобиль
		return new Car();
	case 3: // Автобус
		return new Bus();
	default: // Неизвестный тип
		return NULL;
	}
}