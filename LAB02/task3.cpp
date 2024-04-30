/*programmer: laiba Bint-e-Zia
date: 3rd feb 2024
ID=23K-0006
Description: recursive function in C++ that checks if there’s a subset of the array whose elements sum up to the target sum.
*/
#include <iostream>

//recursive function
bool hasSubsetSum(int arr[], int size, int targetSum) {
    
    // Base cases
    if (targetSum == 0) {
        return true;
    }
    
    if (size == 0) {
        return false;
    }

    return hasSubsetSum(arr, size - 1, targetSum) || 
           hasSubsetSum(arr, size - 1, targetSum - arr[size - 1]);
}

int main() {
    
    int targetSum;
    int size;

	//input for parameters of the function
    std::cout<< "enter the size of array: "<<std::endl;
    std::cin>> size;
    
    std::cout<< "enter the target sum: " <<std::endl;
    std::cin>> targetSum;
    
    int* arr= new int[size];
    
    std::cout<< "enter the elements of array "<< std::endl;
    for(int i = 0; i < size; i++) {
        
        std::cout<< "enter " << i+1 << " element: " <<std::endl;
        std::cin>> arr[i];
        
    }
	
	//recursive call in main
    if (hasSubsetSum(arr, size, targetSum)) {
        std::cout << "Found a subset with given sum" << std::endl;
    }
    
    else {
        std::cout << "No subset with given sum" << std::endl;
    }
    return 0;
}
