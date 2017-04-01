#include "bankAccountHeader.h"
#include "checkingAccountHeader.h"

double checkingAccount::getMinimumBalance()
{
	return minimumBalance;
}

void checkingAccount::setMinimumBalance(double amount)
{
	minimumBalance=amount;
}

void checkingAccount::withdraw(double amount)
{
	balance-=amount;
	isAccountBelowMinBalance();
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
	if (balance>0)
	{
		balance+=((1+interestRate)*balance);
	}
}

double checkingAccount::getServiceCharges()
{
	return serviceCharges
}

void checkingAccount::setServiceCharges(double amount)
{
	serviceCharge=amount;
}

bool checkingAccount::isAccountBelowMinBalance()
{
	if (balance<minimumBalance)
	{
		balance-=serviceCharges;
	}
}

int checkingAccount::writeCheck(double amount)
{	
	withdraw(amount);
	checkNumber++;
}

void checkingAccount::getAccountInfo()
{
	bankAccount::getAccountInfo();
	cout<<"The interest rate is: "<<getInterestRate()<<"\n"
	<<"The minimum balance is: "<<getMinimumBalance()<<"\n"
	<<"The service charge rate is: "<<getServiceCharges()<<"\n"
	<<"The total number of checks written is "<<checkNumber<<"\n"
	<<"You account is below the minimum balance: "<<isAccountBelowMinBalance()<<"\n"
	<<endl;
}


checkingAccount::checkingAccount()
:bankAccount()
{
	interestRate=0.1;
	minimumBalance=0.0;
	serviceCharges=5.0;
	checkNumber=0;
}

checkingAccount::checkingAccount(double intRate, double minBal, double serCharges, int checkNum, int accountNumber, double balance, string ownerName)
:bankAccount(accountNumber, balance, ownerName)
{
	interestRate=intRate;
	minimumBalance=minBal;
	serviceCharges=serCharges;
	checkNumber=checkNum;
}



