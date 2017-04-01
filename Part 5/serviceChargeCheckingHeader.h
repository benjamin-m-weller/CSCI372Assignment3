#ifndef serviceChargeChecking_H
#define serviceChargeChecking_H
//This is my definition of the checking account.

#include "checkingAccountHeader.h"

using namespace std;

class serviceChargeChecking: public checkingAccount
{
public:
	
	//Making this do nothing
	void postInterest();
	
	//Verify if current balance is below minimum
	bool isAccountBelowMinBalance();
	
	//Write a check
	int writeCheck(double amount);
	
	//Get account information
	void getAccountInfo()
	
	serviceChargeChecking(double intRate, double minBal, double serCharges, int checkNum, int accountNumber, double balance, string ownerName, int numberOfChecksAllowable);
	
	serviceChargeChecking();
	
private:
	int numberOfChecksAllowable;
	int numberOfChecksWritten;
}
#endif
