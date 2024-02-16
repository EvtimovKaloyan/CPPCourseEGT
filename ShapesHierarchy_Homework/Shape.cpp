#include "Shape.h"

Shape::Shape(double parameter) {setRadiusOrSideA(parameter);}

void Shape::setRadiusOrSideA(double parameter) {this->radiusOrSideA = parameter;}

double Shape::getRadiusOrSideA() const {return this->radiusOrSideA;}

void Shape::draw() {std::cout << "Drawing a..." << std::endl;}

double Shape::calculateArea() {return 0;}

double Shape::calculatePerimeter() {return 0;}