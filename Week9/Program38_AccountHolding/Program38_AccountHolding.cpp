#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

struct Info
{
	string name;
	int accountNumber;
	double balance;

	Info() {};
	
	Info(string name, int accountNumber, double balance)
	{
		this->name = name;
		this->accountNumber = accountNumber;
		this->balance = balance;
	}
};

int main()
{
	Info info1;
	Info info2;

	ofstream streamOut;
	ifstream streamIn;

	while (true)
	{
		int input;
		
		cout << "1. Enter new details\n2. Display contents of file\n3. Display accounts that have balance over 10,000\n4. Exit\n";
		cin >> input;
		
		switch (input)
		{
		case 1:
			while (true)
			{
				streamOut.open("ClientInfo/Info.txt", ios_base::app);
				
				if (streamOut.is_open())
				{
					cout << "Enter name: ";
					cin >> info1.name;

					cout << "Enter account number: ";
					cin >> info1.accountNumber;

					cout << "Enter balance: ";
					cin >> info1.balance;

					streamOut << info1.name << " " << info1.accountNumber << " " << info1.balance << endl;
					
					cout << "\n1. Create another account\n2. Back\n";
					cin >> input;

					if (input == 2)
					{
						break;
					}
				}
				else
				{
					cout << "\nFailed to load file!";
					break;
				}

				streamOut.close();
			}
			
			streamOut.close();
			
			break;
		case 2:
			streamIn.open("ClientInfo/Info.txt");

			if (streamIn.is_open())
			{
				string line;
				
				while (getline(streamIn, line))
				{
					if (line == "")
					{
						break;
					}
					
					vector<string>* data = new vector<string>();
					string word = "";
					
					for (char i : line)
					{
						if (i == ' ')
						{
							data->push_back(word);
							word = "";
						}
						else
						{
							word = word + i;
						}
					}
					data->push_back(word);
					
					info2.name = data->at(0);
					info2.accountNumber = stoi(data->at(1));
					info2.balance = stod(data->at(2));

					cout << "name: " + info2.name + " acc num: " << info2.accountNumber << " balance: " << info2.balance << endl;
					delete data;
				}
				
				streamIn.close();
			}
			
			break;
		case 3:

			streamIn.open("ClientInfo/Info.txt");

			if (streamIn.is_open())
			{
				string line;

				while (getline(streamIn, line))
				{
					if (line == "")
					{
						break;
					}

					vector<string>* data = new vector<string>();
					string word = "";

					for (char i : line)
					{
						if (i == ' ')
						{
							data->push_back(word);
							word = "";
						}
						else
						{
							word = word + i;
						}
					}
					data->push_back(word);

					info2.name = data->at(0);
					info2.accountNumber = stoi(data->at(1));
					info2.balance = stod(data->at(2));

					if (info2.balance >= 10000)
					{
						cout << "name: " + info2.name + " acc num: " << info2.accountNumber << " balance: " << info2.balance << endl;
					}
					
					delete data;
				}

				streamIn.close();
			}

			break;
		case 4:
			return 0;
			
		default:
			cout << "\nInvalid Input!\n";
			break;
		}
	}
}
