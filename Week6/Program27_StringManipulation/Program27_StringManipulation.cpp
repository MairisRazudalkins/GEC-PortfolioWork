#include <iostream>

using namespace std;

int main()
{
	string sentence = "Do you know who loves C++ XX does";
	string name, name2;

	cout << sentence << endl;
	
	cout << "Enter your name: ";
	cin >> name;

	cout << sentence.replace(26, 2, name) << endl;

	cout << "Enter another name: ";
	cin >> name2;

	cout << sentence.replace(26, name.length(), name2);
	
    return 0;
}
