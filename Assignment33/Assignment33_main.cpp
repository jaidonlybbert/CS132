// Jaidon Lybbert
// March 6, 2019
// Assignment 33: Date/Time Conversion

// 09/27/1999 01:01:01 AM

#include<iostream>
#include "dateHandler.h"
#include "timeHandler.h"
#include "exceptionHandler.h"

using namespace std;

int main() {
  string date;
  string runAgain = "y";

  while (runAgain == "y" || runAgain == "Y") {
    cout << "\nInput a date with the following format: "
         << "\"MM/DD/YYYY HH:MM:SS Meridian\"\n";
    getline(cin, date);

    try {
      cout << DateHandler::convertDate(date) << endl;
    } catch(ExceptionHandler e) {
      cout << e.what() << endl;
      continue;
    }

    cout << "Continue? (y/n): ";
    cin >> runAgain;
    cin.clear();
    cin.ignore(1000, '\n');
  }

  return 0;
}
