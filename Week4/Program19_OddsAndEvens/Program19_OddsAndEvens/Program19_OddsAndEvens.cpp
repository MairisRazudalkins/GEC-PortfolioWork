#include <iostream>
using namespace std;

void OutputResult(int numOfOdd, int oddTotal, int numOfEven, int evenTotal);
bool IsOdd(int num);

int main()
{
    int numOfOdd = 0, oddTotal = 0, numOfEven = 0, evenTotal = 0;

    cout << "Enter 10 numbers :\n";

    for (int i = 0; i < 10; i++)
    {
        int input;
        cin >> input;

        if (IsOdd(input))
        {
            numOfOdd++;
            oddTotal += input;
        }
        else
        {
            numOfEven++;
            evenTotal += input;
        }
    }
	
    OutputResult(numOfOdd, oddTotal, numOfEven, evenTotal);
    return 0;
}

void OutputResult(int numOfOdd, int oddTotal, int numOfEven, int evenTotal)
{
    cout << "Number of odd numbers is: " << numOfOdd << endl;
    cout << "Total odd sum is: " << oddTotal << endl;
    cout << "Number of even numbers is: " << numOfEven << endl;
    cout << "Total even sum is: " << evenTotal << endl;
}

bool IsOdd(int num)
{
    return num % 2 == 0 ? false : true;
}
