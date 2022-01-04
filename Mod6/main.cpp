#include "devices.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	cout << "HW Module 6" << endl;

	const int storageSize = 4;
	IElectronics* storage[storageSize] = { nullptr };

	storage[0] = new Player(2000, 48, 16);
	storage[1] = new LoudSpeaker(4000, 8, 10);
	storage[2] = new WashMachine(220, 2500, 6);
	storage[3] = new VacCleaner(110, 1800, 20000, 4, string("White"));

	bool open(true);
	while (open)
	{
		cout << "Choose product:" << endl;
		cout << "1 player, 2 loudspeaker, 3 washing machine, 4 vacuum cleaner, 0 exit: ";
		int product;
		cin >> product;
		switch (product)
		{
		case 0:
			open = false;
			break;

		case 1:
			storage[0]->showSpec();
			break;

		case 2:
			storage[1]->showSpec();
			break;

		case 3:
			storage[2]->showSpec();
			break;

		case 4:
			storage[3]->showSpec();
			break;

		default:
			cout << "Product range from 1 to " << storageSize << endl;
			break;
		}
	}

	for (int i = 0; i < storageSize; ++i)
	{
		delete storage[i];
	}

	return 0;
}