#include "Atm.h"
#include "Account.h"
#include<vector>

void ATM::mainMenu(int id) {
  int choice;
  while(true) {
    cout << "\n1. View Current Balance\n2. Withdraw Money\n3. Deposit Money"
         << "\n4. Log out\n5. Exit\n";
    cin >> choice;
    if (choice == 1) { viewBalance(id); }
    else if (choice == 2) { withdraw(id); }
    else if (choice == 3) { deposit(id); }
    else if (choice == 4) { break; }
    else if (choice == 5) { exit(0); }
    else { cout << "Invalid input\n"; cin.clear(); cin.ignore(1000, '\n'); }
  }
}

void ATM::viewBalance(int id) {
  cout << "\nBalance: " << accounts[id].getBalance() << endl;
}

void ATM::withdraw(int id) {
  double withdrawal;
  cout << "\nEnter amount to withdraw: ";
  cin >> withdrawal;
  accounts[id].withdraw(withdrawal);
}

void ATM::deposit(int id) {
  int depositAmount;
  cout << "\nEnter amount to deposit: ";
  cin >> depositAmount;
  if (!cin) {
    cout << "\nInvalid input!\n";
    return;
  } else if (depositAmount > 200) {
    cout << "\nDeposit amount too high!\n";
    return;
  } else if (depositAmount % 20 != 0) {
    cout << "\nDeposit must be a multiple of 20!\n";
    return;
  }
  accounts[id].deposit(depositAmount);
}

ATM::ATM() {
  for (int i = 0; i < 10; i++) {
    accounts.push_back(Account(to_string(i), 50, 0));
  }
}

void ATM::logIn(int id) {
  mainMenu(id);
}
