// Jaidon Lybbert
// January 24, 2019
// Assignment 09: The Rectangle Class
// Built with GNU bash, and Atom

#include<iostream>
#include "rectangle.h"
using namespace std;

int main() {
	// An array of rectangle objects; unique names are a pain
	rectangle array[3];
	// A loop to create three rectangles and display their properties
	for(int i = 0; i < 3; i++) {
		cout << "Rectangle " << i + 1 << ":\n";
		array[i].setWidth();
		array[i].setHeight();
		array[i].getWidth();
		array[i].getHeight();
		cout << "The area is: " << array[i].getArea() << endl;
		cout << "The perimeter is: " << array[i].getPerimeter() << endl;
		cout << endl;
	}

	return 0;
}
