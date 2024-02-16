#include "Shape.h"
#include "Circle.h"
#include "Rectangle.h"

#include <vector>
#include <iomanip>

int main() {

    Shape* firstShape = new Shape(3.14);
    Shape* secondShape = new Circle(2.2);
    Shape* thirdShape = new Rectangle(7.1, 8.2);

    std::vector<Shape*> shapes;
    shapes.push_back(firstShape);
    shapes.push_back(secondShape);
    shapes.push_back(thirdShape);

    for (Shape* shape : shapes) {
        shape->draw();
        Rectangle* rectangle = dynamic_cast<Rectangle*>(shape);
        Circle* circle = dynamic_cast<Circle*>(shape);
        
        if (rectangle) {
            std::cout << "Rectangle area is: " << std::fixed << std::setprecision(2) << shape->calculateArea() << std::endl;
            std::cout << "Rectangle perimeter is: " << std::fixed << std::setprecision(2) << shape->calculatePerimeter() << std::endl;
        }
        else if (circle) {
            std::cout << "Circle area is: " << std::fixed << std::setprecision(2) << shape->calculateArea() << std::endl;
            std::cout << "Circle perimeter is: " << std::fixed << std::setprecision(2) << shape->calculatePerimeter() << std::endl;
        }
        
    }

    return 0;
}