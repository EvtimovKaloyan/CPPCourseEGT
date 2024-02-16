#pragma once

#include "Shape.h"

class Circle : public Shape {

public:

	Circle(double);

	//void setRadius(double);

	//double getRadius() const;

	void draw() override;
	double calculateArea() override;
	double calculatePerimeter() override;

private:
	double sideB;
};