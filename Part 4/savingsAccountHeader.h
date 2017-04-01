#ifndef savingsAccount_H
#define savingsAccount_H
//This is my definition of the savings account.

#include "bankAccountHeader.h"

using namespace std;

class savingsAccount: public bankAccount
{
public:
	
	//Overrride base class method
	//Withdraw some money to the account
	void withdraw(double amount);
	
	//Interest rate stuff
	double  getInterestRate();
	void setInterestRate(double amount);
	void postInterest();
	
	
	//Get account information
	void getAccountInfo();
		
	//Constructors
	savingsAccount();
	savingsAccount(int accNumber, double bal, double interestRate);
	
	
private:
	double interestRate;
};

#endif

