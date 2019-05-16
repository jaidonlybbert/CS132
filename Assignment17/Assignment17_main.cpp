// Jaidon Lybbert
// February 8, 2019
// Assignment 17: The Circle Class

#include<iostream>
#include<iomanip>
#include "Circle.h"
using namespace std;

int main() {
  double xCoord, yCoord, radius;

// INPUT
  cout << "\n--------------------\nFirst Circle"
       << "\n--------------------\nEnter x coordinate: ";
  cin >> xCoord;
  cout << "Enter y coordinate: ";
  cin >> yCoord;
  cout << "Enter radius: ";
  cin >> radius;
  Circle firstCircle(xCoord, yCoord, radius);

  cout << "\n--------------------\nSecond Circle"
       << "\n--------------------\nEnter x coordinate: ";
  cin >> xCoord;
  cout << "Enter y coordinate: ";
  cin >> yCoord;
  cout << "Enter radius: ";
  cin >> radius;
  cout << endl;
  Circle secondCircle(xCoord, yCoord, radius);

// OUTPUT
  cout << setfill('.') << setw(50) << left << "One circle contains the other";
  cout << setw(10) << right;
  if (Circle::contains(firstCircle, secondCircle)) {
    cout  << "true";
  } else {
    cout << "false";
  } cout << endl;

  cout << setw(50) << left << "First circle contains second's coordinates";
  cout << setw(10) << right;
  if (firstCircle.contains(secondCircle.getPoint())) {
    cout << "true";
  } else {
    cout << "false";
  } cout << endl;

  cout << setw(50) << left << "First circle contains second circle";
  cout << setw(10) << right;
  if (firstCircle.contains(secondCircle)) {
    cout << "true";
  } else {
    cout << "false";
  } cout << endl;

  cout << setw(50) << left << "First circle overlaps second circle";
  cout << setw(10) << right;
  if (firstCircle.overlaps(secondCircle)) {
    cout << "true";
  } else {
    cout << "false";
  } cout << endl;

  cout << setw(50) << left << "One circle overlaps the other";
  cout << setw(10) << right;
  if (Circle::overlaps(firstCircle, secondCircle)) {
    cout << "true";
  } else {
    cout << "false";
  } cout << endl;

  return 0;
}
