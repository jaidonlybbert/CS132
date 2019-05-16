#include<iostream>
#include<math.h>
#include "Circle.h"
#define PI 3.14159265358979323846
using namespace std;


Circle::Circle() {
    coordinates.x = 0;
    coordinates.y = 0;
    radius = 1;
}


Circle::Circle(const double x, const double y, const double inputRadius) {
    coordinates.x = x;
    coordinates.y = y;
    radius = inputRadius;
}


Point Circle::getPoint() const { return coordinates; }


double Circle::getArea() const {
  return (radius * radius * PI);
}


double Circle::getPerimeter() const {
  return (radius * 2 * PI);
}


bool Circle::contains(Point inputCoordinates) const {
  if ((sqrt(pow((inputCoordinates.x - coordinates.x), 2) +
      pow((inputCoordinates.y - coordinates.y), 2))) < radius) {
    return true;
  } else { return false; }
}


bool Circle::contains(Circle inputCircle) const {
  if ((sqrt(pow((inputCircle.coordinates.x - coordinates.x), 2) +
      pow((inputCircle.coordinates.y - coordinates.y), 2))) +
      inputCircle.radius < radius) {
    return true;
  } else { return false; }
}


bool Circle::contains(const Circle inputCircle_0, const Circle inputCircle_1) {
  if (((sqrt(pow((inputCircle_0.coordinates.x - inputCircle_1.coordinates.x), 2)
      + pow((inputCircle_0.coordinates.y - inputCircle_1.coordinates.y), 2)))
      + inputCircle_0.radius < inputCircle_1.radius)
      ||
     ((sqrt(pow((inputCircle_0.coordinates.x - inputCircle_1.coordinates.x), 2)
      + pow((inputCircle_0.coordinates.y - inputCircle_1.coordinates.y), 2)))
      + inputCircle_1.radius < inputCircle_0.radius)) {
    return true;
  } else { return false; }
}


bool Circle::overlaps(Circle inputCircle) const {
  if ((sqrt(pow((inputCircle.coordinates.x - coordinates.x), 2) +
      pow((inputCircle.coordinates.y - coordinates.y), 2))) <
      (inputCircle.radius + radius)) {
    return true;
  } else { return false; }
}


bool Circle::overlaps(const Circle inputCircle_0, const Circle inputCircle_1) {
  if ((sqrt(pow((inputCircle_0.coordinates.x - inputCircle_1.coordinates.x), 2)
      + pow((inputCircle_0.coordinates.y - inputCircle_1.coordinates.y), 2)))
      < (inputCircle_0.radius + inputCircle_1.radius)) {
    return true;
  } else { return false; }
}
