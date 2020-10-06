#include <iostream>
using namespace std;

int main()
{
	float fahrenheit = 95.0f, celsius = (fahrenheit - 32) * 0.5556;

	cout << fahrenheit << "F is equal to " << celsius << "C." << endl;
}