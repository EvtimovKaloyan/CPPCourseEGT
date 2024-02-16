#include "Shape.h"

Shape::Shape(std::string colour, std::string type) { this->shapeColour = colour; this->shapeType = type; }

void Shape::draw() { std::cout << "Drawing a " << this->shapeColour << ' ' << this->shapeType << std::endl; }