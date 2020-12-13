#include <iostream>

using namespace std;

void AddTwo(int num);

int main()
{
	int myNum = 6;
	
	cout << "Main [before]: myNum = " << myNum << endl;
	AddTwo(myNum);
	cout << "Main [After]: myNum = " << myNum << endl;
	
	return 0;
}

void AddTwo(int num)
{
	cout << "Function: num = " << num + 2 << endl;
}