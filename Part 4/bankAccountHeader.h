#ifndef bankAccountHeader_H
#define bankAccountHeader_H
//This is my definition of the bank account.


class bankAccount
{
public:
	//Basic interactions with the bank account
	int getAccountNumber();
	double getBalance();
	void setBalance(double amount);
	void withdraw(double amount);
	void deposit(double amount);
	void setAccountNumber(int number);
	void getAccountInfo();
	
	
	//Constructors
	bankAccount();
	bankAccount(int accNumber, double bal);
	
	
private:
	int accountNumber;
	double balance;
};

#endif

