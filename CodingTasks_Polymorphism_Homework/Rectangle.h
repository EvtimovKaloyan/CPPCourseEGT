#pragma once

#include "Shape.h"

class Rectangle : public Shape {

public:

	Rectangle(std::string, double, double);

	void draw();

	double area() override;

private:

	double width;
	double height;
};