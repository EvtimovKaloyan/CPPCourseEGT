#pragma once

#include <iostream>

class Shape {

public:
	Shape(std::string);

	virtual void draw();
	
protected:
	std::string shapeColour = "red";

private:
	std::string shapeType = " shape";
};