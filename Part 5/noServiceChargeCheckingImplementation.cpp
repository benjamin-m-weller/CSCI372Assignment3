#include <iostream>
#include "checkingAccountHeader.h"
#include "noServiceChargeCheckingHeader.h"

using namespace std;

int writeCheck(double amount)
{
	checkingAccount::withdraw(amount);
	return checkingAccount::getCheckNumber();
}

void serviceChargeChecking::getAccountInfo()
{
	cout<<"Hello this is the bank account information\n"
	<<"Your bank account number is: "<<bankAccount::getAccountNumber()<<"\n"
	<<"Your account balance is: "<<bankAccount::getBalance()<<"\n"
	<<"The owner of this account is: "<<bankAccount::getOwnerName()<<"\n"
	<<"The interest rate on this account is: "<<interestRate<<"\n"
	<<endl;
}

noServiceChargeChecking::noServiceChargeChecking()
:checkingAccount()
{
	//Nothing
}

noServiceChargeChecking::noServiceChargeChecking(double intRate, double minBal, double serCharges, int checkNum, int accountNumber, double balance, string ownerName)
:checkingAccount(intRate, minBal, serCharges, checkNum, accountNumber, balance, ownerName)
{
	//Nothing
}

