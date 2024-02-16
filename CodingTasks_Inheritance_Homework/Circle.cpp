#include "Circle.h"

Circle::Circle(std::string color) : Shape(color) {}

void Circle::draw() {

	std::cout << "Drawing a " << this->color << " circle" << std::endl;
}
