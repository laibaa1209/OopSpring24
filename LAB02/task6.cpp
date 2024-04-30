/*programmer: laiba Bint-e-Zia
date: 2nd feb 2024
ID=23K-0006
Description: Find GCD and LCM of two numbers recursively 
*/

#include<iostream>

//function to calculate gcd recursivley 
int gcd(int a, int b) {
    
    //base conditions
    if(a==0) {
        return b;
    }
    
    if(b==0) {
        return a;
    }
    
    //if a is greater than b, then copy the remainder to a after using modulus
    if(a > b) {
        return gcd(a % b, b);  
    }
    
    //if b is greater than a, then copy the remainder to b after using modulus
    if(b > a) {
        return gcd(a, b % a);
    }
} //end of GCD function

//function to calculate LCM recursively
int lcm(int a, int b) {
  
  //constant variable  
  static int num = 0;
  num = num + b;
  
  //check if both can divide 
  if(num % a == 0 && num % b == 0) {
      return num;
  }
  
      return lcm(a,b);
    
}//end of LCM function


//start of main fucntion
int main() {
    
    int a, b;
    
    //input the value of two variables
    std::cout<< "enter the two numbers: ";
    std::cin>> a >> b;
    
    //print the GCD
    std::cout<< "the GCD of " << a << " and " << b << " is: "  <<gcd(a,b) <<std::endl;
    
    //print the LCM
    std::cout<< "the LCM of " << a << " and " << b << " is: "  <<lcm(a,b);
    
    return 0;
} //end main
