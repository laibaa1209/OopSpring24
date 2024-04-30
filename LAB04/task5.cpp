/*Programmer:  Laiba Bint-e-Zia
  Date: 15th feb 2024
  Description: Define a class for office
  Roll Num: 23K-0006
*/

#include<iostream>

class Office {
    
    std::string location;
    std::string* furniture; // Pointer to dynamically allocated array
    int seatingCapacity;
    int furnitureSize; // Store the size of the furniture array

public:

    // Parameterized constructor to set the values of the attributes
    Office(std::string Location, std::string Furniture[], int FurnitureSize, int SeatingCapacity)
    : location(Location), seatingCapacity(SeatingCapacity), furnitureSize(FurnitureSize) {
        
        furniture = new std::string[furnitureSize]; // Dynamically allocate memory for furniture

        for (int i = 0; i < furnitureSize; i++) {
            furniture[i] = Furniture[i]; // Copy the furniture items
        }
  
    }

    // Destructor to deallocate memory
    ~Office() {
        delete[] furniture; // Deallocate memory for furniture
    }

    // Member function to display office details
    void displayDetails() {
  
        std::cout << "Location: " << location << std::endl;
        std::cout << "Furniture: ";
  
        for (int i = 0; i < furnitureSize; i++) {
  
            std::cout << furniture[i];
            if (i < furnitureSize - 1) {
                std::cout << ", ";
  
            }
        
        }
        
        std::cout << std::endl;
        std::cout << "Seating Capacity: " << seatingCapacity << std::endl;
    
    }
}; //end of class

int main() {
    
    // Furniture arrays for each office
    std::string furniture1[] = {"table", "chair", "side desk"};
    std::string furniture2[] = {"office cupboard", "book cases", "cabinet"};
    std::string furniture3[] = {"locker", "desk", "shelf"};

    // Dynamically allocate Office objects
    Office* data1 = new Office("xyz street, block 2", furniture1, 3, 10);
    Office* data2 = new Office("abc street, block 1", furniture2, 3, 15);
    Office* data3 = new Office("pqrs street, block 5", furniture3, 3, 20);

    // Display details for each instance
    std::cout << "for instance 1: " << std::endl;
    data1->displayDetails();

    std::cout << "for instance 2: " << std::endl;
    data2->displayDetails();

    std::cout << "for instance 3: " << std::endl;
    data3->displayDetails();

    // Delete the dynamically allocated objects to invoke the destructor
    delete data1;
    delete data2;
    delete data3;

    return 0;
}


