#pragma once
#include "battPowered.h"
#include "linePowered.h"
#include <string>

class Player final : public BattPowered
{
public:
	Player();
	Player(int bCap, int avgTime, int memory);

	void showSpec() override;

private:
	int _memory;
};

class LoudSpeaker final : public BattPowered
{
public:
	LoudSpeaker();
	LoudSpeaker(int bCap, int avgTime, int soundPower);

	void showSpec() override;

private:
	int _soundPower;
};

class WashMachine final : public LinePowered
{
public:
	WashMachine();
	WashMachine(int voltage, int power, int inCapacity);

	void showSpec() override;

private:
	int _inCapacity;
};

class VacCleaner final : public BattPowered, LinePowered
{
public:
	VacCleaner();
	VacCleaner(int voltage, int power, int bCap, int avgTime, const std::string& color);

	void showSpec() override;

private:
	std::string _color;
};