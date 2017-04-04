#include <iostream>
#include "checkingAccountHeader.h"
#include "serviceChargeCheckingHeader.h"

using namespace std;

void serviceChargeChecking::setnumberOfChecksAllowable(int numberOfChecksAllowable)
{
this->numberOfChecksAllowable=numberOfChecksAllowable;
}

int serviceChargeChecking::getnumberOfChecksAllowable()
{
return numberOfChecksAllowable;
}

void serviceChargeChecking::setserviceCharges(double serviceCharges)
{
this->serviceCharges=serviceCharges;
}

double serviceChargeChecking::getserviceCharges()
{
return serviceCharges;
}



int serviceChargeChecking::writeCheck(double amount)
{
	if (checkingAccount::getCheckNumber()<numberOfChecksAllowable)
	{
		checkingAccount::incrementCheckNumber();
		checkingAccount::withdraw(amount);
	}
	else
	{
		checkingAccount::incrementCheckNumber();
		checkingAccount::withdraw(amount);
		checkingAccount::withdraw(serviceCharges);
	}
	return checkingAccount::getCheckNumber();
}

void serviceChargeChecking::getAccountInfo() const
{
	/*
	cout<<"Hello this is the bank account information\n"
	<<"Your bank account number is: "<<bankAccount::getAccountNumber()<<"\n"
	<<"Your account balance is: "<<bankAccount::getBalance()<<"\n"
	<<"The owner of this account is: "<<bankAccount::getOwnerName()<<"\n"
	<<"The maximum number of checks allowable for this account is: "<<numberOfChecksAllowable<<"\n"
	<<"The number of checks currently written is: "<<numberOfChecksWritten<<endl;
	*/
	checkingAccount::getAccountInfo();
	cout<<"The maximum number of checks allowable for this account is: "<<numberOfChecksAllowable<<"\n"
	<<"The service charge rate currently on the account is: "<<serviceCharges
	<<endl;
}

serviceChargeChecking::serviceChargeChecking(double serCharges, int numberOfChecksAllowable, int accountNumber, double balance, string ownerName)
:checkingAccount(accountNumber, balance, ownerName)
{
	this->numberOfChecksAllowable=numberOfChecksAllowable;
	this->serviceCharges=serCharges;
		
}
	
serviceChargeChecking::serviceChargeChecking()
:checkingAccount()
{
	
}








