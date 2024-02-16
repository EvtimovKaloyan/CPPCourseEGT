#pragma once

#include "Shape.h"

class Circle : public Shape {

public:

	Circle(std::string colour, std::string type);

	void draw() override;

private:

	std::string shapeType;
};