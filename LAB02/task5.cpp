/*programmer: laiba Bint-e-Zia
date: 3rd feb 2024
ID = 23K-0006
Description: product management system
*/

#include<iostream>

int n = 10;

//define struct 
struct productSystem {

    std::string productId;
    std::string name;
    long int price;
    int quantity;

};

//function to add products
void additionOfProduct (productSystem data[]) {

    std::cout<< "ADDITION OF PRODUCTS IN THE SYSTEM" <<std::endl;

    int add;

    std::cout<< "enter the total numbers of product to add: ";
    std::cin >> add;
    std::cin.ignore();

    for(int i = 0; i < add; i++) {

        std::cout<< "enter product name: ";
        std::getline(std::cin, data[i].name);

        std::cout<< "enter product Id: ";
        std::cin.ignore();
        std::getline(std::cin, data[i].productId);

        std::cout<< "enter product price: ";
        std::cin>> data[i].price;
        std::cin.ignore();

        std::cout<< "enter product quantity: ";
        std::cin>> data[i].quantity;
        std::cin.ignore();

    }
}

//function to display products
void displayInformation(productSystem data[]) {

    std::cout << "DISPLAY INFORMATION OF PRODUCTS" << std::endl;

    bool found= false;
    std::string productID;

    std::cout<< "Enter the product ID you wish to check: ";
    std::cin >> productID;
    std::cin.ignore();

    for(int i = 0; i < n; i++){

        if(productID == data[i].productId) {
            found=true;
            
            std::cout<< "product id: " << data[i].productId <<std::endl;
            std::cout<< "product name: " << data[i].name << std::endl; 
            std::cout<< "product price: " << data[i].price <<std::endl;
            std::cout<< "product quantity: " << data[i].quantity <<std::endl;
            std::cout<< std::endl;
            break;

        }

    }

    if(!found) {
        std::cout<< "no product found with ID "<< productID << std::endl;
    }

}

//function to update products
void updateInfo(productSystem data[]) {

    std::cout<< "UPDATE INFORMATION OF PRODUCTS IN THE SYSTEM" << std::endl;

    std::string productID;
    long int updatedPrice;
    int updatedQuantity;
    int update;
    
    std::cout<< "enter the number of products to update: ";
    std::cin >>update;

    std::cout<< "Enter the product ID you want to update: ";
    std::cin.ignore();
    std::getline(std::cin, productID);

    std::cout<< "enter the updated price: ";
    std::cin>> updatedPrice;
    std::cin.ignore();

    std::cout<< "enter the updated quantity: ";
    std::cin>> updatedQuantity;
    
    for(int i = 0; i < update; i++){

        if(productID == data[i].productId) {

            data[i].price = updatedPrice;
            data[i].quantity = updatedQuantity;

            std::cout<< "updated product info: "<<std::endl;
            std::cout<< "product id: " << data[i].productId <<std::endl;
            std::cout<< "product name: "<< data[i].name <<std::endl;
            std::cout<< "product price: "<< data[i].price <<std::endl;
            std::cout<< "product quantity: "<< data[i].quantity <<std::endl;
            std::cout<< std::endl;

        }
    }
    
    std::cout<< "data updated successfully" <<std::endl;
}


//main function
int main() {

    struct productSystem data[n];
    int menu;

    std::cout<< "select from menu option"<<std::endl << "1. add new products" <<std::endl << "2. display information of products" <<std::endl << "3. update info"<<std::endl; 
    std::cin>> menu;

    switch(menu) {

        case 1:
        additionOfProduct(data);
        break;

        case 2:
        displayInformation(data);
        break;

        case 3:
        updateInfo(data);
        break;

    }

    return 0;
}
