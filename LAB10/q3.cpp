//programmer: Laiba Bint-e-Zia
//id: 23K-0006

#include <iostream>

class Shape {

    private:

    double area;  

    public:

    Shape() {}
    Shape(double a) : area(a) {}

    Shape operator+(Shape& other) {
        Shape obj;
        obj.area = area + other.area;
        return obj.area;
    }

    void displayArea() {
        std::cout << "Area: " << area << std::endl;
    }

};

int main() {

    Shape shape1(25.5);  
    Shape shape2(15.5);  

    std::cout << "Area of Shape 1: ";
    shape1.displayArea();
    std::cout << "Area of Shape 2: ";
    shape2.displayArea();

    Shape shape3 = shape1 + shape2;

    std::cout << "Combined Area of Shape 1 and Shape 2: ";
    shape3.displayArea();

    return 0;
}
