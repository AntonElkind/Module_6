#include "battPowered.h"
#include <iostream>

BattPowered::BattPowered() : _bCapacity(0), _avgWorkTime(0)
{
}

BattPowered::BattPowered(int bCap, int avgTime) : _bCapacity(bCap), _avgWorkTime(avgTime)
{
}

void BattPowered::showSpec()
{
	std::cout << "Battery capacity: " << _bCapacity << " mA/H" << std::endl;
	std::cout << "Average working time: " << _avgWorkTime << " Hours" << std::endl;
}
