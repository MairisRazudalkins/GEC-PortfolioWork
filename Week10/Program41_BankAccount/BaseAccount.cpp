#include <iostream>
#include <fstream>
#include "BaseAccount.h"

vector<BaseAccount*> BaseAccount::accounts; // static vector of all created accounts. 

BaseAccount::BaseAccount(AccountInfo* accountInfo)
{
	cout << "\nYour account number is " << accountInfo->accountNumber << endl << endl;
	
	if (accountInfo == nullptr)
	{
		delete this;
		return;
	}
	
	accInfo = accountInfo;
	accInfo->interestRate = 5.5f;
	accounts.push_back(this); // add this instance of BaseAccount to accounts.

	SaveData();
}

int BaseAccount::GetAccountIndex(int accountID)
{
	for (int i = 0; i < accounts.size(); i++)
	{
		if (accounts.at(i)->accInfo->accountNumber == accountID)
			return i;
	}
	
	return -1;
}

BaseAccount* BaseAccount::GetAccount(int accountID)
{
	for (int i = 0; i < accounts.size(); i++)
	{
		if (accounts.at(i)->accInfo->accountNumber == accountID)
			return accounts.at(i);
	}
	
	return nullptr;
}

void BaseAccount::LoadData()
{
	
}

void BaseAccount::SaveData()
{
	ofstream outStream;
	outStream.open("Data/Accounts.txt", ios::app);
	
	if (!accounts.empty())
	{
		for (int i = 0; i < accounts.size(); i++)
		{
			AccountInfo* accInfo = accounts.at(i)->accInfo;
			outStream.write(reinterpret_cast<char*>(&accInfo), sizeof(AccountInfo));
		}
	}
}

AccountInfo::AccountInfo(AccountType accountType)
{
	this->accountType = accountType;
	address = new AddressInfo();
	accountNumber = GenerateAccountID();
}

int AccountInfo::GenerateAccountID()
{
	if (BaseAccount::accounts.empty())
	{
		return rand();
	}
	
	int id = rand();
	BaseAccount* foundAccount = BaseAccount::GetAccount(id); // check if account already exists;

	if (foundAccount == nullptr)
		return id;

	return GenerateAccountID();
}

	