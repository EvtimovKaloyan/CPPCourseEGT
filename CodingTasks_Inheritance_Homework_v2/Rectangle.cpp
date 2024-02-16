#include "Rectangle.h"

Rectangle::Rectangle(std::string colour, std::string type) : Shape(colour, type) {}

void Rectangle::draw() { 
	
	Shape::draw();
}