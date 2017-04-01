#ifndef noServiceChargeChecking_H
#define noServiceChargeChecking_H
//This is my definition of the checking account.

#include "checkingAccountHeader.h"

using namespace std;

class noServiceChargeChecking: public checkingAccount
{
public:
	//Removing the service charge functionality
	double  getServiceCharges();
	void setServiceCharges(double amount);
	
	noServiceChargeChecking();
	noServiceChargeChecking(double intRate, double minBal, double serCharges, int checkNum, int accountNumber, double balance, string ownerName);
}
#endif
