#ifndef TRIANGLE_H
#define TRIANGLE_H

class Triangle {
  double a, b, c;

public:
  Triangle(double a, double b, double c);
  double area() const;
  double perimeter() const;
};

#endif
