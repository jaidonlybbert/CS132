#include "RegularPolygon.h"
#include "Position.h"
#include<math.h>

#define PI 3.14159265

RegularPolygon::RegularPolygon() {
  numberOfSides = 3;
  sideLength = 1;
  thisPosition.setXPos(0);
  thisPosition.setYPos(0);
}

RegularPolygon::RegularPolygon(const int inputNumSides, const double inputSideLength) {
  numberOfSides = inputNumSides;
  sideLength = inputSideLength;
  thisPosition.setXPos(0);
  thisPosition.setYPos(0);
}

RegularPolygon::RegularPolygon(const int inputNumSides, const double inputSideLength,
const Position inputPosition) {
  numberOfSides = inputNumSides;
  sideLength = inputSideLength;
  thisPosition.setXPos(inputPosition.getXPos());
  thisPosition.setYPos(inputPosition.getYPos());
}

double RegularPolygon::getArea() const {
  return ((sideLength * sideLength * numberOfSides)/(4 * tan(PI / 3)));
}

double RegularPolygon::getPerimeter() const {
  return (sideLength * numberOfSides);
}
