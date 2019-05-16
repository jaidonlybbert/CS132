#include<iostream>
#include "date.h"

using namespace std;

const string months[] = {
      "January", "Febuary", "March", "April", "May",
      "June", "July", "August", "September", "October", "November", "December"
};

void Date::printDate() const {
  cout << month << "/" << day << "/" << year;
}

Date::Date() {
  year = 0;
  month = 0;
  day = 0;
}

Date::Date(int inputYear, int inputMonth, int inputDay) {
  if (inputMonth < 1 || inputMonth > 12) {
    cout << "Error: there are not " << inputMonth << " months in the year.";
    exit(0);
  }
  if((inputMonth == 4 || inputMonth == 6 || inputMonth == 9 ||
      inputMonth == 11) && (inputDay > 30)) {
    cout << "Error: there are not " << inputDay << " days in "
         << months[inputMonth - 1] << "." << endl;
    exit(0);
  } else if(inputDay > 31) {
    cout << "Error: there are not " << inputDay << " days in "
         << months[inputMonth - 1] << "." << endl;
    exit(0);
  }
  year = inputYear;
  month = inputMonth;
  day = inputDay;
}

int Date::getYear() const {
  return year;
}
int Date::getMonth() const {
  return month;
}
int Date::getDay() const {
  return day;
}

void Date::compareDates(const Date& comparisonDate) const {
  int selfDateInt, comparisonDateInt;
  selfDateInt = year * 10 + month * 10 + day;
  comparisonDateInt = comparisonDate.getYear() * 10 +
                      comparisonDate.getMonth() * 10 +
                      comparisonDate.getDay();
  cout << "Sorted dates:\n";
  if(selfDateInt < comparisonDateInt) {
    this->printDate();
    cout << endl;
    comparisonDate.printDate();
    cout << endl;
  } else {
    comparisonDate.printDate();
    cout << endl;
    this->printDate();
    cout << endl;
  }
}
