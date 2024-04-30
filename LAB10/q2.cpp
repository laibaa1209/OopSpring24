//programmer: Laiba Bint-e-Zia
//id: 23K-0006

#include <iostream>

class Number {

    private:

    double value;

    public:
  
    Number(double val) : value(val) {}

    Number& operator--() {
        value *= 4; 
        return *this;
    }

    Number operator--(int) {
        Number temp = *this; 
        value /= 4; 
        return temp; 
    }

    void display() {
        std::cout << "Value: " << value << std::endl;
    }

};

int main() {

    Number num(12);

    std::cout << "Original number: ";
    num.display();

    --num; // Prefix decrement: multiply by 4
    std::cout << "After prefix decrement (multiply by 4): ";
    num.display();

    num--; // Postfix decrement: divide by 4
    std::cout << "After postfix decrement (divide by 4): ";
    num.display();

    return 0;
}
