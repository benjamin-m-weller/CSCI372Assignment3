/*
#include <iostream>

using namespace std;

int main(int argc, char** argv) 
{
	cout<<"I had an unbearable time with this project.\n"
	<<"I know how to implement inheritance in C++ and how to override functinoality, that said, I wasn't able to fully implement all the"
	<<" necessarry features of this project.\nI have commented out my main method code below. \n"
	<<"Due to the lenghty nature of this single project I prioritized other projects in an effort to have 5/6 projects compiling and functional.\n\n"
	<<"I would apprecitate your consideration of partial credit."
	<<endl;
}
*/

#include <iostream>
#include <string>
#include "bankAccountHeader.h"
#include "checkingAccountHeader.h"

#include "serviceChargeCheckingHeader.h"
#include "noServiceChargeCheckingHeader.h"
#include "highInterestCheckingHeader.h"

#include "certificateOfDepositHeader.h"

#include "savingsAccountHeader.h"
#include "highInterestSavingsHeader.h"


using namespace std;

static void spaceAndChanges()
{
	cout<<"\nAfter making some changes to the account"<<endl;
}

static void spaceMe()
{
	cout<<"\n"<<endl;
}

int main(int argc, char** argv) 
{
	
	cout<<"Checking my code."<<endl;
	
	
	serviceChargeChecking myChecking1(5.0, 1, 100, 100, "YOLO");
	myChecking1.getAccountInfo();
	
	spaceAndChanges();
	
	myChecking1.writeCheck(50);
	//Now it should withdraw and additional 5 because it is over the number of checks allowable
	myChecking1.writeCheck(50);
	myChecking1.setnumberOfChecksAllowable(100);
	myChecking1.setserviceCharges(50);
	
	myChecking1.getAccountInfo();
	
	spaceAndChanges();
	
	//Now going to test the bankAccount methods only once.
	myChecking1.setAccountNumber(0);
	myChecking1.setBalance(0);
	myChecking1.withdraw(100);
	myChecking1.deposit(100); 
	myChecking1.setOwnerName("John Doe");
	
	myChecking1.getAccountInfo();
	
	spaceMe();
	
	
	//Now going to try a noServiceChargeCheckingAccount
	//noServiceChargeChecking(double intRate, double minBal, int accountNumber, double balance, string ownerName);
	
	noServiceChargeChecking myChecking2(.05, 50, 1, 75,"John Doe");
	
	myChecking2.getAccountInfo();
	
	spaceAndChanges();
	
	myChecking2.setminimumBalance(80);
	myChecking2.setinterestRate(.025);
	myChecking2.writeCheck(50); //This won't be allowed because the account is below it's minimum balance.
	
	myChecking2.getAccountInfo();//Going to show that the check wasn't written
	
	spaceAndChanges(); //Going to show that interest was applied at the new rate
	
	myChecking2.postInterest();
	myChecking2.getAccountInfo();
	
	spaceMe();
	
	//Now going to work with the high interest checking account.
	//I'm going to modify some of the values in the noServiceChargeChecking constuctor to show their differences
	highInterestChecking myChecking3(.05, 75, 1, 175,"John Doe");
	
	//Notice how I"m still now able to write a check, and how the interest rate is increased.
	myChecking3.getAccountInfo();
	
	spaceAndChanges();
	
	myChecking3.writeCheck(50); //Won't work.
	myChecking3.postInterest(); //This will post interest at a 100% rate, thus the money should double.
	myChecking3.getAccountInfo();
	
	spaceMe();
	
	//I'm going to work with cd's now
	//certificateOfDeposit(int accNumber, double bal, string ownerName, int maturityMonths,int currentMonths,double interestRate);
	certificateOfDeposit myCD(100, 500, "John Doe", 60, 24, .05);
	
	myCD.getAccountInfo();
	
	spaceMe();
	
	myCD.setmaturityMonths(99);
	myCD.setcurrentMonths(98);
	myCD.setinterestRate(.01);
	
	spaceAndChanges();
	myCD.getAccountInfo();
	
	spaceMe();
	
	//Now moving on to a savings account.
	//savingsAccount(int accNumber, double bal, string ownerName, double interestRate);
	
	savingsAccount saveMe(100, 500, "John Doe", .05);
	
	saveMe.getAccountInfo();
	
	spaceAndChanges();
	
	saveMe.setInterestRate(.025);
	saveMe.postInterest();
	
	saveMe.getAccountInfo();
	
	spaceMe();
	
	//Now moving on to a highInterestSavingsAccount
	//Going to use the same strategy for the high interest checking account.
	
	
	//highInterestSavings(int accNumber, double bal, double interestRate, double minimumBalance, double serviceCharges, string ownerName);
	highInterestSavings saveMe2(100, 500, .05, 100, 5, "John Doe");
	
	saveMe2.getAccountInfo();
	
	spaceAndChanges();
	
	saveMe2.setMinimumBalance(50);
	saveMe2.withdraw(455);
	
	saveMe2.getAccountInfo();
	
	spaceAndChanges();
	
	//Now going to further lower the balance
	saveMe2.applyServiceCharges();
	
	saveMe2.getAccountInfo();
	
	spaceAndChanges();
	
	//Now going to increment the balance through posting intererst
	
	saveMe2.postInterest();
	
	saveMe2.getAccountInfo();

	return 0;
}
