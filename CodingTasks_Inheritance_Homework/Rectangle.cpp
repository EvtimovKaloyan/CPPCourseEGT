#include "Rectangle.h"

Rectangle::Rectangle(std::string colour) : Shape(colour){}

void Rectangle::draw() { 
	
	//Shape::draw();
	
	std::cout << "Drawing a " << this->shapeColour << " rectangle" << std::endl;
}