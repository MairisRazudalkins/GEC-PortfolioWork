#include <iostream>
#include <string>

using namespace std;

struct PersonalDetails
{
	string name, phoneNumber;
	int age;

	int PrintDetails()
	{
		cout << "Name: " << name << " Phone Number: " << phoneNumber << " Age: " << age;
		return 0;
	}
};

int main()
{
	PersonalDetails* details = new PersonalDetails();

	cout << "Enter your full name\n";
	getline(cin, details->name);

	cout << "Enter your phone number\n";
	getline(cin, details->phoneNumber);
	
	cout << "Enter your age\n";
	cin >> details->age;

	details->PrintDetails();
	
	delete details;
	return 0;
}