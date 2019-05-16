#include<iostream>
#include<vector>
#include "timeHandler.h"
#include "exceptionHandler.h"

using namespace std;

std::string TimeHandler::convertTime(std::string time) {
  string numericalTime, meridian, hours, minutes, seconds;
  vector<char> numbers = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
  bool validCharacter;

  // check length of string
  if(time.length() != 11) {
    throw ExceptionHandler("Invalid string length!\n");
  }

  hours.append(time, 0, 2);
  minutes.append(time, 3, 2);
  seconds.append(time, 6, 2);
  meridian.append(time, 9, 2);
  numericalTime = hours + minutes + seconds;

  // check value for meridian
  if (meridian != "AM" && meridian != "PM") {
    throw ExceptionHandler("Invalid value for AM/PM!\n");
  }

  // check for colons and space
  if(time[2] != ':' || time[5] != ':' || time[8] != ' ') {
    throw ExceptionHandler("Missing colon or space!\n");
  }

  // check validity of characters
  for (int i = 0; i < numericalTime.size(); i++) {
    validCharacter = false;
    for (int j = 0; j < numbers.size(); j++) {
      if (numericalTime[i] == numbers[j]) {
        validCharacter = true;
        break;
      }
    }
    if (validCharacter == false) {
      throw (ExceptionHandler("Invalid characters in time!\n"));
    }
  }

  // check time is in correct range
  if (stoi(hours) > 12 || stoi(hours) < 1) {
    throw ExceptionHandler("Hours out of range!\n");
  } else if (stoi(minutes) > 60 || stoi(minutes) < 0) {
    throw ExceptionHandler("Minutes out of range!\n");
  } else if (stoi(seconds) > 60 || stoi(seconds) < 0) {
    throw ExceptionHandler("Seconds out of range!\n");
  }

  // convert hours to military
  if (meridian == "PM" && hours != "12") {
    hours = to_string(stoi(hours) + 12);
  }

  return hours + ":" + minutes + ":" + seconds;
}
