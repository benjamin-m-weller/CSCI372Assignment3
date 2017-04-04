#include <iostream>
#include "bankAccountHeader.h"
#include "checkingAccountHeader.h"

using namespace std;

void checkingAccount::withdraw(double amount)
{
	bankAccount::setBalance(bankAccount::getBalance()-amount);
}

int checkingAccount::getCheckNumber()
{
	return checkNumber;
}

void checkingAccount::getAccountInfo() const
{
	bankAccount::getAccountInfo();
}

void checkingAccount::incrementCheckNumber()
{
	this->checkNumber++;
}

checkingAccount::checkingAccount()
:bankAccount()
{
}

checkingAccount::checkingAccount(int accountNumber, double balance, string ownerName)
:bankAccount(accountNumber, balance, ownerName)
{
	this->checkNumber=0;
}

/*
double checkingAccount::getMinimumBalance()
{
	return minimumBalance;
}

void checkingAccount::setMinimumBalance(double amount)
{
	minimumBalance=amount;
}

double checkingAccount::getInterestRate()
{
	return interestRate;
}

void checkingAccount::setInterestRate(double amount)
{
	interestRate=amount;
}

void checkingAccount::postInterest()
{
	if (bankAccount::getBalance()>0)
	{
		bankAccount::setBalance(bankAccount::getBalance()+((1+interestRate)*bankAccount::getBalance()));
	}
}

double checkingAccount::getServiceCharges()
{
	return serviceCharges;
}

void checkingAccount::setServiceCharges(double amount)
{
	serviceCharges=amount;
}

bool checkingAccount::isAccountBelowMinBalance()
{
	if (bankAccount::getBalance()<minimumBalance)
	{
		bankAccount::setBalance(bankAccount::getBalance()-serviceCharges);
	}
}
*/





