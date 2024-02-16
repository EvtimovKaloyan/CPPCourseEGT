#include "Circle.h"

Circle::Circle(std::string colour) : Shape(colour){}

void Circle::draw() {
	
	std::cout << "Drawing a " << this->shapeColour << this->shapeType << std::endl;
}