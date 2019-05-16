// Jaidon Lybbert
// February 8, 2019
// Assignment 18: The SuperInteger Class

#include<iostream>
#include "SuperInteger.h"
using namespace std;

int main() {
  int integer;
  char c;
  string s;
  vector<int> vectorInt;
  char charList[] = {'0', '0', '0'};

  cout << "Enter the first digit of the number: ";
  cin >> integer;
  vectorInt.push_back(integer);
  cout << "Enter the second digit: ";
  cin >> integer;
  vectorInt.push_back(integer);
  cout << "Enter the third digit: ";
  cin >> integer;
  vectorInt.push_back(integer);
  SuperInteger superInt3 = SuperInteger::parseInt(vectorInt);

  cout << "The number is " << superInt3.getInt() << endl;
  if (SuperInteger::isPrime(superInt3)) {
    cout << "The number is prime.\n";
  }
  if (SuperInteger::isEven(superInt3)) {
    cout << "The number is even.\n";
  }
  if (SuperInteger::isOdd(superInt3)) {
    cout << "The number is odd.\n";
  }

  cout << "\nEnter the first digit of the number: ";
  cin >> c;
  charList[0] = c;
  cout << "Enter the second digit: ";
  cin >> c;
  charList[1] = c;
  cout << "Enter the third digit: ";
  cin >> c;
  charList[2] = c;
  SuperInteger superInt = SuperInteger::parseInt(charList);

  cout << "The number is " << superInt.getInt() << endl;
  if (superInt.isPrime()) {
    cout << "The number is prime.\n";
  }
  if (superInt.isEven()) {
    cout << "The number is even.\n";
  }
  if (superInt.isOdd()) {
    cout << "The number is odd.\n";
  }
  cout << endl;

  cout << "Enter a number: ";
  cin >> s;
  SuperInteger superInt2 = SuperInteger::parseInt(s);

  cout << "The number is " << superInt2.getInt() << endl;
  if (SuperInteger::isPrime(superInt2)) {
    cout << "The number is prime.\n";
  }
  if (SuperInteger::isEven(superInt2)) {
    cout << "The number is even.\n";
  }
  if (SuperInteger::isOdd(superInt2)) {
    cout << "The number is odd.\n";
  }
  cout << endl;


  return 0;
}
