#ifndef ATM_H
#define ATM_H
#include<vector>
#include "Account.h"

class ATM {
  vector<Account> accounts;
  void mainMenu(int id);
  void viewBalance(int id);
  void withdraw(int id);
  void deposit(int id);
public:
  ATM();
  void logIn(int id);
};

#endif
