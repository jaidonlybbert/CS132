#ifndef PERSON_H
#define PERSON_H

#include<iostream>
#include "date.h"

using namespace std;

class Person {
public:
  struct Address {
    string number, street;
  };
  string name, email, phone;
  Address address;

  Person();
  virtual void print();
};


class Student: public Person {
public:
  string classStatus;

  Student();
  void print();
};


class Employee: public Person {
  struct Hired {
    int day, month, year;
  };
  string office, salary;
  Hired hired;
  Date dateHired;

public:
  Employee();
  void print();
};


class Faculty: public Employee {
  struct OfficeHours {
    string start, end;
  };
  OfficeHours officeHours;
  string hasTenure;
  bool tenure;

public:
  Faculty();
  void print();
};


class Staff: public Employee {
  string title;
public:
  Staff();
  void print();
};


#endif
