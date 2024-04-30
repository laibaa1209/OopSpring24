/*Programmer:  Laiba Bint-e-Zia
  Date: 15th feb 2024
  Description: Define a class for book
  Roll Num: 23K-0006
*/

#include <iostream>

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
        totalPageCount = 0;
        numOfPagesRead = 0;

    }

    //parameterize constructor to set values to attributes
    Book(std::string Name, std::string Author, std::string ISBNNum, int PageCount, int PagesRead) {

        name = Name;
        author = Author;
        ISBN = ISBNNum;
        totalPageCount = PageCount;
        numOfPagesRead = PagesRead;

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
        }


    }

}; //end of class


//main function 
int main() {

    //manually setting the values
    Book myBook1("The Kite Runner", "Khaled", "k1095", 350, 147);
    Book myBook2("Metamorphosis", "Franz Kafka", "l375789", 220, 120);

    //call of upadate function in main function to update the value
    std::cout<< "For book 1"<<std::endl;
    myBook1.updatePages();
    //call of upadate function in main function to update the value
    std::cout<< "For book 2"<<std::endl;
    myBook2.updatePages();

    return 0;
}