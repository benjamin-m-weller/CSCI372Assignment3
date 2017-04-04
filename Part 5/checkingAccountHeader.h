#ifndef checkingAccount_H
#define checkingAccount_H
//This is my definition of the checking account.

#include "bankAccountHeader.h"

using namespace std;

class checkingAccount: public bankAccount
{
public:
	
	/*	
	//Minimum Balance stuff
	double  getMinimumBalance();
	void setMinimumBalance(double amount);
	
	
	
	//Interest rate stuff
	double  getInterestRate();
	void setInterestRate(double amount);
	void postInterest();
	
	//Service charges stuff
	double  getServiceCharges();
	void setServiceCharges(double amount);
	
	//Verify if current balance is below minimum
	bool isAccountBelowMinBalance();
	*/
	
	//Write a check
	virtual int writeCheck(double amount) =0;
	
	virtual void getAccountInfo() const;
	
	//Withdraw some money from the account
	void withdraw(double amount);
	
	
	int getCheckNumber();
	void incrementCheckNumber();
			
	//Constructors
	checkingAccount();
	checkingAccount(int accountNumber, double balance, string ownerName);
	
	
private:
	int checkNumber;
	
};

#endif


