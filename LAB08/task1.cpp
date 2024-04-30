/*programmer: Laiba Bint-e-Zia
 *id: 23K-0006*/

#include<iostream>

void print() {
    std::cout<< "---------------Name : Laiba Bint-e-Zia---------------\n";
    std::cout<< "---------------id: 23K-0006---------------\n\n";
}

class Book{

    std::string publisher;
    std::string title;
    std::string author;

    public: 

    Book(std::string publisher, std::string title, std::string author) : publisher(publisher), title(title), author(author) {}

    void display() {

        std::cout<< "Book Title: " << title <<std::endl;
        std::cout<< "Book Author: " << author <<std::endl;
        std::cout<< "Book Publisher: " << publisher <<std::endl;

    }

};

class FictionBook : public Book{

    std::string genre;
    std::string protagonist;

    public:

    FictionBook(std::string genre, std::string protagonist, std::string publisher, std::string title, std::string author) : Book(publisher, title, author) {

        this->genre = genre;
        this-> protagonist = protagonist;

    }

    void Display() {

        display();
        std::cout<< "Book Genre: " << genre <<std::endl;
        std::cout<< "Book Protagonist: " << protagonist <<std::endl;

    }

};

int main() {

    print();
    FictionBook myBook("Redemption", "hassan", "penguin", "The Kite Runner", "Khaled");

    myBook.Display();

    return 0;
}