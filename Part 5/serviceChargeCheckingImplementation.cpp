#include "checkingAccountHeader.h"
#include "serviceChargeChecking.h"

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
	int returned=0;
	if (numberOfChecksWritten<numberOfChecksAllowable)
	{
		numberOfChecksWritten++;
		returned=checkingAccount::writeCheck(amount);
	}
	else
	{
		double charges=checkingAccount::getServiceCharges();
		
		returned=checkingAccount::writeCheck(amount);
		checkingAccount::withdraw(charges);
	}
	return returned;
}

void serviceChargeChecking::getAccountInfo()
{
	checkingAccount::getAccountInfo();
	cout<<"The maximum number of checks allowable for this account is: "<<numberOfChecksAllowable<<"\n"
	<<"The number of checks currently written is: "<<numberOfChecksWritten<<endl;
}
