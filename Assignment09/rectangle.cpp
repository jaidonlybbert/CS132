#include "rectangle.h"
#include<iostream>
using namespace std;

rectangle::rectangle() {
	width = 1;
	height = 1;
}

rectangle::rectangle(const int& x, const int& y) {
	width = x;
	height = y;
}

void rectangle::setHeight() {
	cout << "Enter the height of the rectangle (positive integers only): ";
	cin >> height;
	while(!cin || width < 0) {
		cin.clear();
		cin.ignore(1000, '\n');
		cout << "Invalid input: must be a positive integer: ";
		cin >> height;
	}
}

void rectangle::setWidth() {
	cout << "Enter the width of the rectangle (positive integers only): ";
	cin >> width;
	while(!cin || width < 0) {
		cin.clear();
		cin.ignore(1000, '\n');
		cout << "Invalid input: must be a positive integer: ";
		cin >> width;
	}
}

void rectangle::getWidth() const {
	cout << "The width of the rectangle is: " << width << endl;
}

void rectangle::getHeight() const {
	cout << "The height of the rectangle is: " << height << endl;
}

int rectangle::getArea() const {
	return (width * height);
}

int rectangle::getPerimeter() const {
	return ((2 * width) + (2 * height));
}
