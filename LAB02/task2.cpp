/*programmer: laiba Bint-e-Zia
date: 3rd feb 2024
ID=23K-0006
Description: library management system
*/

#include<iostream>

int n=10;

struct Book {
  
  std::string title;
  std::string author;
  int publicationYear;
  std::string genre;
    
};

//function to add new books
void addNewBook(Book data[]) {
    
    std::cout<< "ADDITION OF BOOKS IN THE SYSTEM" <<std::endl;
    
    int add;
    
    std::cout<< "enter the total numbers of books to add: ";
    std::cin >> add;
    std::cin.ignore();
    
    for(int i = 0; i < add; i++) {
        
    std::cout<< "For book " << i+1 << " : " <<std::endl;
    
    std::cout<< "enter the book title: ";
    std::getline(std::cin, data[i].title);
    
    std::cout<< "enter the author name: ";
    std::getline(std::cin, data[i].author);
    
    std::cout<< "enter the genre of the book: ";
    std::cin>> data[i].genre;
    
    std::cout<< "enter the year of  publication: ";
    std::cin>> data[i].publicationYear;
    std::cin.ignore(); //to ignore widespaces 
        
    }
    
    std::cout<< "Books added successfully"<<std::endl;
}

//function to display information of books
void displayInformation(Book data[]) {
    
    std::cout<< "DISPLAY INFORMATION OF BOOK" <<std::endl;
    bool found= false; //to check wether the book exists or not
    
    std::string Title;
    std::string Author;
    int select;
    
    std::cout<< "Search book by:" <<std::endl << "1. Title" <<std::endl<< "2. Author" <<std::endl << "3. Display All" <<std::endl;
    std::cin>> select;
    
    switch(select) {
        
        case 1: 
        
        std::cout<< "Enter the title of the book you want: ";
        std::cin >> Title;
        std::cin.ignore();
    
        for(int i = 0; i < n; i++ ) {
    
    //comparing the input title with the book title in inventory
            if(Title == data[i].title) {
               found=true;
            
               std::cout<< "Book title: " << data[i].title <<std::endl;
               std::cout<< "Author of the book: " << data[i].author <<std::endl;
               std::cout<< "Year of publication: " << data[i].publicationYear <<std::endl;
               std::cout<< "Genre: " << data[i].genre <<std::endl;
               std::cout<< std::endl;
               break;
             }
          }
    
        case 2: 
        
        std::cout<< "Enter the author's name of the book you want: ";
        std::cin >> Author;
        std::cin.ignore();
    
        for(int i = 0; i < n; i++ ) {
    
            if(Author == data[i].author) {
               found=true;
                 
               std::cout<< "Book title: " << data[i].title <<std::endl;
               std::cout<< "Author of the book: " << data[i].author <<std::endl;
               std::cout<< "Year of publication: " << data[i].publicationYear <<std::endl;
               std::cout<< "Genre: " << data[i].genre <<std::endl;
               std::cout<< std::endl;
               break;
                 
        }
    }
        if(!found) {
             std::cout<< "NO BOOK FOUND"<<std::endl;
        }
        
        case 3: 
        
        std::cout<< "INFORMATION OF ALL BOOKS" <<std::endl<<std::endl;
        
        for(int i = 0; i < n; i++) {
            
            std::cout<< "BOOK " << i+1 << " : "<<std::endl;
            std::cout<< "Book title: " << data[i].title <<std::endl;
            std::cout<< "Author of the book: " << data[i].author <<std::endl;
            std::cout<< "Year of publication: " << data[i].publicationYear <<std::endl;
            std::cout<< "Genre: " << data[i].genre <<std::endl;
            std::cout<< std::endl;
         
        }
         break;
    }
}

void updateInfo(Book data[]) {
    
    std::cout<< "UPDATE INFORMATION OF BOOKS IN THE LIBRARY" <<std::endl;
    
    std::string updatedTitle;
    
    //input for the book title to update its information
    std::cout<< "Enter the book title you want to update: ";
    std::getline(std::cin, updatedTitle);
    
    for(int i = 0; i < n; i++ ){
    
        if(updatedTitle == data[i].title) {
            
            std::cout<< "Enter the details to update: : " <<std::endl;
            
            std::cout<< "Enter the updated title: ";
            std::getline(std::cin, data[i].title);

            std::cout<< "enter the updated author name: ";
            std::getline(std::cin, data[i].author);
            
            std::cout<< "enter the updated genre: ";
            std::getline(std::cin, data[i].genre);
            
            std::cout<< "enter the updated publication year: ";
            std::cin>> data[i].publicationYear;
            std::cout<< std::endl;
            std::cin.ignore();
            
        }
    }
    std::cout<< "SUCCESSFULLY UPDATED"<<std::endl;

}

int main() {
    
    struct Book data[n];
    int menu;
    
    std::cout<< "select from menu option"<<std::endl << "1. add new books" <<std::endl << "2. display information of books " <<std::endl << "3. update info"<<std::endl;
    std::cin>> menu;
    
    //using switch to select one of the other menu options
    switch(menu) {
    
    case 1:
    addNewBook(data);
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



