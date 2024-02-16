#define _USE_MATH_DEFINES
#include <cmath>

#include "Circle.h"

Circle::Circle(std::string color, double radius) : Shape(color), radius(radius) {}

void Circle::draw() {

	std::cout << "Drawing a " << this->color << " circle" << std::endl;
}

double Circle::area() {
	return M_PI * this->radius * this->radius;
}