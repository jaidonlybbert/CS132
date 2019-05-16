#ifndef CAR
#define CAR
#include<string>

class Car {
  std::string make;
  int year;
  double velocity, xPos;
public:
  Car();
  Car(const std::string inputMake, const int inputYear);
  std::string getMake() const;
  int getYear() const;
  double getVelocity() const;
  double getXPos() const;
  void accelerate(const double deltaV);
  void decelerate(const double deltaV);
  void updatePosition(const double deltaT);
};
#endif
