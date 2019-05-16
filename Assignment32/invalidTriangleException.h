#ifndef INVALID_TRIANGLE_EXCEPTION_H
#define INVALID_TRIANGLE_EXCEPTION_H

#include<iostream>
using namespace std;

class InvalidTriangleException : public exception {
public:
  const char * what() const throw();
};

#endif
