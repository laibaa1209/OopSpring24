//programmer: Laiba Bint-e-Zia
//id: 23K-0006

#include <iostream>

class Perimeter {
    
    private:

    double length;
    double breadth;

    public:

    Perimeter(double l, double b) : length(l), breadth(b) {}

    double calculatePerimeter() {
        return 2 * (length + breadth);
    }

    friend class PrintClass;

};

class PrintClass {

    public:

    void printPerimeter(Perimeter& p) {
        std::cout << "The perimeter of the rectangle is: " << p.calculatePerimeter() << std::endl;
    }

};

int main() {

    Perimeter rect(10, 5);
    PrintClass printer;
    
    printer.printPerimeter(rect);

    return 0;
}
