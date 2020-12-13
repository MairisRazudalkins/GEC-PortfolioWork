#include "SavingsAccount.h"

SavingsAccount::SavingsAccount(AccountInfo* accountInfo) : BaseAccount(accountInfo)
{
	accInfo->interestRate = 7.5f;
}
