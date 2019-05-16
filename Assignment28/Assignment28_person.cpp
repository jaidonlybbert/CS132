#include<iostream>
#include "person.h"

using namespace std;

// PERSON
Person::Person() {
  cout << "Enter name: ";
  cin >> name;
  cout << "Enter email: ";
  cin >> email;
  cout << "Enter phone number: ";
  cin >> phone;
  cout << "Enter street address [number street]: ";
  cin >> address.number;
  cin >> address.street;
}
void Person::print() {
  cout << "Class type: Person\nName: " << name << endl;
}


// STUDENT
Student::Student() {
  cout << "Enter class status [freshman, sophomore, junior, senior]: ";
  cin >> classStatus;
}
void Student::print() {
  cout << "Class type: Student\nName: " << name << endl;
}


// EMPLOYEE
Employee::Employee() {
  cout << "Enter office number: ";
  cin >> office;
  cout << "Enter salary: ";
  cin >> salary;
  cout << "Enter date hired [day month year]: ";
  cin >> hired.day >> hired.month >> hired.year;
  dateHired = Date(hired.day, hired.month, hired.year);
}
void Employee::print() {
  cout << "Class type: Employee\nName: " << name << endl;
}


// FACULTY
Faculty::Faculty() {
  cout << "Enter office hours [start end]: ";
  cin >> officeHours.start >> officeHours.end;
  cout << "Tenure? (y/n): ";
  cin >> hasTenure;
  if (hasTenure == "y" || hasTenure == "Y") {
    tenure = true;
  } else {
    tenure = false;
    cin.clear();
    cin.ignore(1000, '\n');
  }
}
void Faculty::print() {
  cout << "Class type: Faculty\nName: " << name << endl;
}


// STAFF
Staff::Staff() {
  cout << "Enter title: ";
  cin >> title;
}
void Staff::print() {
  cout << "Class type: Staff\nName: " << name << endl;
}
