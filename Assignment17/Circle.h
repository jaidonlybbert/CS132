#ifndef CIRCLE_H
#define CIRCLE_H

struct Point {
  double x, y;
};

class Circle {
  Point coordinates;
  double radius;
public:
  Circle();
  Circle(const double x, const double y, const double inputRadius);
  double getArea() const;
  double getPerimeter() const;
  Point getPoint() const;
  bool contains(Point inputCoordinates) const;
  bool contains(Circle inputCircle) const;
  static bool contains(const Circle inputCircle_0, const Circle inputCircle_1);
  bool overlaps(Circle inputCircle) const;
  static bool overlaps(const Circle inputCircle_0, const Circle inputCircle_1);
};

#endif
