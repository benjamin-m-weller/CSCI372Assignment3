#ifndef serviceChargeChecking_H
#define serviceChargeChecking_H
//This is my definition of the checking account.

#include "checkingAccountHeader.h"

using namespace std;

class serviceChargeChecking: public checkingAccount
{
public:
	
	void setnumberOfChecksAllowable(int numberOfChecksAllowable);

	int getnumberOfChecksAllowable();

	void setserviceCharges(double serviceCharges);

	double getserviceCharges();

		
	//Write a check
	int writeCheck(double amount);
	
	//Get account information
	void getAccountInfo() const;
	
	serviceChargeChecking(double serCharges, int numberOfChecksAllowable, int accountNumber, double balance, string ownerName);
	
	serviceChargeChecking();
	
private:
	int numberOfChecksAllowable;
	double serviceCharges;
};
#endif
