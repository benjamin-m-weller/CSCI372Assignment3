#include "bankAccountHeader.h"
#include "savingsAccountHeader.h"

void savingsAccount::withdraw(double amount)
{
	balance-=amount;
	isAccountBelowMinBalance();
}

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
	if (balance>0)
	{
		balance+=((1+interestRate)*balance);
	}
}

void savingsAccount::getAccountInfo()
{
	bankAccount::getAccountInfo();
	cout<<"The interest rate is: "<<interestRate<<endl
}

savingsAccount::savingsAccount()
{
	interestRate=0.1;
	minimumBalance=0.0;
	serviceCharges=5.0;
	checkNumber=0;
}

savingsAccount::savingsAccount(int accountNumber, double balance, double intRate)
:bankAccount(accountNumber, balance)
{
	interestRate=intRate;
}


