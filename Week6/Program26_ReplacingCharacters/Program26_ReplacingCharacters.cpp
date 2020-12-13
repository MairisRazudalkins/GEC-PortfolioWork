#include <iostream>
#include <string>

using namespace std;

int main()
{
	string input;
	cout << "Enter a sentence: ";
	getline(cin, input);

	for (int i = 0; i < input.length(); i++)
	{
		if (tolower(input[i]) == 'e')
			input[i] = 'X';
	}

	cout << input;
	
	return 0;
}

