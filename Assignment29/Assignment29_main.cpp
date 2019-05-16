// jaidon Lybbert
// March 3, 2019
// Assignment 29: Checking & Savings Accounts

#include<iostream>
#include "Account.h"

using namespace std;

int main() {
  double deposit, withdrawal;

  cout << "\n===Account====\n";
  Account account;
  cout << "Enter deposit: ";
  cin >> deposit;
  account.deposit(deposit);
  cout << "Enter withdrawal: ";
  cin >> withdrawal;
  account.withdraw(withdrawal);
  cout << endl;

  cout << "\n===Checking Account===\n";
  CheckingAccount checking;
  cout << "Enter deposit: ";
  cin >> deposit;
  checking.deposit(deposit);
  cout << "Enter withdrawal: ";
  cin >> withdrawal;
  checking.withdraw(withdrawal);
  cout << endl;

  cout << "\n===Savings Account===\n";
  SavingsAccount savings;
  cout << "Enter deposit: ";
  cin >> deposit;
  savings.deposit(deposit);
  cout << "Enter withdrawal: ";
  cin >> withdrawal;
  savings.withdraw(withdrawal);
  cout << endl;

  cout << "\n---Accounts info---\n";
  cout << "Type: Account || " << account.toString() << endl;
  cout << "Type: Checkings || " << checking.toString() << endl;
  cout << "Type: Savings || " << savings.toString() << endl;

  return 0;
}
