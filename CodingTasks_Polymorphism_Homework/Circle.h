#pragma once

#include "Shape.h"

class Circle : public Shape {

public:

	Circle(std::string, double);

	void draw();

	double area() override;

private:

	double radius;
};