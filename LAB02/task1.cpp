/*programmer: laiba Bint-e-Zia
date: 3rd feb 2024
ID=23K-0006
Description: swap values of two vraiables using recursion
*/

#include<iostream>

//recursive function to swap variables
void recursiveSwap(int* a, int* b, bool initialCall = true) {
    
    //checking if an initial call is made
    if(!initialCall) {
        return;
    }
    
    //swapping values
    int temp = *a;
    *a = *b;
    *b = temp;
    
    /*recursive call with initial call set to false
    indicating recursion's been performed */
    return recursiveSwap(a, b, false);
}

int main() {
    
    int a, b;
    
    //input value to two vraiables
    std::cout<< "enter the two variables: ";
    std::cin>> a >> b;
    
    //print the value before swapinng
    std::cout<< "before swapping" <<std::endl <<"a = " << a << " b = " << b <<std::endl;
    
    //call to recursive function in the main function
    recursiveSwap( &a, &b);
    
    //print the value after swapping
    std::cout<< "after swapping" <<std::endl <<"a = " << a << " b = " << b <<std::endl;
    
}
