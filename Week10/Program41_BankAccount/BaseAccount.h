#pragma once
#include <string>
#include <vector>
using namespace std;

enum AccountType
{
	GENERAL,
	JUNIOR,
	SAVINGS
};

struct AddressInfo
{
	string postcode;
	string city;
	string country;
};

struct AccountInfo
{
	int accountNumber;
	double balance;
	float interestRate;
	string forename;
	string surname;
	AddressInfo* address;
	AccountType accountType;
	
	AccountInfo(AccountType accountType);
	~AccountInfo() { delete address; }

private:
	int GenerateAccountID();
};


class BaseAccount
{
	
public:
	BaseAccount(AccountInfo* accountInfo);
	virtual ~BaseAccount() { delete accInfo; }

	static int GetAccountIndex(int accountID);
	static BaseAccount* GetAccount(int accountID);
	static void LoadData();
	static void SaveData();

	static vector<BaseAccount*> accounts;
	AccountInfo* accInfo;
};

