#ifndef POSITION
#define POSITION

class Position {
  int xPos, yPos;
public:
  inline Position() { xPos = 0; yPos = 0; }
  inline Position(const int inputXPos, const int inputYPos) {
    xPos = inputXPos; yPos = inputYPos; }
  inline void setXPos(const int inputXPos) { xPos = inputXPos; }
  inline void setYPos(const int inputYPos) { yPos = inputYPos; }
  inline int getXPos() const { return xPos; }
  inline int getYPos() const { return yPos; }
};

#endif
