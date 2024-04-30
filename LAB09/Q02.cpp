#include <iostream>
#include <cmath>

class Shape {
public:
    virtual double area() const = 0;
    virtual double perimeter() const = 0;
    virtual void displayProperties() const = 0;
    virtual ~Shape() {}
};

class Circle : public Shape {
private:
    double radius;
public:
    Circle(double r) : radius(r) {}
    double area() const override {
        return M_PI * radius * radius;
    }
    double perimeter() const override {
        return 2 * M_PI * radius;
    }
    void displayProperties() const override {
        std::cout << "Properties of the Circle:" << std::endl;
        std::cout << "- Area: " << area() << std::endl;
        std::cout << "- Perimeter: " << perimeter() << std::endl;
        std::cout << "- Diameter: " << 2 * radius << std::endl;
    }
};

class Rectangle : public Shape {
private:
    double length, width;
public:
    Rectangle(double l, double w) : length(l), width(w) {}
    double area() const override {
        return length * width;
    }
    double perimeter() const override {
        return 2 * (length + width);
    }
    void displayProperties() const override {
        std::cout << "Properties of the Rectangle:" << std::endl;
        std::cout << "- Area: " << area() << std::endl;
        std::cout << "- Perimeter: " << perimeter() << std::endl;
        std::cout << "- Diagonal: " << sqrt(length*length + width*width) << std::endl;
    }
};

class Square : public Rectangle {
public:
    Square(double side) : Rectangle(side, side) {}
    void displayProperties() const override {
        std::cout << "Properties of the Square:" << std::endl;
        std::cout << "- Area: " << area() << std::endl;
        std::cout << "- Perimeter: " << perimeter() << std::endl;
        std::cout << "- Diagonal: " << sqrt(2) * Rectangle::Rectangle::area() << std::endl;
    }
};

class Triangle : public Shape {
private:
    double side1, side2, side3;
public:
    Triangle(double s1, double s2, double s3) : side1(s1), side2(s2), side3(s3) {}
    double area() const override {
        double s = (side1 + side2 + side3) / 2;
        return sqrt(s * (s - side1) * (s - side2) * (s - side3));
    }
    double perimeter() const override {
        return side1 + side2 + side3;
    }
    void displayProperties() const override {
        std::cout << "Properties of the Triangle:" << std::endl;
        std::cout << "- Area: " << area() << std::endl;
        std::cout << "- Perimeter: " << perimeter() << std::endl;
    }
};

class EquilateralTriangle : public Triangle {
public:
    EquilateralTriangle(double side) : Triangle(side, side, side) {}
    void displayProperties() const override {
        std::cout << "Properties of the Equilateral Triangle:" << std::endl;
        std::cout << "- Area: " << area() << std::endl;
        std::cout << "- Perimeter: " << perimeter() << std::endl;
    }
};

int main() {
    std::cout << "Welcome to the Geometry Competition Calculator!" << std::endl;
    std::string choice;
    do {
        std::cout << "Please select a shape:" << std::endl;
        std::cout << "1. Circle" << std::endl;
        std::cout << "2. Rectangle" << std::endl;
        std::cout << "3. Square" << std::endl;
        std::cout << "4. Triangle" << std::endl;
        std::cout << "Enter your choice: ";
        int option;
        std::cin >> option;

        Shape *shape = nullptr;

        switch(option) {
            case 1: {
                double radius;
                std::cout << "Enter the radius of the circle: ";
                std::cin >> radius;
                shape = new Circle(radius);
                break;
            }
            case 2: {
                double length, width;
                std::cout << "Enter the length of the rectangle: ";
                std::cin >> length;
                std::cout << "Enter the width of the rectangle: ";
                std::cin >> width;
                shape = new Rectangle(length, width);
                break;
            }
            case 3: {
                double side;
                std::cout << "Enter the side length of the square: ";
                std::cin >> side;
                shape = new Square(side);
                break;
            }
            case 4: {
                double side1, side2, side3;
                std::cout << "Enter the lengths of the three sides of the triangle: ";
                std::cin >> side1 >> side2 >> side3;
                shape = new Triangle(side1, side2, side3);
                break;
            }
            default:
                std::cout << "Invalid choice!" << std::endl;
        }

        if (shape != nullptr) {
            shape->displayProperties();
            delete shape;
        }

        std::cout << "Do you want to calculate properties for another shape? (yes/no): ";
        std::cin >> choice;
    } while (choice == "yes");

    std::cout << "Thank you for using the Geometry Competition Calculator!" << std::endl;

    return 0;
}
