#include <iostream>
#include "checkingAccountHeader.h"
#include "noServiceChargeCheckingHeader.h"

using namespace std;

void noServiceChargeChecking::setminimumBalance(double minimumBalance)
{
this->minimumBalance=minimumBalance;
}

double noServiceChargeChecking::getminimumBalance()
{
return minimumBalance;
}

void noServiceChargeChecking::setinterestRate(double interestRate)
{
this->interestRate=interestRate;
}

double noServiceChargeChecking::getinterestRate()
{
return interestRate;
}



int noServiceChargeChecking:: writeCheck(double amount)
{
	//As long as they are above the minimum balance they can write a check.
	//The return value will be the checknumber
	int returned=0;
	if (checkingAccount::getBalance()>minimumBalance)
	{
		checkingAccount::withdraw(amount);
		returned=checkingAccount::getCheckNumber();
	}
	return returned;
}

void noServiceChargeChecking::getAccountInfo() const
{
	/*
	cout<<"Hello this is the bank account information\n"
	<<"Your bank account number is: "<<bankAccount::getAccountNumber()<<"\n"
	<<"Your account balance is: "<<bankAccount::getBalance()<<"\n"
	<<"The owner of this account is: "<<bankAccount::getOwnerName()<<"\n"
	<<"The interest rate on this account is: "<<interestRate<<"\n"
	<<endl; */
	checkingAccount::getAccountInfo();
	cout<<"The minimum balance on this account is: "<<minimumBalance<<"\n"
	<<"The interest rate on this account is: "<<interestRate<<endl;
}

void noServiceChargeChecking::postInterest()
{
	if (bankAccount::getBalance()>0)
	{
		bankAccount::setBalance((1+interestRate)*bankAccount::getBalance());
	}
}

noServiceChargeChecking::noServiceChargeChecking()
:checkingAccount()
{
	//Nothing
}

noServiceChargeChecking::noServiceChargeChecking(double intRate, double minBal, int accountNumber, double balance, string ownerName)
:checkingAccount(accountNumber, balance, ownerName)
{
	this->minimumBalance=minBal;
	this->interestRate=intRate;
}


