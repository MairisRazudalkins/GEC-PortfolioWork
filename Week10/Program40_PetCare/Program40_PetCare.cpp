#include <iostream>

#include "Cat.h"
#include "Dog.h"
#include "Hamster.h"

using namespace std;

int main()
{
	Pet* pet;

	while (true)
	{
		int input;
		cout << "Which animal do you want?\n1. Dog\n2. Cat\n3. Hamster\n";
		cin >> input;

		if (input == 1)
			pet = new Dog();
		else if (input == 2)
			pet = new Cat();
		else if (input == 3)
			pet = new Hamster();
		else
			continue;
		
		break;
	}

	pet->Talk();

	while (true)
	{
		int input;
		cout << "0. Quit  1. Listen to your pet  2. Feed your pet  3. Play with pet  :  ";
		cin >> input;

		if (input == 0)
			break;
		else if (input == 1)
			pet->Talk();
		else if (input == 2)
			pet->Feed();
		else if (input == 3)
			pet->Play();
	}
	
	delete pet;
	return 0;
}
