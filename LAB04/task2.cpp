/*Programmer:  Laiba Bint-e-Zia
  Date: 15th feb 2024
  Description: Define a class for book
  Roll Num: 23K-0006
*/

#include <iostream>
#include<cmath>

//class to define book
class Book {

    //attributes of class
    std::string name, author, ISBN;
    int totalPageCount;
    int numOfPagesRead;

    public: 

    //default constructor to initialize values to null;
    Book() {

        name = " ";
        author = " ";
        ISBN = " ";
        totalPageCount = 1000;
        numOfPagesRead = 0;

    }
    
    //getter and setter to get and set the value of attributes
    void setName(std::string Name) {
        name = Name;
    }
    
    std::string getName() {
        return name;
    }

    //getter and setter for author name
    void setAuthorName(std::string Author) {
        author = Author;
    }
    
    std::string getAuthorName() {
        return author;
    }
    
    //getter and setter for ISBN number
    void setISBN(std::string isbn) {
        ISBN = isbn;
    }
    
    std::string getISBN() {
        return ISBN;
    }

    //function to update pages of the book till you have read 
    void updatePages() {
        
        int pagesRead;
        
        //prompting the user to enter the pages he/she has read
        std::cout<< "enter the number of pages read: ";
        std::cin >> pagesRead;

        //upadting number of pages
         numOfPagesRead += pagesRead;
         if(numOfPagesRead == totalPageCount) {

            std::cout<< "You have finsihed the book"<<std::endl;

        }
        else {
            std::cout<< "book not finsihed yet"<<std::endl;
            std::cout << "Pages left to read: " << abs(numOfPagesRead - totalPageCount) <<std::endl;
        }


    }

    //method to display book info
    void showBookInfo() {

      std::cout<< "The details of the books are as follows: " <<std::endl;

      std::cout<< "Name: " << name <<std::endl;
      std::cout<< "Author: " << author <<std::endl;
      std::cout<< "ISBN Number: " <<ISBN <<std::endl;
      std::cout<< "Number Of Pages: " <<totalPageCount <<std::endl;

    }

}; //end of class


//main function 
int main() {

    //object of the class book
    Book myBook1;
    
    myBook1.setName("Kite runner");
    myBook1.getName();

    
    myBook1.setAuthorName("Kkhaled hosseini");
    myBook1.getAuthorName();

    myBook1.setISBN("1234kh567");
    myBook1.getISBN();

    //call of upadate function in main function to update the value
    std::cout<< "For book 1"<<std::endl;
    myBook1.updatePages();
    myBook1.showBookInfo();

    return 0;
}