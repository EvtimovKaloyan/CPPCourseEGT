#include "Shape.h"
#include "Circle.h"
#include "Rectangle.h"

void PrintArea(Shape* shape) {
    std::cout << "Area is " << shape->area() << std::endl;
}

int main() {
    //Shape shape("black");     // this won't work here, as 'Shape' is an abstract class
    //shape.draw();

    Rectangle rectangle("blue", 1.5, 1.2);
    rectangle.draw();
    PrintArea(&rectangle);

    Circle circle("brown", 2);
    circle.draw();
    PrintArea(&circle);

    return 0;
}