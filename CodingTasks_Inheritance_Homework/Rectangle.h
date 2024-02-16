#pragma once

#include "Shape.h"

class Rectangle : public Shape {

public:

	Rectangle(std::string colour);

	void draw() override;

private:

	std::string shapeType = " rectangle";
};