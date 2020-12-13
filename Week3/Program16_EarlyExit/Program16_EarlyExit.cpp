#include <iostream>

using namespace std;

int main()
{
	float health = 100;
	
	for (int i = 1; i <= 10; i++)	
	{
		float damage = 0;
		cout << "Question " << i << ": How much damage shall I deal?\n";
		cin >> damage;

		health -= damage;

		if (health <= 0)
		{
			cout << "Early end. Player died";
			return 0;
		}
	}

	cout << "All questions asked. Player survived!" << endl;
	return 0;
}
