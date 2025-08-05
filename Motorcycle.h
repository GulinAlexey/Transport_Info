#pragma once
#include "Transport.h"

// Мотоцикл
class Motorcycle : public Transport
{
private:
	bool isSidecar; // наличие коляски
public:
	Motorcycle();
	void showInfo() override;
};