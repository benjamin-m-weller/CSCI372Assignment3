#ifndef highInterestChecking_H
#define highInterestChecking_H
//This is my definition of the checking account.

#include "noServiceChargeChecking.h"

using namespace std;

class highInterestChecking: public noServiceChargeChecking
{
	public:
		void setInterestRate(double amount);
		void setMinimumBalance(double amount);
		
		highInterestChecking();
		highInterestChecking(double intRate, double minBal, double serCharges, int checkNum, int accountNumber, double balance, string ownerName);
}
#endif
