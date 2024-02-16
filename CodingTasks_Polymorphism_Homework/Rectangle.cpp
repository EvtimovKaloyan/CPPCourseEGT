#include "Rectangle.h"

Rectangle::Rectangle(std::string color, double width, double height) : Shape(color), width(width), height(height) {}

void Rectangle::draw() {

	std::cout << "Drawing a " << this->color << " rectangle" << std::endl;
}

double Rectangle::area() {
	return this->width * this->height;
}