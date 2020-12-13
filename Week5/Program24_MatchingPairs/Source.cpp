#include <iostream>
using namespace std;

void DrawGameBoard();
void DrawGameBoard(int guess1, int guess2 = -1);

char boardCards[10] {'A', 'E', 'B', 'D', 'B', 'C', 'A', 'C', 'E', 'D'};
bool foundCards[10]{ false };
int attempts = 0;

int main()
{
	int score = 0;
	bool playing = true;

	while (playing)
	{
		DrawGameBoard();

		int guess1, guess2;

		cout << "\nEnter a card number for your first selection: ";
		cin >> guess1;
		DrawGameBoard(guess1);

		cout << "\nEnter a card number for your second selection: ";
		cin >> guess2;
		DrawGameBoard(guess1, guess2);

		if (boardCards[guess1 - 1] == boardCards[guess2 - 1])
		{
			score++;
			foundCards[guess1 - 1] = true;
			foundCards[guess2 - 1] = true;
		}

		if (score >= 5)
			playing = false;

		attempts++;
	}

	cout << "\nYou won!";
}

void DrawGameBoard()
{
	system("cls");
	cout << "Attept " << attempts << endl;

	for (int i = 0; i < 10; i++)
	{
		if (i == 5)
			cout << endl;
		
		if (foundCards[i] == true)
			cout << "[" << boardCards[i] << "]";
		else
			cout << "[" << i + 1 << "]";
	}
}

void DrawGameBoard(int guess1, int guess2)
{
	system("cls");
	cout << "Attept " << attempts << endl;

	for (int i = 0; i < 10; i++)
	{
		if (i == 5)
			cout << endl;
		
		if (foundCards[i] || i + 1 == guess1 || i + 1 == guess2)
			cout << "[" << boardCards[i] << "]";
		else
			cout << "[" << i + 1 << "]";
	}
}