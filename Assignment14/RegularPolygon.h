#ifndef REGULAR_POLYGON
#define REGULAR_POLYGON
#include "Position.h"

class RegularPolygon {
  int numberOfSides;
  double sideLength;
  Position thisPosition;
public:
  RegularPolygon();
  RegularPolygon(const int inputNumSides, const double inputSideLength);
  RegularPolygon(const int inputNumSides, const double inputSideLenght,
                 const Position inputPosition);
  inline int getNumberOfSides() const { return numberOfSides; }
  inline double getSideLength() const { return sideLength; }
  inline Position getPosition() const { return thisPosition; }
  inline void setNumberOfSides(const int inputNumSides) {
    numberOfSides = inputNumSides; }
  inline void setSideLength(const int inputSideLength) {
    sideLength = inputSideLength; }
  inline void setPosition(const Position inputPos) { thisPosition = inputPos; }
  double getArea() const;
  double getPerimeter() const;
};

#endif
