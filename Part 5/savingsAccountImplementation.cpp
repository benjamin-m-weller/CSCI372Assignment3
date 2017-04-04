#include <iostream>
#include "bankAccountHeader.h"
#include "savingsAccountHeader.h"

using namespace std;

double savingsAccount::getInterestRate()
{
	return interestRate;
}

void savingsAccount::setInterestRate(double amount)
{
	interestRate=amount;
}

void savingsAccount::postInterest()
{
	if (bankAccount::getBalance()>0)
	{
		bankAccount::setBalance((1+interestRate)*bankAccount::getBalance());
	}
}

void savingsAccount::getAccountInfo() const
{
	bankAccount::getAccountInfo();
	cout<<"The interest rate is: "<<interestRate<<endl;
}

savingsAccount::savingsAccount()
{
	interestRate=0.1;
}

savingsAccount::savingsAccount(int accountNumber, double balance, string ownerName, double intRate)
:bankAccount(accountNumber, balance, ownerName)
{
	interestRate=intRate;
}
