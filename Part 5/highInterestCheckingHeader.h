#include <iostream>
#ifndef highInterestChecking_H
#define highInterestChecking_H
//This is my definition of the checking account.

#include "noServiceChargeCheckingHeader.h"

using namespace std;

class highInterestChecking: public noServiceChargeChecking
{
	public:
		void setInterestRate(double amount);
		void setMinimumBalance(double amount);
		
		void getAccountInfo();
		
		highInterestChecking();
		highInterestChecking(double intRate, double minBal, double serCharges, int checkNum, int accountNumber, double balance, string ownerName);
};
#endif
