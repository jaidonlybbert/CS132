#include<cmath>
#include "Point.h"


//==========================================
//POINT
//==========================================

//Constructors
Point::Point() {
  x = 0;
  y = 0;
}

Point::Point(const int& x, const int& y) {
  this->x = x;
  this->y = y;
}

//Mutators
void Point::setX(const int& x) {
  this->x = x;
}

void Point::setY(const int& y) {
  this->y = y;
}

//Accessors
int Point::getX() const {
  return x;
}

int Point::getY() const {
  return y;
}

//Distance
double Point::distance(const Point& a, const Point& b) {
  return ( sqrt(pow(b.getX() - a.getX(), 2) + pow(b.getY() - a.getY(), 2)) );
}

double Point::distance(const Point& a) {
  return (sqrt(
    pow(a.getX() - this->getX(), 2) +
    pow(a.getY() - this->getY(), 2)) );
}

double Point::distance(const Point* a) {
  return (sqrt(
    pow(this->getX() - a->getX(), 2) +
    pow(this->getY() - a->getY(), 2)
  ));
}


//=====================================
//POINT3D
//=====================================

//Constructors
Point3D::Point3D() {
  setX(0);
  setY(0);
  setZ(0);
}

Point3D::Point3D(const int& x, const int& y, const int& z) {
  this->setX(x);
  this->setY(y);
  this->setZ(z);
}

//Mutators
void Point3D::setZ(const int& z) {
  this->z = z;
}

//Accessors
double Point3D::getZ() const {
  return z;
}

//Distance
double Point3D::distance(const Point3D& a, const Point3D& b) {
  return (sqrt(
    pow(b.getX() - a.getX(), 2) +
    pow(b.getY() - a.getY(), 2) +
    pow(b.getZ() - a.getZ(), 2)
  ));
}

double Point3D::distance(const Point3D& a) {
  return (sqrt(
    pow(this->getX() - a.getX(), 2) +
    pow(this->getY() - a.getY(), 2) +
    pow(this->getZ() - a.getZ(), 2)
  ));
}

double Point3D::distance(const Point3D* a) {
  return (sqrt(
    pow(this->getX() - a->getX(), 2) +
    pow(this->getY() - a->getY(), 2) +
    pow(this->getZ() - a->getZ(), 2)
  ));
}
