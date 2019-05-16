#include "SuperInteger.h"
#include <string>
#include <vector>
#include <math.h>

SuperInteger::SuperInteger() { integer = 0; }
SuperInteger::SuperInteger(int inputInteger) { integer = inputInteger; }
int SuperInteger::getInt() const { return integer; }

bool SuperInteger::isEven() const {
  if ((integer % 2) == 0) return true;
  else return false;
}

bool SuperInteger::isOdd() const {
  if ((integer % 2) == 1) return true;
  else return false;
}

bool SuperInteger::isPrime() const {
  if (integer == 4 || integer == 1 || integer == 6) return false;
  for (int i = 1; (i * 6 + 1) < integer; i++) {
    if ((integer % 2) == 0 ||
       (integer % 3) == 0 ||
       (integer % ((6 * i) + 1) == 0) ||
       (integer % ((6 * i) - 1) == 0) ||
       (integer % (6 * i) == 0)) {
      return false;
    }
    return true;
  }
}

bool SuperInteger::isEven(int inputInteger) {
  if ((inputInteger % 2) == 0) return true;
  else return false;
}

bool SuperInteger::isOdd(int inputInteger) {
  if ((inputInteger % 2) == 1) return true;
  else return false;
}

bool SuperInteger::isPrime(int inputInteger) {
  if (inputInteger == 4 || inputInteger == 1 || inputInteger == 6) return false;
  for (int i = 1; (i * 6 + 1) < inputInteger; i++) {
    if ((inputInteger % 2) == 0 ||
       (inputInteger % 3) == 0 ||
       (inputInteger % ((6 * i) + 1) == 0) ||
       (inputInteger % ((6 * i) - 1) == 0) ||
       (inputInteger % (6 * i) == 0)) {
      return false;
    }
    return true;
  }
}

bool SuperInteger::isEven(SuperInteger inputSuperInteger){
  if ((inputSuperInteger.getInt() % 2) == 0) return true;
  else return false;
}

bool SuperInteger::isOdd(SuperInteger inputSuperInteger) {
  if ((inputSuperInteger.getInt() % 2) == 1) return true;
  else return false;
}

bool SuperInteger::isPrime(SuperInteger inputSuperInteger) {
  if (inputSuperInteger.getInt() == 4 || inputSuperInteger.getInt() == 1 ||
      inputSuperInteger.getInt() == 6) return false;
  for (int i = 1; (i * 6 + 1) < inputSuperInteger.getInt(); i++) {
    if ((inputSuperInteger.getInt() % 2) == 0 ||
       (inputSuperInteger.getInt() % 3) == 0 ||
       (inputSuperInteger.getInt() % ((6 * i) + 1) == 0) ||
       (inputSuperInteger.getInt() % ((6 * i) - 1) == 0) ||
       (inputSuperInteger.getInt() % (6 * i) == 0)) {
      return false;
    }
    return true;
  }
}

SuperInteger SuperInteger::parseInt(char inputList[]) {
  string s(inputList);
  SuperInteger resultInt(stoi(s));
  return resultInt;
}

SuperInteger SuperInteger::parseInt(string inputString) {
  SuperInteger resultInt(stoi(inputString));
  return resultInt;
}

SuperInteger SuperInteger::parseInt(vector<int> inputVector) {
  int resultInt;
  int j = 0;
  for (int i = inputVector.size() - 1; i > -1; i--) {
    resultInt += inputVector[i] * pow(10, j);
    j++;
  }
  SuperInteger resultSupInt(resultInt);
  return resultSupInt;
}
