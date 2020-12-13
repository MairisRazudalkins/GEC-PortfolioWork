#include <iostream>
#include <algorithm>
using namespace std;

int GetLargestNumberIndex();
int numbers[5];

int main()
{
	cout << "Enter 5 numbers\n";
	
	for (int i = 0; i < 5; i++)
	{
		int input;
		cin >> input;

		numbers[i] = input;
	}

	sort(numbers, numbers + 5);

	cout << "The array in ascending order is: ";	
	for (int i = 0; i < 5; i++)
	{
		cout << numbers[i] << " ";
	}

	reverse(numbers, numbers + 5);
	
	cout << "\nThe array in reverse order is: ";
	for (int i = 0; i < 5; i++)
	{
		cout << numbers[i] << " ";
	}

	cout << "\nThe largest Number is: " << numbers[GetLargestNumberIndex()];
	
	return 0;
}

int GetLargestNumberIndex()
{
	int smallestNumIndex = 0;

	for (int i = 1; i < 5; i++)
	{
		if (numbers[i] > numbers[smallestNumIndex])
			smallestNumIndex = i;
	}
	
	return smallestNumIndex;
}
