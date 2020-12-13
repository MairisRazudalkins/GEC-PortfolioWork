#include <iostream>

using namespace std;

int main()
{
	bool a = false, b = true;
	int num1 = 12, num2 = 5, num3 = 7;

	//TASK1
	//if (num1 == 12 && num2 == 5 && num3 == 7)
	//	cout << "num1 = " << num1 << "\nnum2 = " << num2 << "\nnum3 = " << num3 << endl;

	//TASK 2
	//if (a)
	//{
	//	num1 += 10;
	//	num2 += 15;
	//}
	//else if (b)
	//{
	//	num1++;
	//	num3 += 20;
	//}
	//else
	//{
	//	num1--;
	//	num2--;
	//	num3--;
	//}
	//cout << "num1 = " << num1 << "\nnum2 = " << num2 << "\nnum3 = " << num3 << endl;

	//TASK 3
	char playAgain;

	cout << "enter y to continue or n to close... ";
	cin >> playAgain;
	

	switch (playAgain)
	{
	case 'y':
		cout << "You chose to play again\n";
		break;
		
	case 'n':
		cout << "Goodbye\n";
		break;
		
	default:
		cout << "You didn't type y or n\n";
		break;
	}
	
	return 0;
}