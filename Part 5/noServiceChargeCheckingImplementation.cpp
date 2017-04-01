#include "checkingAccountHeader.h"
#include "noServiceChargeChecking.h"

using namespace std;

double  checkingAccountHeader::getServiceCharges()
{
	return 0.0;	
}

void checkingAccountHeader::setServiceCharges(double amount)
{
	//Actually nothing
}

noServiceChargeChecking():checkingAccount()
{
	//Nothing
}

noServiceChargeChecking(double intRate, double minBal, double serCharges, int checkNum, int accountNumber, double balance, string ownerName)
:checkingAccount(double intRate, double minBal, double serCharges, int checkNum, int accountNumber, double balance, string ownerName)
{
	//Nothing
}

