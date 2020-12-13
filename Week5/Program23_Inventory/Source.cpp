#include <iostream>
using namespace std;

const int maxItems = 4;
string inventory[maxItems] {"Sword", "BattleAxe", "HealingPotion", "Dagger"};

int main()
{
	cout << "You have picked up a wizard's staff. Would you like to replace it for the dagger? Y/N ";
	
	char choice;
	cin >> choice;

	if (tolower(choice) == 'n')
	{
		cout << "You have chose to leave the wizard's staff behind.";
	}
	else if (tolower(choice) == 'y')
	{
		cout << "You have chose to pick up the wizard's staff and leave behind the dagger.";
		inventory[3] = "WizardStaff";
	}

	cout << "\nYour inventory contains: ";
	for (int i = 0; i < maxItems; i++)
		cout << inventory[i] << " ";
}