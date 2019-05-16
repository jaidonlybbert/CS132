// Jaidon Lybbert
// March 6, 2019
// Assignment 31: Hex2Dec Exception

#include<iostream>
#include<vector>
#include<cmath>

using namespace std;

unsigned int Hex2Dec(const string& hexString) {
  vector<char> hexSymbols = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A',
                       'B', 'C', 'D', 'E', 'F'};
  unsigned int Dec, digit;
  bool validString;
  Dec = 0;

  for (int i = hexString.size() - 1; i > -1; i--) {
    validString = false;
    for (int j = 0; j < hexSymbols.size(); j++) {
      if (hexString[i] == hexSymbols[j] ||
          hexString[i] == tolower(hexSymbols[j])) {
        digit = j;
        validString = true;
        break;
      }
    }
    if (validString == false) {
        throw invalid_argument("That is not a hexidecimal number!");
    }
    Dec += digit * pow(16, i);
  }

  return Dec;
}

int main() {
  string hex, runAgain;
  unsigned int dec = 0;
  runAgain = "y";

  while(runAgain == "y" || runAgain == "Y") {
    cout << "Input a hexadecimal number: ";
    cin >> hex;

    try {
      dec = Hex2Dec(hex);
    } catch(invalid_argument& arg) {
      cout << arg.what() << endl;
      continue;
    }

    cout << "Number converted to decimal: " << dec << endl;
    cout << "Continue? (y/n): ";
    cin >> runAgain;
  }

  return 0;
}
