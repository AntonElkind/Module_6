#pragma once
#include "IElectronics.h"

class LinePowered : virtual public IElectronics
{
public:
	LinePowered();
	LinePowered(int voltage, int power);

	void showSpec() override;

protected:
	int _voltage;
	int _power;
};