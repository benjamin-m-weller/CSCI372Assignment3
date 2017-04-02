#include <iostream>
#include "highInterestSavingsHeader.h"
#include "noServiceChargeCheckingHeader.h"

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
	
	highInterestSavings::highInterestSavings()
	:savingsAccount()
	{
		//Nothing
	}
	
	highInterestSavings::highInterestSavings(int accNumber, double bal, double interestRate, double minimumBalance, double serviceCharges, string ownerName)
	:savingsAccount(accNumber, bal, ownerName, interestRate)
	{
		//Nothing
	}
