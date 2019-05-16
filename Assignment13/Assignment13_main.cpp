// Jaidon Lybbert
// February 1, 2019
// Assignment 13: Even Number Class

#include<iostream>
#include "EvenNumber.h"
using namespace std;

int main() {
  int number;

// INPUT
  cout << "\nEnter an even integer: ";
  cin >> number;
  while(!cin || (number % 2) != 0) {
    cout << "Invalid input! Must be an even integer: ";
    cin >> number;
  }

// OUTPUT
  cout << "Neighboring integers: ";
  EvenNumber userNumber(number);
  for (int i = 0; i < 3; i++) {
    userNumber.setPrevious();
  }
  for (int i = 0; i < 7; i++) {
    cout << userNumber.getValue() << " ";
    userNumber.setNext();
  }
  cout << "\n\n";

  return 0;
}
