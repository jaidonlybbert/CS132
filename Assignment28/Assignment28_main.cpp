// Jaidon Lybbert
// March 2, 2019
// Assignment 28: Subclasses of Person

#include<iostream>
#include "person.h"

using namespace std;

int main() {
  Person* A;
  A = new Person;
  cout << endl;
  Student* B;
  B = new Student;
  cout << endl;
  Employee* C;
  C = new Employee;
  cout << endl;
  Faculty* D;
  D = new Faculty;
  cout << endl;
  Staff* E;
  E = new Staff;
  cout << endl;

  A->print();
  cout << endl;
  B->print();
  cout << endl;
  C->print();
  cout << endl;
  D->print();
  cout << endl;
  E->print();
  cout << endl;

  return 0;
}
