#pragma once

#include <iostream>

class Shape {

public:

	Shape(std::string);

	void draw();

protected:

	std::string color;
};
