#include <iostream>
using namespace std;

int num;
int& rNum = num;

void Plus25()
{
	rNum += 25;
}

void Minus25()
{
	rNum -= 25;
}

int main()
{
	cout << "Enter a number: ";
	cin >> num;
	cout << "Number before = " << num << endl;
	Plus25();
	cout << "Number after addition = " << num << endl;

	cout << "Enter another number: ";
	cin >> num;
	cout << "Number before subtraction = " << num << endl;
	Minus25();
	cout << "Number after subtraction = " << num << endl;
	
	return 0;
}