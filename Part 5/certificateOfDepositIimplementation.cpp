#include <iostream>
#include <string>
#include "certificateOfDepositHeader.h"
#include "bankAccountHeader.h"

using namespace std;

void certificateOfDeposit::setmaturityMonths(int maturityMonths)
{
this->maturityMonths=maturityMonths;
}

int certificateOfDeposit::getmaturityMonths()
{
return maturityMonths;
}

void certificateOfDeposit::setcurrentMonths(int currentMonths)
{
this->currentMonths=currentMonths;
}

int certificateOfDeposit::getcurrentMonths()
{
return currentMonths;
}

void certificateOfDeposit::setinterestRate(double interestRate)
{
this->interestRate=interestRate;
}

double certificateOfDeposit::getinterestRate()
{
return interestRate;
}

void certificateOfDeposit::getAccountInfo() const
{
	bankAccount::getAccountInfo();
	cout<<"The number of months this CD requires untill maturity is: "<<maturityMonths<<"\n"
	<<"The number of months currently on this CD is: "<<currentMonths<<"\n"
	<<"The interest rate on this CD is: "<<interestRate<<"\n"
	<<endl;
}

certificateOfDeposit::certificateOfDeposit()
:bankAccount()
{
	//Nothing
}

certificateOfDeposit::certificateOfDeposit(int accNumber, double bal, string ownerName, int maturityMonths,int currentMonths,double interestRate)
:bankAccount(accNumber, bal, ownerName)
{
	this->maturityMonths=maturityMonths;
	this->currentMonths=currentMonths;
	this->interestRate=interestRate;
}
