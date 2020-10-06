#include <iostream>
using namespace std;

int main()
{
	int num = 1;

	cout << "num = " << num << endl;
	cout << "Increment operator before num = " << ++num << endl;
	cout << "num after = " << num << endl;

	num = 1;

	cout << "num = " << num << endl;
	cout << "Increment operator after num = " << num++ << endl;
	cout << "num after = " << num << endl;

	num = 1;

	cout << "num = " << num << endl;
	cout << "Decrement operator before num = " << --num << endl;
	cout << "num after = " << num << endl;

	num = 1;

	cout << "num = " << num << endl;
	cout << "Decrement operator after num = " << num-- << endl;
	cout << "num after = " << num << endl;

	return 0;
}