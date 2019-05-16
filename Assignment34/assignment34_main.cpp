// Jaidon Lybbert
// March 13, 2019
// Assignment 34: Adding Even Numbers

#include<iostream>
#include "EvenNumber.h"

using namespace std;


EvenNumber operator -(EvenNumber operand1, EvenNumber operand2) {
  return EvenNumber(operand1.getValue() - operand2.getValue());
}


int main() {
  EvenNumber n1(2), n2(6), result;

  cout << "Even numbers " << n1.getValue() << " and " << n2.getValue()
       << " created.\n";

  result = n2 - n1;

  cout << n2.getValue() << " - " << n1.getValue() << " = "
       << result.getValue() << endl;

  result = n1 + n2;

  cout << n2.getValue() << " + " << n1.getValue() << " = "
       << result.getValue() << endl;

  result = n1 * n2;

  cout << n2.getValue() << " * " << n1.getValue() << " = "
       << result.getValue() << endl;

  return 0;
}
