#include<iostream>

class WaterBottle{ 

std::string company, color;
int waterCapacity;

public:

void settcompany( std::string comp) {

    company = comp;

}

std::string getcomapny() {

    return company;
}


void settcolor( std::string colour) {

    color = colour;

}

std::string getcolor() {

    return color;
}

void settsetcapacity( int capacity) {

    waterCapacity = capacity;

}

int getcapacity() {

    return  waterCapacity;
}

int update(int consumed, int remaining) {

    remaining = waterCapacity - consumed;

    waterCapacity = remaining;

    std::cout<< "the water capacity is " << waterCapacity;

}

};

int main() {

    WaterBottle data;

    data.settcompany("aqua");
    std::cout<< " company is: " << data.getcomapny();

    data.settcolor("blue");
    std::cout<< " color is: " << data.getcolor();

    data.settsetcapacity(1000);
    std::cout<< " capacity is: " << data.getcapacity();


    data.update(20, 0);


}

