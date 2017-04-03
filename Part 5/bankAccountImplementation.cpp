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

void bankAccount::setOwnerName(string ownerName)
{
	this->ownerName=ownerName;
}

string bankAccount::getOwnerName()
{
	return ownerName;
}

void bankAccount::getAccountInfo() const
{
	cout << "Account Name: " << ownerName << ", Account Number: " << accountNumber << ", Balance: $" << balance;
}


bankAccount::bankAccount()
{
	//Default constructor
}

bankAccount::bankAccount(int accNumber, double bal, string ownerName)
{
	//Overloaded constructor
	accountNumber=accNumber;
	balance=bal;
	this->ownerName=ownerName;
}


