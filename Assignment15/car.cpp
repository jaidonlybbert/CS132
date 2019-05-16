#include "car.h"
#include<iostream>

Car::Car() {
  make = "generic";
  year = 0;
  velocity = 0;
  xPos = 0;
}

Car::Car(const std::string inputMake, const int inputYear) {
  make = inputMake;
  year = inputYear;
  velocity = 0;
  xPos = 0;
}

std::string Car::getMake() const { return make; }

int Car::getYear() const { return year; }

double Car::getVelocity() const { return velocity; }

double Car::getXPos() const { return xPos; }

void Car::updatePosition(const double deltaT) {
  xPos += (deltaT * velocity);
}

void Car::accelerate(const double deltaV) {
  if (deltaV < 0)
    std::cout << "Invalid input! Value must be positive.\n";
  else
    velocity += deltaV;
}

void Car::decelerate(const double deltaV) {
  if (deltaV > 0)
    std::cout << "Invalid input! Value must be negative.\n";
  else
    velocity += deltaV;
}
