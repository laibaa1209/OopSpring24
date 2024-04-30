//programmer: Laiba Bint-e-ZIa
//std id: 23K-0006

#include<iostream>

class Appointment{

    static int appointmentMade;
    static int totalEarnings;
    static int avgCostperAppointment;

    public: 

    Appointment(int made, int earnings, int cost)   {
     
        appointmentMade+=made;
        totalEarnings+=earnings;
        avgCostperAppointment+=cost;
    }
    
    static int appointment() {
        return appointmentMade;
    }

    static int earnings() {
        return totalEarnings;
    }

    static int avgCost() {
        return avgCostperAppointment;
    }

    static float avgCostOfAll() {
        std::cout<< "avg cost of all appointment is: " << totalEarnings / appointmentMade <<std::endl;
    }

};

int Appointment::appointmentMade = 0;
int Appointment::totalEarnings = 0;
int Appointment::avgCostperAppointment= 0;

int main() {

    Appointment obj1(3, 30, 10);
    std::cout<<"appointment 1\n\n";
    obj1.avgCostOfAll();   

    Appointment obj2(2, 20, 10);
    std::cout<<"appointment 2\n\n";
    obj2.avgCostOfAll();  

    Appointment obj3(4, 80, 20);
    std::cout<<"appointment 3\n\n";
    obj3.avgCostOfAll();  

    Appointment obj4(8, 16000, 1600);
    std::cout<<"appointment 4\n\n";
    obj4.avgCostOfAll();  
    return 0;
}

