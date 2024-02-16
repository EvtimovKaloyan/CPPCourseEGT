#include "Rectangle.h"

Rectangle::Rectangle(double side1, double side2) : Shape(side1) {setSideB(side2);}

void Rectangle::setSideB(double side2) {this->sideB = side2;}

double Rectangle::getSideB() const {return this->sideB;}

void Rectangle::draw() {
	std::cout << "Drawing a...rectangle: " << std::endl;
	Shape::draw();
}

double Rectangle::calculateArea() {

	double rectangleArea = Shape::getRadiusOrSideA() * this->getSideB();

	return rectangleArea;
}

double Rectangle::calculatePerimeter() {

	double rectanglePerimeter = ( Shape::getRadiusOrSideA() + this->getSideB() ) * 2;

	return rectanglePerimeter;
}