/*Programmer:Laiba bint-e-Zia
ID=23k-0006
Date:25th jan 2024 
*/

#include <iostream>

int main() {
	
    int num;
    
    std::cout << "Enter the number: ";
    std::cin >> num;

    bool isPrime = true;
    
    for (int i = 2; i < num; i++) {
    	
        if (num % i == 0) {
        	
            isPrime = false;
            break;
            
        }
    }

    if (num <= 1) {
    	
        isPrime = false;
        
    }

    if (isPrime) {
    	
        std::cout << "It is a prime number." << std::endl;
 
    } else {
      
	   std::cout << "It is not a prime number." << std::endl;
   
    }

    return 0;
}
