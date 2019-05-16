// Jaidon Lybbert
// January 26, 2019
// Assignment 12: The Date Class
// Built with GNU bash, and Atom

#include<iostream>
using namespace std;

const string months[] = {
      "January", "Febuary", "March", "April", "May",
      "June", "July", "August", "September", "October", "November", "December"
};

class Date {

  private:
    int year, month, day;

    void printDate() const {
      cout << month << "/" << day << "/" << year;
    }

  public:
    Date() {
      year = 0;
      month = 0;
      day = 0;
    }

    Date(int inputYear, int inputMonth, int inputDay) {
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

    int getYear() const {
      return year;
    }
    int getMonth() const {
      return month;
    }
    int getDay() const {
      return day;
    }

    void compareDates(const Date& comparisonDate) const {
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
};

int main() {
  int year, month, day;

  cout << "\nDay One\n-------\n";
  cout << "Enter a year: ";
  cin >> year;
  cout << "Enter a month: ";
  cin >> month;
  cout << "Enter a day: ";
  cin >> day;
  Date dayOne(year, month, day);

  cout << "\nDay Two\n-------\n";
  cout << "Enter a year: ";
  cin >> year;
  cout << "Enter a month: ";
  cin >> month;
  cout << "Enter a day: ";
  cin >> day;
  Date dayTwo(year, month, day);
  cout << endl;

  dayOne.compareDates(dayTwo);

  return 0;
}
