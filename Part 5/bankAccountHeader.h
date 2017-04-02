#include <string>
#ifndef bankAccountHeader_H
#define bankAccountHeader_H

//This is my definition of the bank account.

using namespace std;

class bankAccount
{
public:
	//Basic interactions with the bank account
	int getAccountNumber();
	double getBalance();
	void withdraw(double amount);
	void deposit(double amount);
	void setAccountNumber(int number);
	virtual void getAccountInfo();
	void setOwnerName(string ownerName);
	string getOwnerName();
	void setBalance(double amount);
	
	//Constructors
	bankAccount();
	bankAccount(int accNumber, double bal, string ownerName);
	
	
private:
	int accountNumber;
	double balance;
	string ownerName;
};

#endif


