/*Programmer:Laiba bint-e-Zia
ID=23k-0006
Date:1st February 2024 
*/
#include<iostream> 

struct event {
    
    std::string eventName;
    std::string date;
    std::string venue;
    std::string organizer;
    
};

int main() {
    
    int n;
    
    std::cout<< "enter the events you wish to manage: ";
    std::cin>> n ;
    std::cin.ignore();
    
    event *data = new event[n];
    
    for(int i = 0; i < n; i++) {
        
        std::cout<< "enter name for event " << i+1 << " : ";
        std::getline(std::cin, data[i].eventName);
        
        std::cout<< "enter the date for event " << i+1 << " : ";
        std::getline(std::cin, data[i].date);
        
        std::cout<< "enter the  venue for event " << i+1 << " : ";
        std::getline(std::cin, data[i].venue);
        
        std::cout<< "enter the  oragnizer name for event " << i+1 << " : ";
        std::getline(std::cin, data[i].organizer);
        
        std::cout <<std::endl;
        
    }
    
    std::string Date;
    std::cout<< "enter the date to check the events: ";
    std::getline(std::cin, Date);
    
    for(int j = 0; j < n; j++) {
    
        if(Date==data[j].date) {
            
            std::cout<< j+1 << "EVENT" <<std::endl;
            std::cout<< "event name: "<<data[j].eventName<<std::endl;
            std::cout<< "event date: "<<data[j].date<<std::endl;
            std::cout<< "event venue: "<<data[j].venue<<std::endl;
            std::cout<< "event organizer: "<<data[j].organizer<<std::endl;
        }
        
        std::cout<< std::endl;
        
    }
    
   return 0; 
}
