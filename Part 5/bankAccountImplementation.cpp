#include <iostream>
#include "bankAccountHeader.h"


using namespace std;

int bankAccount::getAccountNumber()
{
	return accountNumber;
}

double bankAccount::getBalance()
{
	return balance;
}

void bankAccount::setAccountNumber(int number)
{
	accountNumber=number;
}

void bankAccount::deposit(double amount)
{
	balance+=amount;
}

void bankAccount::withdraw(double amount)
{
	balance-=amount;
}

void bankAccount::setBalance(double amount)
{
	balance=amount;
}

void setOwnerName(string ownerName)
{
	this->ownerName=ownerName;
}

string getOwnerName()
{
	return ownerName;
}

bankAccount::bankAccount()
{
	//Default constructor
	accountNumber=0000;
	balance=0.0;
}

bankAccount::bankAccount(int accNumber, double bal, string ownerName)
{
	//Overloaded constructor
	accountNumber=accNumber;
	balance=bal;
	this->ownerName=ownerName;
}


