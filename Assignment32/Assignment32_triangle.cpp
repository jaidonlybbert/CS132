#include<iostream>
#include<cmath>
#include "triangle.h"
#include "invalidTriangleException.h"

using namespace std;

Triangle::Triangle(double a, double b, double c) {
  if (a + b < c || a + c < b || b + c < a) {
    throw(InvalidTriangleException());
  }
  this->a = a;
  this->b = b;
  this->c = c;
}

double Triangle::area() const {
  double p = (a + b + c) / 2;
  return (sqrt(
    p * (p - a) * (p - b) * (p - c)
  ));
}

double Triangle::perimeter() const {
  return (a + b + c);
}
