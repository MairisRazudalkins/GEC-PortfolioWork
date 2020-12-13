#include <ctime>
#include <iostream>

using namespace std;

void CheckWin(string playerChoise, string pcChoise);

int playerScore = 0;
int pcScore = 0;

int main()
{
	string choises[] { "rock", "paper", "scissors" };
	bool playing = true;

	srand(time(NULL));
	
	while (playing)
	{
		string input;
		cout << "Enter your selection: ";
		cin >> input;
		
		CheckWin(input, choises[rand() % 3]);
		cout << "****************************************\n";

		if (playerScore >= 3)
		{
			cout << "Congratulations you have won...\n Game over!";
			playing = false;
		}
		else if (pcScore >= 3)
		{
			cout << "Unlucky the computer won...\n Game over!";
			playing = false;
		}
	}
}

void CheckWin(string playerChoise, string pcChoise)
{
	cout << "You chose: " << playerChoise << "\nComputerChose: " << pcChoise << endl;

	if (playerChoise == pcChoise)
	{
		cout << "\nIt was a draw!";
	}
	else if (playerChoise == "rock")
	{
		if (pcChoise == "paper")
		{
			cout << "Unlucky, computer won!";
			pcScore++;
		}
		else if (pcChoise == "scissors")
		{
			cout << "Congratulations, you won!";
			playerScore++;
		}
	}
	else if (playerChoise == "paper")
	{
		if (pcChoise == "scissors")
		{
			cout << "Unlucky, computer won!";
			pcScore++;
		}
		else if (pcChoise == "rock")
		{
			cout << "Congratulations, you won!";
			playerScore++;
		}
	}
	else if (playerChoise == "scissors")
	{
		if (pcChoise == "rock")
		{
			cout << "Unlucky, computer won!";
			pcScore++;
		}
		else if (pcChoise == "paper")
		{
			cout << "Congratulations, you won!";
			playerScore++;
		}
	}

	cout << "\nYou need " << 3 - playerScore << " to win\nComputer needs " << 3 - pcScore << " to win\n";
}
