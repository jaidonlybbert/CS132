#ifndef ACCOUNT_H
#define ACCOUNT_H
#include<string>
#include<iostream>
using namespace std;

class Account {
	private:
		string id;
		double balance, annualInterestRate;

	public:
		Account();
		Account(const string& inputId, const double& inputBalance,
			const double& inputAnnualInterestRate);
		string getId() const;
		void setId();
		double getBalance() const;
		void setBalance();
		void setBalance(const double& newBalance);
		double getInterestRate() const;
		void setInterestRate();
		double getMonthlyInterestRate() const;
		double getMonthlyInterest() const;
		void withdraw(const double& amount);
		void deposit(const double& amount);
		string toString() const;
};

class CheckingAccount: public Account {
	double overdraftLimit;
public:
	CheckingAccount();
	void withdraw(const double& amount);
	string toString() const;
};

class SavingsAccount: public Account {
	double minimumBalance;
public:
	SavingsAccount();
	void withdraw(const double& amount);
	string toString() const;
};

#endif
