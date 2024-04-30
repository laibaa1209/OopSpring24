/*Programmer:  Laiba Bint-e-Zia
  Date: 15th feb 2024
  Description: Define a class for office
  Roll Num: 23K-0006
*/

#include<iostream>
#include<vector>

//define class for office
class Office {

    //attribute values to default
    std::string location = "";
    std::vector <std::string> furniture;
    int seatingCapacity = 0;
    
    public:

    //parameterize constructor to set the values of the attributes
    Office(std::string Location, std::vector <std::string> Furniture, int SeatingCapacity)
    :location(Location), furniture(Furniture), seatingCapacity(SeatingCapacity) {}

    // Example member function to display office details
    void displayDetails() {
        std::cout << "Location: " << location << std::endl;
        std::cout << "Furniture: ";
        for (auto i = furniture.begin(); i != furniture.end(); i++) {
        
            std::cout << *i;
            if (i != furniture.end()) {
                std::cout << ", ";
            }
        }

        std::cout << std::endl;
        std::cout << "Seating Capacity: " << seatingCapacity << std::endl;
    }

}; //end of class

int main() {

    //different objects of the same class with different constructor arguements
    Office data1("xyz street, block 2", {"table", "chair", "side desk"}, 10);
    Office data2("abc street, block 1", {"office cupboard", "book cases", "cabinet"}, 15);
    Office data3("pqrs street, block 5", {"locker", "desk", "shelf"}, 20);
    
    std::cout<< "for instance 1: " <<std::endl;
    data1.displayDetails() ;
    
    std::cout<< "for instance 2: " <<std::endl;
    data2.displayDetails();
    
    std::cout<< "for instance 3: " <<std::endl;
    data3.displayDetails();

return 0;
}