#include "Shape.h"
#include <iostream>
#include <cmath>
using namespace std;

//Shape
Shape::Shape(int myX, int myY) :x(myX), y(myY) {}
void Shape::Draw() const {
	cout << "X=" << x << " Y=" << y;
}
double Shape::GetArea() const { return 0; }

//Circle
Circle::Circle(int x, int y, int myRadius) :Shape(x, y), radius(myRadius) {}
void Circle::Draw() const {
	Shape::Draw();
	cout << " Radius=" << radius << endl;
}
double Circle::GetArea() const {
	return (3.14 * pow(radius, 2));
}

//Rect
Rect::Rect(int x, int y, int myWidth, int myHeight) :Shape(x, y), width(myWidth), height(myHeight) {}
void Rect::Draw() const {
	Shape::Draw();
	cout << " Width=" << width << " Height=" << height << endl;
}
double Rect::GetArea() const {
	return (width * height);
}