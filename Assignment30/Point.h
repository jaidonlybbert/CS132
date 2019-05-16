#ifndef POINT_H
#define POINT_H

class Point {
  int x, y;

public:
  Point();
  Point(const int& x, const int& y);
  void setX(const int& x);
  void setY(const int& y);
  int getX() const;
  int getY() const;

  static double distance(const Point& a, const Point& b);
  double distance(const Point& a);
  double distance(const Point* a);
};


class Point3D: public Point {
  int z;

public:
  Point3D();
  Point3D(const int& x, const int& y, const int& z);
  void setZ(const int& z);
  double getZ() const;

  using Point::distance;
  static double distance(const Point3D& a, const Point3D& b);
  double distance(const Point3D& a);
  double distance(const Point3D* a);
};

#endif
