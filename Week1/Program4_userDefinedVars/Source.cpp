#include <iostream>
using namespace std;

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

int main() 
{
	typedef int cost;
	cost hondaCost = 13000;
	CarMake honda = CarMake::HONDA;

	cout << "The cost of my car is: " << hondaCost << endl;
	cout << "My car id is: " << honda << endl;
}