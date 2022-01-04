#pragma once
#include "IElectronics.h"

class BattPowered : virtual public IElectronics
{
public:
	BattPowered();
	BattPowered(int bCap, int avgTime);

	void showSpec() override;

protected:
	int _bCapacity;
	int _avgWorkTime;
};