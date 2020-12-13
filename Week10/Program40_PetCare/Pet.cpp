#include <iostream>
#include "Pet.h"

using namespace std;

Pet::Pet(int hunger, int boredom)
{
	cout << "A new pet has arrived\n";
	
	this->hunger = hunger;
	this->bored = boredom;
}

void Pet::Feed(int food)
{
	cout << "Burp!\n";
	hunger -= food;

	if (hunger < 0)
		hunger = 0;

	PassingTime();
}

void Pet::Play(int fun)
{
	cout << "Fun!\n";
	bored -= fun;

	if (bored < 0)
		bored = 0;

	PassingTime();
}

void Pet::Talk()
{
	string mood = "";
	int lMood = GetMood();

	mood = lMood > 15 ? "Mad" : lMood > 10 ? "Frustrated" : lMood > 5 ? "Okay" : "happy";
	cout << "I am a " << name << " and I feel " << mood << endl;

	PassingTime();
}

void Pet::PassingTime(int time)
{
	hunger += time;
	bored += time;
}
