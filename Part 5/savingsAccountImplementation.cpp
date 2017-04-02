#include <iostream>
#include "bankAccountHeader.h"
#include "savingsAccountHeader.h"

using namespace std;

void savingsAccount::withdraw(double amount)
{
	bankAccount::setBalance(bankAccount::getBalance()-amount);
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
	if (bankAccount::getBalance()>0)
	{
		bankAccount::setBalance(bankAccount::getBalance()+((1+interestRate)*bankAccount::getBalance()));
	}
}

void savingsAccount::getAccountInfo()
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
