#ifndef checkingAccount_H
#define checkingAccount_H
//This is my definition of the checking account.

#include "bankAccountHeader.h"

using namespace std;

class checkingAccount: public bankAccount
{
public:
		
	//Minimum Balance stuff
	double  getMinimumBalance();
	void setMinimumBalance(double amount);
	
	
	//Withdraw some money to the account
	void withdraw(double amount);
	
	//Interest rate stuff
	double  getInterestRate();
	void setInterestRate(double amount);
	void postInterest();
	
	//Service charges stuff
	double  getServiceCharges();
	void setServiceCharges(double amount);
	
	//Verify if current balance is below minimum
	bool isAccountBelowMinBalance();
	
	//Write a check
	virtual int writeCheck(double amount);
	
	//Get account information
	void getAccountInfo();
		
	//Constructors
	checkingAccount();
	checkingAccount(double intRate, double minBal, double serCharges, int checkNum, int accountNumber, double balance, string ownerName);
	
	
private:
	double interestRate;
	double minimumBalance;
	double serviceCharges;
	int checkNumber;
};

#endif


