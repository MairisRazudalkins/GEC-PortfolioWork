#include <cctype>
#include <iostream>
using namespace std;

int main()
{
	bool isRunning = true;
	int triangleSize;
	char input;
	
	while(isRunning)
	{
		cout << "Enter the number of rows you want the triangle to have: ";
		cin >> triangleSize;
		
		for (int i = triangleSize - 1; i >= 0; i--)
		{
			for (int j = triangleSize - i; j > 0; j--)
			{
				cout << "*";
			}
			cout << endl;
		}

		cout << "Enter 'Y' to start over. Enter 'N' to exit: ";
		cin >> input;
		
		if (tolower(input) == 'n')
		{
			cout << "Goodbye ";
			isRunning = false;
		}
	}
	
	return 0;
}
