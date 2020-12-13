#include <iostream>
using namespace std;

int GetIndexOfSmallestNumber();

int numbers[10];

int main()
{
	cout << "Enter 10 numbers\n";
	
	for (int i = 0; i < 10; i++)
	{
		int input;
		cin >> input;

		numbers[i] = input;
	}

	int smallestNumIndex = GetIndexOfSmallestNumber();
	cout << "The smallest number is: " << numbers[smallestNumIndex] << " at index: " << smallestNumIndex;

	
	return 0;
}

int GetIndexOfSmallestNumber()
{
	int smallestNumIndex = 0;
	
	for (int i = 0; i < 10; i++)
	{	
		if (numbers[i] < numbers[smallestNumIndex])
			smallestNumIndex = i;
	}
	
	return smallestNumIndex;
}
