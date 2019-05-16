// Jaidon Lybbert
// February 8, 2019
// Assignment 18: The SuperInteger Class

#include<iostream>
#include "Atm.h"
#include "Account.h"
using namespace std;

int main() {
  ATM atm;
  int id;
  while(true) {
    cout << "Enter user id: ";
    cin >> id;
    atm.logIn(id);
  }

  return 0;
}
