#include <iostream>

using namespace std;

int main()
{

	
	int weatherInput;
	int celsiusInput;

	cout << "Please tell me if it is raining with '1' or snowing with '2' : ";
	cin >> weatherInput;
	cout << "What's the temperature in celsius : ";
	cin >> celsiusInput;

	if(weatherInput == 1)
	{
		if(celsiusInput > 15)
			cout << "Wear a light raincoat\n";
		else
			cout << "Wear a thick coat\n";
	}
	else if(weatherInput == 2)
	{
		if(celsiusInput > 5)
			cout << "Wear something warm\n";
		else if(celsiusInput > 0)
			cout << "Wrap up well\n";
		else
			cout << "Stay at home\n";
	}
	else
	{
		cout << "Have a nice day as it is neither raining nor snowing\n";
	}

	
	return 0;
}