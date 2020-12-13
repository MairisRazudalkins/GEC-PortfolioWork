#include <iostream>
using namespace std;

int main()
{
	char status;
	int gameChoise;

	cout << "Please tell me your status with 's' for student, 't' for teacher or 'o' for other : ";
	cin >> status;
	cout << "Which game they would like, 1 or 2? : ";
	cin >> gameChoise;
	
	if(status == 's' || status == 't')
	{
		if(gameChoise == 1)
			cout << "You can get a 20% discount";
		else if(gameChoise == 2)
			cout << "You can get a 10% discount";
		else
			cout << "You entered an invalid game";
	}
	else if(status == 'o')
	{
		cout << "You are not entitled to a discount";
	}
	else
	{
		cout << "You entered an invalid status";
	}

	
	return 0;
}