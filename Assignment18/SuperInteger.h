#ifndef SUPER_INTEGER_H
#define SUPER_INTEGER_H

#include<iostream>
#include<vector>
using namespace std;

class SuperInteger {
  int integer;

public:
  SuperInteger();
  SuperInteger(int inputInteger);

  int getInt() const;

  bool isEven() const;
  bool isOdd() const;
  bool isPrime() const;

  static bool isEven(int inputInteger);
  static bool isOdd(int inputInteger);
  static bool isPrime(int inputInteger);

  static bool isEven(SuperInteger inputSuperInteger);
  static bool isOdd(SuperInteger inputSuperInteger);
  static bool isPrime(SuperInteger inputSuperInteger);

  static SuperInteger parseInt(char inputList[]);
  static SuperInteger parseInt(string inputString);
  static SuperInteger parseInt(vector<int>);
};

#endif
