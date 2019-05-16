#include "RegularPolygon.h"

RegularPolygon() {
  numberOfSides = 3;
  sideLength = 1;
  thisPosition.setXPos(0);
  thisPosition.setYPos(0);
}

RegularPolygon(const int inputNumSides, const double inputSideLength) {
  numberOfSides = inputNumSides;
  sideLength = inputSideLength;
  thisPosition.setXPos(0);
  thisPosition.setYPos(0);
}

RegularPolygon(const int inputNumSides, const double inputSideLenght,
const Position inputPosition) {
  numberOfSides = inputNumSides;
  sideLength = inputSideLength;
  thisPosition.setXPos(inputPosition.getXPos());
  thisPosition.setYPos(inputPosition.getYPos());
}
