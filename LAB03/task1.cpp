#include<iostream>

class BoardMarker{ 

std::string brand, shade;
bool refillable, inkStatus;

public:

void settInkStatus(bool ink) {
     
     inkStatus = ink;

}

bool getInkStatus() {
     
     return inkStatus;

}
void settRefillabke(bool refill) {
     
    refillable = refill;

}

bool getRefillable() {
     
     return refillable;

}

void Inkstatus() {

    if(inkStatus) {

        std::cout<< "the ink is present";
    }

}

    void refillStatus() {

        if(refillable) {

             std::cout<< "the marker is refillable";

        } else 
    }
};


int main() {

    BoardMarker data;
   

    data.settInkStatus(1);
    data.getInkStatus();
    data.settRefillabke(0);
    data.getRefillable();
    data.Inkstatus();
    data.refillStatus();


}