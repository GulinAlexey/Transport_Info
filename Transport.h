#pragma once

class Transport
{
private:
	int wheelsQty; // кол-во колёс
	int maxSpeedKmH; // максимальная скорость (км/ч)
public:
	Transport();
	virtual void showInfo();
};