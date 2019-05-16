#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include "dateHandler.h"
#include "timeHandler.h"
#include "exceptionHandler.h"

using namespace std;

string DateHandler::convertDate(string date) {
  string numericalDate, time, month, day, year;
  vector<char> numbers = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
  vector<int> monthsWith30Days = {4, 6, 9, 11};
  vector<int> monthsWith31Days = {1, 3, 5, 7, 8, 10, 12};
  bool validCharacter;

  // check length of input
  if (date.size() < 22) {
    throw (ExceptionHandler("Invalid length of date!"));
  }

  month.append(date, 0, 2);
  day.append(date, 3, 2);
  year.append(date, 6, 4);
  time.append(date, 11, 11);
  time = TimeHandler::convertTime(time);
  numericalDate = month + day + year;

  // check for slashes and space
  if (date[2] != '/' || date[5] != '/' || date[10] != ' ') {
    throw (ExceptionHandler("Missing /'s or spaces!\n"));
  }

  // check validity of characters
  for (int i = 0; i < numericalDate.size(); i++) {
    validCharacter = false;
    for (int j = 0; j < numbers.size(); j++) {
      if (numericalDate[i] == numbers[j]) {
        validCharacter = true;
        break;
      }
    }
    if (validCharacter == false) {
      throw (ExceptionHandler("Invalid characters in date!\n"));
    }
  }

  // check if dates are in range
  if (stoi(month) < 0 || stoi(month) > 12) {
    throw ExceptionHandler("Invalid Month!\n");
  } else if ((find(monthsWith30Days.begin(), monthsWith30Days.end(), stoi(month))
      != monthsWith30Days.end()) && stoi(day) > 31) {
    throw ExceptionHandler("Invalid number of days in that month!\n");
  } else if ((find(monthsWith31Days.begin(), monthsWith31Days.end(), stoi(month))
      != monthsWith31Days.end()) && stoi(day) > 30) {
    throw ExceptionHandler("Invalid number of days in that month!\n");
  } else if (stoi(month) == 2 && stoi(day) > 28) {
    throw ExceptionHandler("Invalid number of days in that month!\n");
  } else if (stoi(day) < 1 || stoi(month) < 1 || stoi(year) < 0) {
    throw ExceptionHandler("Date must be positive!\n");
  }

  return (year + "/" + month + "/" + day + " " + time);
}
