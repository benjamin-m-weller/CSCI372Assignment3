#include <iostream>
#include "highInterestSavingsHeader.h"
#include "savingsAccountHeader.h"

using namespace std;

	double highInterestSavings::getServiceCharges()
	{
		return serviceCharges;
	}
	
	void highInterestSavings::setServiceCharges(double serviceCharges)
	{
		this->serviceCharges=serviceCharges;
	}
	
	void highInterestSavings::applyServiceCharges()
	{
		if (savingsAccount::getBalance()<minimumBalance)
		{
			savingsAccount::withdraw(serviceCharges);
		}
	}
	
	double highInterestSavings::getMinimumBalance()
	{
		return minimumBalance;
	}
	
	void highInterestSavings::setMinimumBalance(double minimumBalance)
	{
		this->minimumBalance=minimumBalance;	
	}
	
	void highInterestSavings::setInterestRate(double amount)
	{
		savingsAccount::setInterestRate(amount+.05);
	}
	
	void highInterestSavings::postInterest()
	{
		if (bankAccount::getBalance()>0)
		{
		bankAccount::setBalance((1+interestRate)*bankAccount::getBalance());
		}
	}
	
	void highInterestSavings::getAccountInfo() const
	{
		savingsAccount::getAccountInfo();
		cout<<"The minimum balance of this account is: "<<minimumBalance<<"\n"
		<<"Please notice that if you pass the same number for the interest rate, that the high interest checking account has higher values."<<endl;
	}
	
	highInterestSavings::highInterestSavings()
	:savingsAccount()
	{
		//Nothing
	}
	
	highInterestSavings::highInterestSavings(int accNumber, double bal, double interestRate, double minimumBalance, double serviceCharges, string ownerName)
	:savingsAccount(accNumber, bal, ownerName, interestRate)
	{
		this->serviceCharges=serviceCharges;
		this->minimumBalance=minimumBalance;
		setInterestRate(interestRate);
	}
