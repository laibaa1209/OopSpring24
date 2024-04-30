/*programmer: Laiba Bint-e-Zia
  ID: 23K-0006
  Description: define a class for Stationary shop*/

#include <iostream>

//class for stationary shop
class StationaryShop {

  //attributes
  std::string product[5] = {" "};
  long int price[5] = {0};

  //access modifier
  public:

  //member functions to perform various operations

  //add items to the list
  void addItems() {

    for(int i = 0; i < 5; i++) {

      std::cout<< "Enter item number " << i+1 <<" :";
      std::cin.ignore(); //ignore new line character 
      std::getline(std::cin, product[i]);
      std::cout<<std::endl;

      std::cout<<"Enter the price of item number "<< i+1 << " :";
      std::cin>>price[i];
      std::cout<< std::endl;

    }

    std::cout<< "All items and their price added successfully";

  }

  //retriev items from the inventory 
  void retrieveItems() {

    std::cout<< "The list of items is as follows: "<<std::endl;

    
    for(int i = 0; i< 5; i++) {
      std::cout<< i+1 << ")" <<product[i]<<std::endl;
    }

  }

  //modify the prices of item in inventory
  void modifyPrices() {

    int num;

    std::cout<< "Select"<< std::endl << "1)modify prices of all" <<std::endl << "2)modify price of an item"<<std::endl;
    std::cin >>num;

    //switch case to ask the user wether thy want to update all the prices or a single item price
    switch(num) {

      case 1: 

      for(int i = 0; i < 5; i++) {
      
        std::cout<< "enter the modified price for item " << i+1<< " :";
        std::cin >> price[i];
        std::cout<< std::endl;
      
      }
      
      std::cout<< "Price updated successfully" <<std::endl;
      break;

      case 2:

      bool found = false;
      std::string Product;

      std::cout<< "Enter the item whose price you wish to change: ";
      std::cin.ignore();
      std::getline(std::cin, Product);

      for(int i = 0; i < 5; i++) {

        if(Product == product[i]) {

          std::cout<< "Enter the new price of item "<< product[i] <<" : ";
          std::cin>> price[i];
          found = true;
          break;

        }
      
      }
      
      if(found) {
        std::cout<<"price updated!";
      }

      else {
        std::cout<< "no product found" <<std::endl;
      }

    }

  }
  
  //function to display all items with prices
  void displayItems() {

    for(int i = 0; i < 5; i++) {
      std::cout<< "1) Product:" <<product[i] << "          Price: " <<price[i] <<std::endl;
    }

    std::cout<< "ALl items displayed successfully"<<std::endl;

  }

}; //end of class
  
  //function outside class to print receipt according to the items bought
  void receipt(std::string time) {

    int num; 

    std::cout<< "Enter the number of items bought: ";
    std::cin>> num;

    int quantity[num];
    std::string items[num];
    long int prices[num];


    for(int i = 0; i < num; i++) {

      std::cout<< "Enter item number " << i+1 << " : ";
      std::cin.ignore();
      std::getline(std::cin, items[i]);

      std::cout<< "enter the quantity bought: ";
      std::cin >> quantity[i];

      std::cout<< "Enter the price of " << i+1 << " item: ";
      std::cin>> prices[i];

      prices[i] = prices[i] * quantity[i];
    
    }
    
    std::cout<< "---------------x---------------"<<std::endl;
    
    std::cout<< "     STATIONARY SHOP" <<std::endl;
    std::cout<< "         " <<time << std::endl;
    std::cout<< "     list of items and price"<<std::endl;

    for(int i = 0; i < num; i++) {
      std::cout<< items[i] << "     " << prices[i]<< "Rps" <<std::endl;
    }

    std::cout<< "---------------x---------------";

  }

  //start of main
  int main() {

    StationaryShop myShop;

    int n;
    std::cout<< "STATIONARY SHOP SYSTEM"<<std::endl;
    std::cout<< "Enter the menu option " <<std::endl <<"1)Add items" <<std::endl <<"2)Retrieve List Of Items" <<std::endl <<"3)Modify Prices"<<std::endl<<"4)Display items with prices"<<std::endl << "5)Receipt"<<std::endl;
    std::cin>>n;

    //switch case to perfrom one of the above menu options
    switch(n) {

      case 1:

      std::cout<<"ADD PRODUCTS TO THE INVENTORY"<<std::endl;
      myShop.addItems();
      break;

      case 2:

      std::cout<<"RETRIEV ITEMS"<< std::endl;
      myShop.retrieveItems();
      break;

      case 3:

      std::cout<< "MODIFY PRICES"<<std::endl;
      myShop.modifyPrices();
      break;

      case 4:

      std::cout<< "DISPLAY ITEMS"<<std::endl;
      myShop.displayItems();
      break;
      
      case 5: 

      receipt("12:00pm");
      break;
    }

  return 0;
  } //end of main