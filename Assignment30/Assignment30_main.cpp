// Jaidon Lybbert
// March 3, 2019
// Assignment 30: Point3D

#include<iostream>
#include<vector>
#include "Point.h"

using namespace std;

int main() {
  Point* points[3];
  Point3D* points3D[3];
  int x, y, z;

  for (int i = 0; i < 3; i++) {
    cout << "Point " << i + 1 << ":\n";
    cout << "Enter x coordinate: ";
    cin >> x;
    cout << "Enter y coordinate: ";
    cin >> y;
    points[i] = new Point(x, y);
  }

  cout << endl;

  for (int i = 0; i < 3; i++) {
    cout << "Point3D " << i + 1 << ":\n";
    cout << "Enter x coordinate: ";
    cin >> x;
    cout << "Enter y coordinate: ";
    cin >> y;
    cout << "Enter z coordinate: ";
    cin >> z;
    points3D[i] = new Point3D(x, y, z);
  }

  cout << "\nDistances:\n";
  cout << "Point 1 to 2: " << Point::distance(*points[0], *points[1]) << endl;
  cout << "Point 2 to 3: " << points[1]->distance(*points[2]) << endl;
  cout << "Point 1 to 3: " << points[0]->distance(points[2]) << endl;
  cout << endl;
  cout << "Point3D 1 to 2: " << Point3D::distance(*points3D[0], *points3D[1]) << endl;
  cout << "Point3D 2 to 3: " << points3D[1]->distance(*points3D[2]) << endl;
  cout << "Point3D 1 to 3: " << points3D[0]->distance(points3D[2]) << endl;
  cout << endl;

  return 0;
}
