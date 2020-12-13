#include <iostream>
using namespace std;

int main()
{
	int numInput1, numInput2;
	int total = 0;
	int numsInserted = 0;

	while(true)
	{
		cout << "Enter a number: ";
		cin >> numInput1;

		cout << "Enter a second number: ";
		cin >> numInput2;

		numsInserted += 2;
		total += numInput1 + numInput2;
		cout << "Total sum = " << total << endl << "Mean = " << total / numsInserted << endl << endl;
		
		cout << "Enter '1' to continue. Enter '0' to exit: ";
		cin >> numInput1;

		if (numInput1 == 0)
			break;
	}
	
	return 0;
}