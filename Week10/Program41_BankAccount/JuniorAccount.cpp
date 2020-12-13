#include "JuniorAccount.h"

JuniorAccount::JuniorAccount(AccountInfo* accountInfo) : BaseAccount(accountInfo)
{
	accInfo->interestRate = 3.5f;
}
