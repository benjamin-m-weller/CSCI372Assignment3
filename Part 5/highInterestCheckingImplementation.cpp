#include <iostream>
#include "highInterestCheckingHeader.h"
#include "noServiceChargeCheckingHeader.h"

using namespace std;

void highInterestChecking::setInterestRate(double amount)
{
	noServiceChargeChecking::setinterestRate(amount+.05);
}

void highInterestChecking::setMinimumBalance(double amount)
{
	noServiceChargeChecking::setminimumBalance(amount+100);
}

void getAccountInfo() const
{
	noServiceChargeChecking::getAccountInfo();
	cout<<"Please notice that if you pass the same numbers for minimum balance and interest rate, that the high interest checking account has higher values."<<endl;
}

highInterestChecking::highInterestChecking()
:noServiceChargeChecking()
{
	//Nothing
}

highInterestChecking::highInterestChecking(double intRate, double minBal, int accountNumber, double balance, string ownerName)
:noServiceChargeChecking(intRate, minBal, accountNumber, balance, ownerName)
{
	setInterestRate(intRate);
	setMinimumBalance(minBal);
}
