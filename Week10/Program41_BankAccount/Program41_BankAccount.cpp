#include <iostream>
#include <time.h>
#include "SavingsAccount.h"
#include "JuniorAccount.h"
using namespace std;

void OpenAccount();
void ViewAccount();
void SaveData();
void LoadData();
AccountInfo* CreateAccount(AccountType type);

int main()
{
	srand(time(NULL));
	
	while (true)
	{
		int choise;
		cout << "1. Open new account  2. View an account  3. Close an account  4. Exit  ";
		cin >> choise;

		if (choise == 1) 
			OpenAccount();
		else if (choise == 2) 
			ViewAccount();
		else if (choise == 3)
		{
			int accNum;
			cout << "Enter your account number: ";
			cin >> accNum;

			int accountIndex = BaseAccount::GetAccountIndex(accNum);

			if (accountIndex == -1)
			{
				cout << "Account not found!\n";
				continue;
			}

			BaseAccount::accounts.erase(BaseAccount::accounts.begin() + accountIndex);
			cout << "Account removed\n";
		}
		else if (choise == 4)
		{
			//delete BaseAccount::accounts;
			return 0;
		}
		else
		{
			cout << "Invalid Input!\n";
		}
	}

}

void OpenAccount()
{
	int choise;
	cout << "1. General account  2. Junior account  3. Savings account  4. Main menu  ";
	cin >> choise;

	if (choise == 1)
		BaseAccount* generalAcc = new BaseAccount(CreateAccount(AccountType::GENERAL));
	else if (choise == 2)
		JuniorAccount* juniorAcc = new JuniorAccount(CreateAccount(AccountType::JUNIOR));
	else if (choise == 3)
		SavingsAccount* savingsAcc = new SavingsAccount(CreateAccount(AccountType::SAVINGS));
	else if (choise == 4)
		return;
	else
	{
		cout << "Invalid Input\n";
		OpenAccount();
	}
}

void ViewAccount()
{
	int accNum;
	cout << "Enter your account number: ";
	cin >> accNum;

	BaseAccount* foundAccount = BaseAccount::GetAccount(accNum);
	
	if (foundAccount == nullptr)
	{
		cout << "Account not found!\n";
		return;
	}

	AccountType accType = foundAccount->accInfo->accountType;
	string accTypeString = accType == AccountType::GENERAL ? "General" : accType == AccountType::JUNIOR ? "Junior" : "Saving";
	
	cout << "\nName\n" + foundAccount->accInfo->forename + " " + foundAccount->accInfo->surname + "\n\nAccount Type\n" << accTypeString << "Interest Rate: " << foundAccount->accInfo->interestRate << "%"
		<< "\n\nAddress\nPostcode: " << foundAccount->accInfo->address->postcode << "\ncity: " << foundAccount->accInfo->address->city << "\nCountry: " << foundAccount->accInfo->address->country << endl << endl;
}

AccountInfo* CreateAccount(AccountType type)
{
	AccountInfo* newAcc = new AccountInfo(type);
	
	cout << "Enter your forename: ";
	cin >> newAcc->forename;
	cout << "Enter your surname: ";
	cin >> newAcc->surname;
	cout << "Enter initial deposit amount: ";
	cin >> newAcc->balance;

	if (newAcc->balance <= 0)
	{
		cout << "Failed to create account! You need to have a initial deposit of more than $0\n";
		delete newAcc;
		return nullptr;
	}

	cin.ignore(1, '\n');
	cout << "Enter your postcode: ";
	getline(cin, newAcc->address->postcode);
	cout << "Enter your city: ";
	getline(cin, newAcc->address->city);
	
	cout << "Enter your country: ";
	getline(cin, newAcc->address->country);
	
	return newAcc;
}
