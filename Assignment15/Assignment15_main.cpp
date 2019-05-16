// Jaidon Lybbert
// February 1, 2019
// Assignment 15: The Car Class

#include<iostream>
#include<vector>
#include "car.h"
using namespace std;


void accelerate(Car garage[5]) {
  int racerNum;
  double deltaV;
  cout << "Enter car to accelerate (integer in range 1-5): ";
  cin >> racerNum;
  while (!cin || racerNum < 1 || racerNum > 5) {
    cout << "Invalid input: must be integer in range 1-5: ";
    cin.clear();
    cin.ignore(1000, '\n');
    cin >> racerNum;
  }
  cout << "Enter increase in velocity: ";
  cin >> deltaV;
  garage[racerNum - 1].accelerate(deltaV);
}


void decelerate(Car garage[5]) {
  int racerNum;
  double deltaV;
  cout << "Enter car to decelerate (integer in range 1-5): ";
  cin >> racerNum;
  while (!cin || racerNum < 1 || racerNum > 5) {
    cout << "Invalid input: must be integer in range 1-5: ";
    cin.clear();
    cin.ignore(1000, '\n');
    cin >> racerNum;
  }
  cout << "Enter decrease in velocity: ";
  cin >> deltaV;
  garage[racerNum - 1].decelerate(deltaV);
}


void passTime(Car garage[5]) {
  double deltaT;
  cout << "Enter length of time to pass: ";
  cin >> deltaT;
  while (!cin || deltaT < 0) {
    cout << "Invalid input! Must be positive number: ";
    cin.clear();
    cin.ignore(1000, '\n');
    cin >> deltaT;
  }
  for (int i = 0; i < 5; i++) {
    garage[i].updatePosition(deltaT);
  }
}


void printSim(Car garage[5]) {
  int leadCar = 0;
  for (int i = 0; i < 5; i++) {
    cout << "\n\nRacer " << i + 1 << ":\nVelocity: "
         << garage[i].Car::getVelocity()
         << "\nPosition: " << garage[i].getXPos() << endl;
    if (garage[i].getXPos() > garage[leadCar].getXPos())
      leadCar = i;
  }
  cout << "The " << garage[leadCar].getYear() << " "
       << garage[leadCar].getMake() << " is in the lead!\n";
}


void menu(Car garage[5]) {
  int choice;
// PROMPT
  cout << "\nEnter a number to choose from the list below.\n"
       << "1. Accelerate\n2. Decelerate\n3. Simulate time passing\n"
       << "4. Print simulation\n5. Exit\n";
// INPUT
  cin >> choice;
  while (!cin || choice < 1 || choice > 5) {
    cout << "Invalid input: must be integer in range 1-5: ";
    cin.clear();
    cin.ignore(1000, '\n');
    cin >> choice;
  }
// PROCESSING AND OUTPUT
  switch (choice) {
    case 1: accelerate(garage); break;
    case 2: decelerate(garage); break;
    case 3: passTime(garage); break;
    case 4: printSim(garage); break;
    case 5: exit(0);
    default: cout << "An unexpected error has occurred.\n"; exit(0);
  }
}


int main() {
  string make;
  int year;
  Car garage[5];
  // Initialize garage
  for (int i = 0; i < 5; i++) {
    cout << "Enter the make of car " << i + 1 << ": ";
    cin >> make;
    cout << "Enter the year of car " << i + 1 << ": ";
    cin >> year;
    garage[i] = (Car(make, year));
  }
  // Run until user exits
  while (true) {
    menu(garage);
  }
  return 0;
}
