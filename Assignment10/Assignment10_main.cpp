// Jaidon Lybbert
// January 24, 2019
// Assignment 10: The Account Class
// Built with GNU bash, and Atom

#include<iostream>
#include<iomanip>
using namespace std;

class Account {
	private:
		string id;
		double balance, annualInterestRate;

	public:
		Account() {
			id = "";
			balance = 0;
			annualInterestRate = 0;
		}

		Account(const string& inputId, const double& inputBalance,
		const double& inputAnnualInterestRate)
		{
			id = inputId;
			balance = inputBalance;
			annualInterestRate = inputAnnualInterestRate;
		}

		string getId() const {
			return id;
		}

		void setId() {
			cout << "Enter ID: ";
			cin >> id;
		}

		double getBalance() const {
			return balance;
		}

		void setBalance() {
			cout << "Enter balance: ";
			cin >> balance;
		}

		double getInterestRate() const {
			return annualInterestRate;
		}

		void setInterestRate() {
			cout << "Enter interest rate: ";
			cin >> annualInterestRate;
			annualInterestRate /= 100;
		}

		double getMonthlyInterestRate() const {
			return (annualInterestRate / 12);
		}

		double getMonthlyInterest() const {
			return (getMonthlyInterestRate() * balance);
		}

		void withdraw(const double& amount) {
			if((balance - amount) < 0) {
				cout << "Insufficient funds!" << endl;
			} else {
				balance -= amount;
			}
		}

		void deposit(const double& amount) {
			balance += amount;
		}
	};


int main() {
	Account john("John", 957, 0.05);
	Account user;
	double depositAmount, withdrawAmount;

	cout << "Account setup:\n";
	user.setId();
	user.setBalance();
	user.setInterestRate();
	cout << "Enter amount to deposit: ";
	cin >> depositAmount;
	user.deposit(depositAmount);
	cout << "Enter amount to withdraw: ";
	cin >> withdrawAmount;
	user.withdraw(withdrawAmount);
	cout << endl;

	cout << fixed
			 << setprecision(2)
			 << user.getId() << "'s account details:\n"
			 << "ID: " << user.getId()
			 << "\nBalance: " << user.getBalance()
			 << "\nAnnual interest rate: " << user.getInterestRate() * 100
			 << "%\nMonthly interest rate: " << user.getMonthlyInterestRate() * 100
			 << "%\n"
			 << "Monthly interest: " << user.getMonthlyInterest() << endl << endl;

	cout << fixed
			 << setprecision(2)
	  	 << "John's account details:\n"
 			 << "ID: " << john.getId()
	 		 << "\nBalance: " << john.getBalance()
	 		 << "\nAnnual interest rate: " << john.getInterestRate() * 100
	 		 << "%\nMonthly interest rate: " << john.getMonthlyInterestRate() * 100
			 << "%\n"
			 << "Monthly interest: " << john.getMonthlyInterest() << endl;

	return 0;
}
