#include <iostream>
using namespace std;

int main() 
{
	typedef int cost;
	cost hondaCost = 13000;

	enum CarMake
	{
		FORD = 1,
		FIAT,
		TESLA,
		VW,
		BMW,
		ASTONMARTIN,
		HONDA,
		NISSAN,
		AUDI,
		JAGUAR,
		DODGE
	};

	cout << "The cost of my car is: " << hondaCost << endl;
	cout << "My car id is: " << CarMake::HONDA << endl;
}