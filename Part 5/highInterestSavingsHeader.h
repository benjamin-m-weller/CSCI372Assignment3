#include <iostream>
#ifndef highInterestSavings_H
#define highInterestSavings_H

#include "savingsAccountHeader.h"

using namespace std;

class highInterestSavings: public savingsAccount
{
	public: 
	
	double getServiceCharges();
	void setServiceCharges(double serviceCharges);
	
	void applyServiceCharges();
	
	double getMinimumBalance();
	void setMinimumBalance(double minimumBalance);
	
	void getAccountInfo();
	
	highInterestSavings();
	highInterestSavings(int accNumber, double bal, double interestRate, double minimumBalance, double serviceCharges, string ownerName);
	
	private:
		double minimumBalance;
		double serviceCharges;
};
#endif
