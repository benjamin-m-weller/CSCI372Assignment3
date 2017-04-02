#include <iostream>
#include "checkingAccountHeader.h"
#include "serviceChargeCheckingHeader.h"

using namespace std;

void serviceChargeChecking::postInterest()
{
	//Yeah do nothing here
}

bool serviceChargeChecking::isAccountBelowMinBalance()
{
	return false;
}

int serviceChargeChecking::writeCheck(double amount)
{
	if (numberOfChecksWritten<numberOfChecksAllowable)
	{
		numberOfChecksWritten++;
		checkingAccount::withdraw(amount);
	}
	else
	{
		double charges=checkingAccount::getServiceCharges();
		checkingAccount::withdraw(amount);
		checkingAccount::withdraw(charges);
	}
	return checkingAccount::getCheckNumber();
}

void serviceChargeChecking::getAccountInfo()
{
	cout<<"Hello this is the bank account information\n"
	<<"Your bank account number is: "<<bankAccount::getAccountNumber()<<"\n"
	<<"Your account balance is: "<<bankAccount::getBalance()<<"\n"
	<<"The owner of this account is: "<<bankAccount::getOwnerName()<<"\n"
	<<"The maximum number of checks allowable for this account is: "<<numberOfChecksAllowable<<"\n"
	<<"The number of checks currently written is: "<<numberOfChecksWritten<<endl;
}

serviceChargeChecking::serviceChargeChecking(double intRate, double minBal, double serCharges, int checkNum, int accountNumber, double balance, string ownerName, int numberOfChecksAllowable)
:checkingAccount(intRate, minBal, serCharges, checkNum, accountNumber, balance, ownerName)
{
	this->numberOfChecksAllowable=numberOfChecksAllowable;
	numberOfChecksWritten=0;
		
}
	
serviceChargeChecking::serviceChargeChecking()
:checkingAccount()
{
	
}








