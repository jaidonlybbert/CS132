// Jaidon Lybbert
// February 1, 2019
// Assignment 14: Regular Polygon

#include<iostream>
#include<iomanip>
#include "RegularPolygon.h"
using namespace std;

int main() {
  int numSides, xPos, yPos;
  double sideLength;

// INPUT
  // initialize first polygon
  RegularPolygon poly1;

  // initialize second polygon
  cout << "\nEnter the number of sides in the second polygon: ";
  cin >> numSides;
  cout << "Enter the length of the sides: ";
  cin >> sideLength;
  RegularPolygon poly2(numSides, sideLength);

  // initialize third polygon
  cout << "\nEnter the number of sides in the third polygon: ";
  cin >> numSides;
  cout << "Enter the length of the sides: ";
  cin >> sideLength;
  cout << "Enter the x position: ";
  cin >> xPos;
  cout << "Enter the y position: ";
  cin >> yPos;
  Position position(xPos, yPos);
  RegularPolygon poly3(numSides, sideLength, position);

// OUTPUT
  cout << setprecision(2) << fixed;
  cout << "\nFirst polygon:\nNumber of sides: " << poly1.getNumberOfSides()
       << "\nSide Lengths: " << poly1.getSideLength() << "\nPosition: "
       << poly1.getPosition().getXPos() << ", " << poly1.getPosition().getYPos()
       << "\nPerimeter: " << poly1.getPerimeter() << "\nArea: "
       << poly1.getArea() << "\n";

  cout << "\n\nSecond polygon:\nNumber of sides: " << poly2.getNumberOfSides()
       << "\nSide Lengths: " << poly2.getSideLength() << "\nPosition: "
       << poly2.getPosition().getXPos() << ", " << poly2.getPosition().getYPos()
       << "\nPerimeter: " << poly2.getPerimeter() << "\nArea: "
       << poly2.getArea() << "\n";

  cout << "\n\nThird polygon:\nNumber of sides: " << poly3.getNumberOfSides()
       << "\nSide Lengths: " << poly3.getSideLength() << "\nPosition: "
       << poly3.getPosition().getXPos() << ", " << poly3.getPosition().getYPos()
       << "\nPerimeter: " << poly3.getPerimeter() << "\nArea: "
       << poly3.getArea() << "\n\n";

  return 0;
}
