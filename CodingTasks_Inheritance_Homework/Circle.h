#pragma once

#include "Shape.h"

class Circle : public Shape {

public:

	Circle(std::string colour);

	void draw() override;

private:

	std::string shapeType = " circle";
};