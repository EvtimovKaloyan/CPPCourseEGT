#include "Circle.h"

Circle::Circle(std::string colour, std::string type) : Shape(colour, type){}

void Circle::draw() {
	
	Shape::draw();
}