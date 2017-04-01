#include "highInterestChecking.h"
#include "noServiceChargeChecking.h"

using namespace std;

	double highInterestSavings::getServiceCharges()
	{
		return serviceCharges;
	}
	
	void highInterestSavings::setServiceCharges(double serviceCharges)
	{
		this.serviceCharges=serviceCharges;
	}
	
	void highInterestSavings::applyServiceCharges()
	{
		if (savingsAccount::getBalance()<minumumBalance)
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
		this.minimumBalance=minimumBalance;	
	}
	
	highInterestSavings::highInterestSavings()
	:checkingAccount()
	{
		//Nothing
	}
	
	highInterestSavings::highInterestSavings(int accNumber, double bal, double interestRate, double minimumBalance, double serviceCharges, string ownerName)
	:bankAccount(accountNumber, balance, ownerName)
	{
		//Nothing
	}
