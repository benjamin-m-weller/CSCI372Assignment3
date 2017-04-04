#ifndef noServiceChargeChecking_H
#define noServiceChargeChecking_H
//This is my definition of the checking account.

#include "checkingAccountHeader.h"

using namespace std;

class noServiceChargeChecking: public checkingAccount
{
public:
	
	int writeCheck(double amount);
	
	void getAccountInfo() const;
	
	void setminimumBalance(double minimumBalance);

	double getminimumBalance();

	void setinterestRate(double interestRate);

	double getinterestRate();
	
	void postInterest();
	
	noServiceChargeChecking();
	noServiceChargeChecking(double intRate, double minBal, int accountNumber, double balance, string ownerName);
	
private:
	double minimumBalance;
	double interestRate;
};
#endif
