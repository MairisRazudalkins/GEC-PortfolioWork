#include <iostream>
#include <string>
#include <vector>

using namespace std;

string AskQuestion(string outputSentence);
void OutputInventory();

vector<string> inventory{ "sword" };

int main()
{
	string response;

	response = AskQuestion("Type which item you with to keep: Staff or Knife: ");
	inventory.push_back(response);
	cout << "Your inventory holds: \n";
	OutputInventory();

	response = AskQuestion("Type which item you with to keep: Healing potion or Fire Spell: ");
	inventory.push_back(response);
	cout << "Your inventory holds: \n";
	OutputInventory();

	cout << "\nYour inventory is full!\n";

	int choise;
	cout << "You have found a magic ring what would you like to replace in your inventory? Type a number! \n1. " << inventory[0] << "\n2. " << inventory[1] << "\n3. " << inventory[2] << endl;
	cin >> choise;

	inventory[choise - 1] = "magic ring";

	cout << "You inventory is now\n";
	OutputInventory();

	cout << "\nYou have been robbed\nYour inventory is now";
	inventory.clear();
	OutputInventory();

	return 0;
}

string AskQuestion(string outputSentence)
{
	string input;

	cout << outputSentence;
	getline(cin, input);

	return input;
}

void OutputInventory()
{
	if (inventory.size() > 0)
	{
		for (int i = 0; i < inventory.capacity(); i++)
			cout << (inventory[i]) << endl;
	}
	else
	{
		cout << "\nEmpty!\n";
	}
}

