#ifndef savingsAccount_H
#define savingsAccount_H
//This is my definition of the savings account.

#include "bankAccountHeader.h"

using namespace std;

class savingsAccount: public bankAccount
{
public:
		
	//Interest rate stuff
	double  getInterestRate();
	void setInterestRate(double amount);
	void postInterest();
	
	
	//Get account information
	void getAccountInfo() const;
		
	//Constructors
	savingsAccount();
	savingsAccount(int accNumber, double bal, string ownerName, double interestRate);
	
	
private:
	double interestRate;
};

#endif


