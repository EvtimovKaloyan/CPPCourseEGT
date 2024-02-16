#pragma once

#include <iostream>

class Shape {

public:
	Shape(std::string, std::string);

	virtual void draw();

	virtual ~Shape() {};
	
protected:
	std::string shapeColour;

private:
	std::string shapeType;
};