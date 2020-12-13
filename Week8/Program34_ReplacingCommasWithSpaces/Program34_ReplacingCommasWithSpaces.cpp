#include <iostream>
using namespace std;

void Comma2Blank(char* textToChange);

int main()
{
	char input[256];
	cout << "Enter a sentence and use commas instead of a spaces\n";
	cin >> input;

	Comma2Blank(input);

	cout << input;
	
	return 0;
}

void Comma2Blank(char* textToChange)
{	
	for (int i = 0; i < strlen(textToChange); i++)
	{
		if (textToChange[i] == ',')
		{
			textToChange[i] = ' ';
		}
	}
}
