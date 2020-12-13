#include <iostream>

using namespace std;

int main()
{
	char input[256];
	
	cout << "Please input your initials followed by your surname in the format - 'M F Razudalkins': ";
	cin.getline(input, 256);

	for (int i = 0; i < 256; i++)
	{
		if (input[i] == NULL)
			break;
		
		if (input[i] == ' ')
			cout << endl;
		else
			cout << input[i];
	}
	
	return 0;
}
