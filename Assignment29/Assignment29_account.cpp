#include "Account.h"
#include<iostream>
#include<string>
#include<cmath>

//=================================================================
// ACCOUNT
//=================================================================
Account::Account() {
	setId();
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

void Account::setBalance(const double& newBalance) {
	balance = newBalance;
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

string Account::toString() const {
	int accountId = 0;
	string accountString;
	accountString = "ID: " + getId() +
		" || Balance: " + to_string((int)getBalance());
	return(accountString);
}


//=================================================================
// CHECKING ACCOUNT
//=================================================================

CheckingAccount::CheckingAccount() {
	overdraftLimit = 0;
}

void CheckingAccount::withdraw(const double& amount) {
	if((getBalance() - amount) < overdraftLimit) {
		cout << "Insufficient funds! $30 overdraft fee charged." << endl;
		setBalance(getBalance() - (amount + 30));
	} else {
		setBalance(getBalance() - amount);
	}
}

string CheckingAccount::toString() const {
	int accountId = 0;
	string accountString;
	accountString = "ID: " + getId() +
		" || Balance: " + std::to_string((int)getBalance());
	return(accountString);
}


//=================================================================
// SAVINGS ACCOUNT
//=================================================================

SavingsAccount::SavingsAccount() {
	minimumBalance = 0;
}

void SavingsAccount::withdraw(const double& amount) {
	if((getBalance() - amount) < minimumBalance) {
		cout << "Minimum balance subceeded! $10 fee charged." << endl;
		setBalance(getBalance() - (amount + 10));
	} else {
		setBalance(getBalance() - amount);
	}
}

string SavingsAccount::toString() const {
	int accountId = 0;
	string accountString;
	accountString = "ID: " + getId() +
		" || Balance: " + std::to_string((int)getBalance());
	return(accountString);
}
