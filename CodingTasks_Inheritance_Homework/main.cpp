#include "Shape.h"
#include "Circle.h"
#include "Rectangle.h"

int main() {
    Shape shape("black");
    shape.draw();

    Rectangle rectangle("blue");
    rectangle.draw();

    Circle circle("brown");
    circle.draw();

    return 0;
}