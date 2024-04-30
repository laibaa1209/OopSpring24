#include <iostream>
#include <cmath>

const double PI = 3.14159265359;

class Shape {
    
    public:

    double calculateCircleArea(double radius) {
        return PI * radius * radius;
    }

    double calculateRectangleArea(double length, double width) {
        return length * width;
    }

    double calculateTriangleArea(double base, double height) {
        return 0.5 * base * height;
    }

    // Methods to calculate perimeter
    double calculateCirclePerimeter(double radius) {
        return 2 * PI * radius;
    }

    double calculateRectanglePerimeter(double length, double width) {
        return 2 * (length + width);
    }

    double calculateTrianglePerimeter(double side1, double side2, double side3) {
        return side1 + side2 + side3;
    }
};

int main() {
    
    Shape shape;

    std::cout << "Area of circle with radius 5: " << shape.calculateCircleArea(5.0) << std::endl;
    std::cout << "Area of rectangle with length 4 and width 6: " << shape.calculateRectangleArea(4.0, 6.0) << std::endl;
    std::cout << "Area of triangle with base 3 and height 8: " << shape.calculateTriangleArea(3.0, 8.0) << std::endl;

    std::cout << "Perimeter of circle with radius 5: " << shape.calculateCirclePerimeter(5.0) << std::endl;
    std::cout << "Perimeter of rectangle with length 4 and width 6: " << shape.calculateRectanglePerimeter(4.0, 6.0) << std::endl;
    std::cout << "Perimeter of triangle with sides 3, 4, and 5: " << shape.calculateTrianglePerimeter(3.0, 4.0, 5.0) << std::endl;

    return 0;
}
