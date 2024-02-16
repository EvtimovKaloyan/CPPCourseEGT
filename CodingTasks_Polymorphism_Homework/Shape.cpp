#include "Shape.h"

Shape::Shape(std::string colour) { this->color = colour; }

void Shape::draw() { std::cout << "Drawing a " << this->color << " shape" << std::endl; }