#include <iostream>
using namespace std;

int main()
{
    int count = 3;
    for (int i = 1; i <= count; i++)
    {
        if (i % 2 != 1)
            cout << i << " is an even number" << endl;
        else
            cout << i << " is an odd number" << endl;
    }
	
    cin.get();
    return 0;
}
