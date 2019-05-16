#include "Account.h"
#include<iostream>
#include<string>

Account::Account() {
	id = "";
	balance = 0;
	annualInterestRate = 0;
}

Account::Account(const string& inputId, const double& inputBalance,
const double& inputAnnualInterestRate)
{
	id = inputId;
	balance = inputBalance;
	annualInterestRate = inputAnnualInterestRate;
}

string Account::getId() const {
	return id;
}

void Account::setId() {
	cout << "Enter ID: ";
	cin >> id;
}

double Account::getBalance() const {
	return balance;
}

void Account::setBalance() {
	cout << "Enter balance: ";
	cin >> balance;
}

double Account::getInterestRate() const {
	return annualInterestRate;
}

void Account::setInterestRate() {
	cout << "Enter interest rate: ";
	cin >> annualInterestRate;
	annualInterestRate /= 100;
}

double Account::getMonthlyInterestRate() const {
	return (annualInterestRate / 12);
}

double Account::getMonthlyInterest() const {
	return (getMonthlyInterestRate() * balance);
}

void Account::withdraw(const double& amount) {
	if((balance - amount) < 0) {
		cout << "Insufficient funds!" << endl;
	} else {
		balance -= amount;
	}
}

void Account::deposit(const double& amount) {
	balance += amount;
}
