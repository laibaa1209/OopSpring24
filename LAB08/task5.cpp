/*programmer: Laiba Bint-e-Zia
 *id: 23K-0006*/

#include<iostream>

void print() {
    std::cout<< "---------------Name : Laiba Bint-e-Zia---------------\n";
    std::cout<< "---------------id: 23K-0006---------------\n\n";
}

class Vehicle{

    std::string make;
    std::string model;
    int year;

    public:
    

    Vehicle(std::string make, std::string model, int year) : make(make), model(model), year(year) {}

};

class Car : public Vehicle {

    int doors;
    int fuelEfficency;
    
    public:

    Car(int doors, int fuelEfficency, std::string make, std::string model, int year) : Vehicle(make, model, year), doors(doors), fuelEfficency(fuelEfficency) {}

};

class ElectricCar : public Car {

    int batteryLife;

    public:

    ElectricCar(int batteryLife, int doors, int fuelEfficency, std::string make, std::string model, int year) : Car(doors, fuelEfficency, make, model, year), batteryLife(batteryLife) {}

};

int main() {

    print();
    
    ElectricCar mycar(20, 4, 160, "bmw" , "yamaha", 2024);
}