#include <iostream>

using namespace std;

int playerHealth = 1000;
int enemyHealth = 2000;
bool playing = true;

void Attack(int attackType);
bool IsPlaying();
bool AskToPlayAgain();

int main()
{	
	while (IsPlaying())
	{
		int choiseInput;
		
		cout << "You have met a troll, He looks agressive and will attack!\nWhat attack will you do?\nChoose wisely as each attack has different damages and effects\n1.Use sword 2.Use magic 3.Use Axe : ";
		cin >> choiseInput;

		if (choiseInput <= 3 && choiseInput >= 1)
			Attack(choiseInput);
		else
			cout << "Invalid choice. Try again!\n\n";
	}

	return 0;
}

void Attack(int attackType)
{
	const int swordDamage = 300, magicDamage = 650, axeDamage = 450,
		trollSword = 350, trollMagic = 50, trollAxe = 100;

	int playerDamage;
	int trollDamage;
	
	switch (attackType)
	{
	case 1:
		playerDamage = swordDamage;
		trollDamage = trollSword;
		break;
	case 2:
		playerDamage = magicDamage;
		trollDamage = trollMagic;
		break;
	case 3:
		playerDamage = axeDamage;
		trollDamage = trollAxe;
		break;
	}

	playerHealth = playerHealth - trollDamage < 0 ? 0 : playerHealth - trollDamage;
	enemyHealth = enemyHealth - playerDamage < 0 ? 0 : enemyHealth - playerDamage;
	
	cout << "\nYou have hit the troll and the troll has hit you\n" << "Your new health is: " << playerHealth << "\nThe trolls new health is: " << enemyHealth << endl << endl;
}

bool IsPlaying()
{
	if (playerHealth <= 0)
	{
		
		cout << "You have been killed!\n";
		return AskToPlayAgain();
	}
	else if (enemyHealth <= 0)
	{
		cout << "You killed the troll!\n";
		return AskToPlayAgain();
	}
	
	return true;
}

bool AskToPlayAgain()
{
	char input = ' ';
	cout << "Would you like to play again? Y/N: ";
	cin >> input;


	if (tolower(input) == 'y')
	{
		playerHealth = 1000;
		enemyHealth = 2000;
		return true;
	}
	else if(tolower(input) == 'n')
	{
		return false;
	}
	else
	{
		AskToPlayAgain();
	}
}
