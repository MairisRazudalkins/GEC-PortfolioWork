#include <algorithm>
#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

vector<pair<int, string>> scores;

void LoadScores();
void SaveScores();
void DisplayScores();
void EnterScore();

bool ComparePair(pair<int, string>& a, pair<int, string>& b)
{
	return a.first > b.first;
}

int main()
{
	LoadScores();
	
	while (true)
	{
		int selection;
		cout << "Select operation\n1. Enter Score\n2. Display Score\n3. Exit\n";
		cin >> selection;

		if (selection == 1)
		{
			EnterScore();
		}
		else if (selection == 2)
		{
			DisplayScores();
		}
		else if (selection == 3)
		{
			SaveScores();
			
			break;
		}
	}
	
    return 0;
}

void SaveScores()
{
	ofstream streamOut;
	streamOut.open("Data/Scores.txt", ios::app);

	if (!streamOut.is_open())
		return;

	streamOut.clear();

	for (int i = 0; i < scores.size(); i++)
	{
		if (i > 10)
			break;

		streamOut << scores.at(i).first << " " << scores.at(i).second << endl;
	}
	streamOut.close();
}

void LoadScores()
{
	ifstream streamIn;
	streamIn.open("Data/Scores.txt");

	if (streamIn.is_open())
	{
		string line;

		while (getline(streamIn, line))
		{
			if (line == "" && scores.size() >= 10)
			{
				break;
			}

			string word = "";
			int score;

			for (char i : line)
			{
				if (i == ' ')
				{
					score = stoi(word);
					word = "";
				}
				else
				{
					word = word + i;
				}
			}
			scores.push_back(make_pair(score, word));
		}

		streamIn.close();
	}
}

void DisplayScores()
{
	if (scores.empty())
	{
		cout << "\nEmpty!\n";
		return;
	}

	cout << "\nScore  Name" << endl;

	int count = 1;
	for (pair<int, string> i : scores)
	{
		cout << count << ". " << i.first << " " << i.second << endl;
		count++;
	}
	cout << endl;
}

void EnterScore()
{
	int scoreInput;
	string nameInput;

	cout << "Enter a score: ";
	cin >> scoreInput;

	cout << "Enter a name: ";
	cin >> nameInput;

	if (scores.size() < 10)
		scores.push_back(make_pair(scoreInput, nameInput));
	else if (scores.at(scores.size() - 1).first < scoreInput)
		scores.at(scores.size() - 1) = make_pair(scoreInput, nameInput);

	sort(scores.begin(), scores.end(), ComparePair);
}
