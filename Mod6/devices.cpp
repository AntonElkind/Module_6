#include "devices.h"
#include <iostream>

Player::Player() : _memory(0)
{
}

Player::Player(int bCap, int avgTime, int memory) : BattPowered(bCap, avgTime), _memory(memory)
{
}

void Player::showSpec()
{
	std::cout << "Player spec:" << std::endl;
	BattPowered::showSpec();
	std::cout << "Memory size : " << _memory << " G" << std::endl;
}


LoudSpeaker::LoudSpeaker() : _soundPower(0)
{
}

LoudSpeaker::LoudSpeaker(int bCap, int avgTime, int soundPower) : BattPowered(bCap, avgTime), _soundPower(soundPower)
{
}

void LoudSpeaker::showSpec()
{
	std::cout << "Loudspeaker spec:" << std::endl;
	BattPowered::showSpec();
	std::cout << "Sound power : " << _soundPower << " W" << std::endl;
}

WashMachine::WashMachine() : _inCapacity(0)
{
}

WashMachine::WashMachine(int voltage, int power, int inCapacity) : LinePowered(voltage, power), _inCapacity(inCapacity)
{
}

void WashMachine::showSpec()
{
	std::cout << "Washing machine spec:" << std::endl;
	LinePowered::showSpec();
	std::cout << "Input capacity : " << _inCapacity << " kg" << std::endl;
}

VacCleaner::VacCleaner() :	BattPowered(0, 0), LinePowered(0, 0)
{
	_color.clear();
}

VacCleaner::VacCleaner(int voltage, int power, int bCap, int avgTime, const std::string& color) :
	BattPowered(bCap, avgTime),
	LinePowered(voltage, power),
	_color(color)
{
}

void VacCleaner::showSpec()
{
	std::cout << "Vacuum cleaner spec:" << std::endl;
	LinePowered::showSpec();
	BattPowered::showSpec();
	std::cout << "Color: " << _color << std::endl;
}
