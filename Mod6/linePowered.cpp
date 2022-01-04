#include "linePowered.h"
#include <iostream>

LinePowered::LinePowered() : _voltage(0), _power(0)
{
}

LinePowered::LinePowered(int voltage, int power) : _voltage(voltage), _power(power)
{
}

void LinePowered::showSpec()
{
	std::cout << "Input voltage: " << _voltage << " V" << std::endl;
	std::cout << "Power supply: " << _power << " W" << std::endl;
}
