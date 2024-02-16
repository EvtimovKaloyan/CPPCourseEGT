#include "Shape.h"

Shape::Shape(std::string colour) { this->shapeColour = colour; }

void Shape::draw() { std::cout << "Drawing a " << this->shapeColour << this->shapeType << std::endl; }