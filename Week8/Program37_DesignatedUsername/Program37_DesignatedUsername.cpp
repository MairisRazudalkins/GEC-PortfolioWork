#include <ctime>
#include <iostream>
#include <string>
using namespace std;

void AddNumbersToName(string& name);

int main()
{
	string name;
	cout << "Enter your username\n";
	cin >> name;

	cout << "That name is taken\n";
	AddNumbersToName(name);
	cout << "Avaliable name: " << name;
	
	return 0;
}

void AddNumbersToName(string& name)
{
	srand(time(NULL));
	int num = rand();

	name = name + to_string(num);
}
