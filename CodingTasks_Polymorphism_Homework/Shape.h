#pragma once

#include <iostream>

class Shape {

public:

	Shape(std::string);

	void draw();

	virtual double area() = 0;

	virtual ~Shape() {};

protected:

	std::string color;
};