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

void bankAccount::getAccountInfo()
{
	cout<<"Hello this is the bank account information\n"
	<<"Your bank account number is: "<<getAccountNumber()<<"\n"
	<<"Your account balance is: "<<getBalance()<<endl;
}


bankAccount::bankAccount()
{
	//Default constructor
	accountNumber=0000;
	balance=0.0;
}

bankAccount::bankAccount(int accNumber, double bal)
{
	//Overloaded constructor
	accountNumber=accNumber;
	balance=bal;
}

