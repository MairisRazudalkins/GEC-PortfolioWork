#include <iostream>
using namespace std;

int main()
{
	int input;
	cout << "Please choose an option : 1.Sunny 2.Cloudy 3.Raining 4.Exit : ";
	cin >> input;

	switch (input)
	{
	case 1:
		cout << "Don't forget your sunscreen\n";
		break;
	case 2:
		cout << "Wrap up warm might be breezy\n";
		break;
	case 3:
		cout << "Don't forget an umbrella\n";
		break;
	case 4:
		cout << "Goodbye\n";
		break;		
	default:
		cout << "You entered an invalid option\n";
		break;		
	}
	
	return 0;
}