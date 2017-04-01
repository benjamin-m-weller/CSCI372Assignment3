#ifndef certificateOfDeposit_H
#define certificateOfDeposit_H
//This is my definition of the checking account.

#include "bankAccountHeader.h"

using namespace std;

class certificateOfDeposit: public bankAccount
{
	public:
		void setmaturityMonths(int maturityMonths);


int getmaturityMonths();


void setcurrentMonths(int currentMonths);


int getcurrentMonths();


void setinterestRate(double interestRate);


double getinterestRate();

certificateOfDeposit();

certificateOfDeposit(int accNumber, double bal, string ownerName, int maturityMonths,int currentMonths,double interestRate);

private:
	int maturityMonths;
int currentMonths;
double interestRate;
}
