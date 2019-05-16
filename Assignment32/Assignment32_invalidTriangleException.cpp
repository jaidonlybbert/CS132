#include "invalidTriangleException.h"

using namespace std;

const char * InvalidTriangleException::what() const throw() {
  return "Invalid Triangle! Impossible side lengths!";
}
