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

		double getInterestRate() const;

		void setInterestRate();

		double getMonthlyInterestRate() const;

		double getMonthlyInterest() const;

		void withdraw(const double& amount);

		void deposit(const double& amount);
};

#endif
