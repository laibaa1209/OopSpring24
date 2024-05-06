//programmer: Laiba Bint-e-Zia
//id: 23K-0006
#include<iostream>
//DDIN'T CODE THE MAIN FUNCTION BECAUSE QUESTION DIDN'T ASK TO DO SO
class Vehicle {

    std::string make;
    std::string model;
    int speed;

    public:

    Vehicle(std::string make, std::string model, int speed) : make(make), model(model), speed(speed) {}

    std::string getMake() { return make; }
    std::string getModel() { return model; }
    int getSpeed() { return speed; }

    virtual void accelrate() = 0;
    virtual void brake() = 0;
    virtual double calculateFuelEfficency() = 0;
};

class Car : public Vehicle {

    double fuelCapacity;

    public:

    Car(std::string make, std::string model, int speed, double fuelCap) : Vehicle(make, model, speed), fuelCapacity(fuelCap) {}

    void accelerate() {
        std::cout<< "Car accelerates with speed " << getSpeed() <<std::endl;
    }

    void brake() {
        std::cout << "Car brake's" <<std::endl;
    }

    double calculateFuelEfficency() {
        std::cout<< "The fuel Efficeny of the Car is: ";
        return fuelCapacity / getSpeed(); //made up formula to utilize attribute and even complete the logic of the function
    }

};

class Truck: public Vehicle {

    int CargoCpacity;

    public:

    Truck(std::string make, std::string model, int speed, int cargoCap) : Vehicle(make, model, speed), CargoCpacity(cargoCap) {

    }
    void accelerate() {
        std::cout<< "Truck accelerates with speed " << getSpeed() <<std::endl;
    }

    void brake() {
        std::cout << "Truck brake's" <<std::endl;
    }

    double calculateFuelEfficency() {
        std::cout<< "The fuel Efficeny of the Truck is: ";
        return CargoCpacity / getSpeed(); //made up formula to utilize attribute and even complete the logic of the function
    }

};