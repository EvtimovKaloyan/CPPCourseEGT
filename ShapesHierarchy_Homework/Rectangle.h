#pragma once

#include "Shape.h"

class Rectangle : public Shape {

public:

	Rectangle(double, double);

	void setSideB(double);

	double getSideB() const;

	void draw() override;
	double calculateArea() override;
	double calculatePerimeter() override;

private:
	double sideB;
};