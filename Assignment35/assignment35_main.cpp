// Jaidon Lybbert
// March 13, 2019
// Assignment 35: Waiting In Line With Templates

#include <iostream>
#include "queue.h"

using namespace std;


int main() {
  Queue<string> queue;
  string choice = "y", name;

  while (choice == "y" || choice == "Y") {
    cout << "Enter a number to choose from the list below:\n1. Add to queue\n"
         << "2. Remove from queue\n3. Print queue\n\n";

    cin >> choice;
    if (choice == "1") {
      cin.clear();
      cin.ignore(1000, '\n');
      cout << "Enter the name of the new arrival: ";
      getline(cin, name);
      queue.add(name);
      cout << name << " added to line.\n\n";
    } else if (choice == "2") {
      cout << queue.remove() << " removed from line.\n\n";
    } else if (choice == "3") {
      queue.printQueue();
    } else {
      cout << "Invalid input! Enter number 1-3.\n";
      cin.clear();
      cin.ignore(1000, '\n');
    }

    cout << "Would you like to continue? (y/n): ";
    cin >> choice;

    cout << endl;
  }

  return 0;
}
