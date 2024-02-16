#pragma once

#include <iostream>

class Shape {

public:

	Shape(double);

	void setRadiusOrSideA(double);

	double getRadiusOrSideA() const;

	virtual void draw();
	virtual double calculateArea();
	virtual double calculatePerimeter();

private:

	double radiusOrSideA;
};