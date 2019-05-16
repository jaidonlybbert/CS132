#ifndef REGULAR_POLYGON
#define REGULAR_POLYGON

class RegularPolygon {
  int numberOfSides;
  double sideLength;
  Position thisPosition;
public:
  RegularPolygon();
  RegularPolygon(const int inputNumSides, const double inputSideLength);
  RegularPolygon(const int inputNumSides, const double inputSideLenght,
                 const Position inputPosition);
  int getNumberOfSides() const { return numberOfSides; }
  double getSideLength() const { return sideLength; }
  Position getPosition() const { return thisPosition; }
  void setNumberOfSides(const int inputNumSides) { numberOfSides = inputNumSides; }
  void setSideLength(const int inputSideLength) { sideLength = inputSideLength; }
  void setPosition(const Position inputPos) { thisPosition = inputPos; }
};

class Position {
  int xPos, yPos;
public:
  Position();
  void setXPos(const int inputXPos) { xPos = inputXPos }
  void setYPos(const int inputYPos) { yPos = inputYPos }
  int getXPos() const { return xPos; }
  int getYPos() const { return yPos; }
};
#endif
