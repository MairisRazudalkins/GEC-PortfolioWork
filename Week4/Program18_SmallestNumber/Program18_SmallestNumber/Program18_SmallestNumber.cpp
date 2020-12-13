#include <iostream>

using namespace std;

int SmallestNumber(int a, int b);

int main()
{
	for (int i = 0; i < 3; i++)
	{
		int numAInput, numBInput, smallestNum;

		cout << "Enter a number: ";
		cin >> numAInput;
		cout << "Enter another number: ";
		cin >> numBInput;

		smallestNum = SmallestNumber(numAInput, numBInput);

		if (smallestNum == NULL)
			cout << "Both numbers are the same\n";
		else
			cout << "The smallest number is: " << smallestNum << endl;
	}

	return 0;
}

int SmallestNumber(int a, int b)
{
	return a == b ? NULL : a > b ? b : a;
}
