// Jaidon Lybbert
// March 9, 2019
// Assignment 32: InvalidTriangleException Class

#include<iostream>
#include "triangle.h"
#include "invalidTriangleException.h"

using namespace std;

double input() {
  double num;
  cin >> num;
  if(!cin) {
    throw invalid_argument("Invalid input!\n");
  }
}

int main() {
  string runAgain = "y";
  double a, b, c;
  Triangle* T;

  while(runAgain == "y" || runAgain == "Y") {
    cout << "Enter 3 side lengths:\n";
    try {
      a = input();
      b = input();
      c = input();
    } catch (invalid_argument arg) {
      cout << arg.what() << endl;
      cin.clear();
      cin.ignore(1000, '\n');
      continue;
    }

    try {
      T = new Triangle(a, b, c);
    } catch (InvalidTriangleException err){
      cout << err.what() << endl << endl;
      cin.clear();
      cin.ignore(1000, '\n');
      continue;
    }

    cout << "Area: " << T->area() << endl;
    cout << "Perimeter: " << T->perimeter() << endl;

    cout << "\nContinue? (y/n): ";
    cin >> runAgain;
  }

  return 0;
}
