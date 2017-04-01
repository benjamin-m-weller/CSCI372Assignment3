#include "highInterestChecking.h"
#include "noServiceChargeChecking.h"

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
:checkingAccount()
{
	//Nothing
}

highInterestChecking::highInterestChecking(double intRate, double minBal, double serCharges, int checkNum, int accountNumber, double balance, string ownerName)
:checkingAccount(double intRate, double minBal, double serCharges, int checkNum, int accountNumber, double balance, string ownerName)
{
	//Nothing
}
