#include <iostream>
#include "highInterestCheckingHeader.h"
#include "noServiceChargeCheckingHeader.h"

using namespace std;

void highInterestChecking::setInterestRate(double amount)
{
	checkingAccount::setInterestRate(amount+.05);
}

void highInterestChecking::setMinimumBalance(double amount)
{
	checkingAccount::setMinimumBalance(amount+100);
}

highInterestChecking::highInterestChecking()
:noServiceChargeChecking()
{
	//Nothing
}

highInterestChecking::highInterestChecking(double intRate, double minBal, double serCharges, int checkNum, int accountNumber, double balance, string ownerName)
:noServiceChargeChecking(intRate, minBal, serCharges, checkNum, accountNumber, balance, ownerName)
{
	//Nothing
}
