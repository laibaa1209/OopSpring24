/*Programmer:Laiba bint-e-Zia
ID=23k-0006
Date:31st jan 2024 
*/

#include <iostream>

int main() {
 
    int maxArea = 0;
    int n;
    
    std::cout<< "enter number of lines: ";
    std::cin>> n;
    
    int height[n];
    
    for(int i = 0; i < n; ++i) {
    	
        std::cout<< "enter " << i+1 << " element:";
        std::cin>>height[i]; 
        
    }
    
    for (int i = 0; i < n ; ++i) {
    	
        for (int j = i + 1; j < n; ++j) {
        	
            int height = std::min(height[i], height[j]);
            int width = j - i;
            int area = height * width;
            
            maxArea = std::max(maxArea, area);
        }
    }

    std::cout << "Maximum amount of water that can be stored: " << maxArea << std::endl;

    return 0;
}
