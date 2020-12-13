#include <iostream>
using namespace std;

void InputDetails(int* n1, int* n2);
void OutputDetails(int& int1, int& int2, int* ptr);

int num1, num2;

int main()
{
	int* pNum = &num1;
	InputDetails(&num1, &num2);
	OutputDetails(num1, num2, pNum);
	cout << "-----------------------------------\n";
	pNum = &num2;
	OutputDetails(num1, num2, pNum);
	
	return 0;
}

void InputDetails(int* n1, int* n2)
{
	cout << "Enter a number: ";
	cin >> num1;
	cout << "Enter another number: ";
	cin >> num2;
}

void OutputDetails(int& int1, int& int2, int* ptr)
{
	cout << "Num1 value = " << int1 << " | Num1 address in memory = " << &int1 << endl;
	cout << "Num1 value = " << int2 << " | Num1 address in memory = " << &int2 << endl;
	cout << "pNum value(address) = " << ptr << " | pNum dereferenced value = " << *ptr << " | pNum address in memory = " << &ptr << endl;
}
