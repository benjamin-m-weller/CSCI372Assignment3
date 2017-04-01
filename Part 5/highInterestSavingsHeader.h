#ifndef highInterestSavings_H
#define highInterestSavings_H
//This is my definition of the checking account.

#include "savingsAccountHeader.h"

using namespace std;

class highInterestSavings: public savingsAccountHeader
{
	public: 
	
	double getServiceCharges();
	void setServiceCharges(double serviceCharges);
	
	void applyServiceCharges();
	
	double getMinimumBalance();
	void setMinimumBalance();
	
	highInterestSavings();
	highInterestSavings(int accNumber, double bal, double interestRate, double minimumBalance, double serviceCharges, string ownerName);
	
	private:
		double minimumBalance;
		double serviceCharges;
}
#endif
