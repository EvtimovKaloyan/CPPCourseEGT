#include "Shape.h"
#include "Circle.h"
#include "Rectangle.h"

int main() {
    Shape shape("black", "shape");
    shape.draw();

    Rectangle rectangle("blue", "rectangle");
    rectangle.draw();

    Circle circle("brown", "circle");
    circle.draw();

    return 0;
}