#include <iostream>
#include "bankAccountHeader.h"
#include "checkingAccountHeader.h"
#include "savingsAccountHeader.h"

using namespace std;

int main(int argc, char** argv) 
{
	//checkingAccount(double intRate, double minBal, double serCharges, int checkNum, int accountNumber, double balance);
	checkingAccount *myChecking=new checkingAccount(0.0, 0.0, 5.00, 0, 0000, 0.0);
	
	cout<<"The account currently stands at: "<<endl;
	myChecking->getAccountInfo();
	
	cout<<"I'm going to make some changes and demonstrate that my class works."<<endl;
	myChecking->withdraw(100.0);
	cout<<"After withdrawing some of the money the current balance is: "<<myChecking->getBalance()<<endl;
	myChecking->writeCheck(100.0);
	cout<<"After writing a check against the account, the balance is: "<<myChecking->getBalance()<<endl;
	cout<<"You'll notice that both times there was a service charge applied."<<endl;
	myChecking->deposit(1000);
	cout<<"After making a sizeable deposit, the balance is: "<<myChecking->getBalance()<<endl;
	myChecking->postInterest();
	cout<<"After posting interest the balance is: "<<myChecking->getBalance()<<endl;
	
	//Now going to change fundamental parts of the account.
	cout<<"I'm now going to change fundamental parts of the account."<<endl;
	myChecking->setAccountNumber(1738);
	myChecking->setInterestRate(.05);
	myChecking->setMinimumBalance(20.0);
	myChecking->setServiceCharges(10.00);
	
	cout<<"After some changes, the account now stands at: "<<endl;
	myChecking->getAccountInfo();
	

	
	cout<<"\n\nNow I'm going to output info about my savings account."<<endl;
	
	savingsAccount *mySavings=new savingsAccount(0, 0.0, 0.05);
	
	cout<<"The account currently stands at: "<<endl;
	mySavings->getAccountInfo();
	
	cout<<"I'm going to make some changes and demonstrate that my class works."<<endl;
	mySavings->withdraw(100.0);
	cout<<"After withdrawing some of the money the current balance is: "<<mySavings->getBalance()<<endl;
	mySavings->deposit(1000);
	cout<<"After making a sizeable deposit, the balance is: "<<mySavings->getBalance()<<endl;
	mySavings->postInterest();
	cout<<"After posting interest the balance is: "<<mySavings->getBalance()<<endl;
	
	//Now going to change fundamental parts of the account.
	cout<<"I'm now going to change fundamental parts of the account."<<endl;
	mySavings->setAccountNumber(1738);
	mySavings->setInterestRate(.05);
	
	
	cout<<"After some changes, the account now stands at: "<<endl;
	mySavings->getAccountInfo();
	
	
	
	return 0;
}

