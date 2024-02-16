#define _USE_MATH_DEFINES
#include <cmath>

#include "Circle.h"


Circle::Circle(double radius) : Shape(radius) {}

void Circle::draw() {
	std::cout << "Drawing a...circle: " << std::endl;
	Shape::draw();
}

double Circle::calculateArea() {

	double circleArea = M_PI * Shape::getRadiusOrSideA() * Shape::getRadiusOrSideA();

	return circleArea;
}

double Circle::calculatePerimeter() {

	double circlePerimeter = 2 * M_PI * Shape::getRadiusOrSideA();

	return circlePerimeter;
}