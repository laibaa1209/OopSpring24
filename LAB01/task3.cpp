/*Programmer:Laiba bint-e-Zia
ID=23k-0006
Date:1st February 2024 
*/

#include<iostream>

int main() {

    int nums[]={2,4,6,8,1,7}, target;

    std::cout<< "enter the target: ";
    std::cin >> target;

    int x, y;
    bool flag=false;
    
   for(int i=0; i<6; i++) {
   	
       for(int j=0; j<5; j++) {
       	
           if(nums[i]!=nums[j]) {
           	
            if(nums[i]+nums[j]==target) {
            	
               x=i;
               y=j;
               flag=true;
               break;
               
             }
	   } 
		   }       
      
	   if(flag) {
          
		   break;
       
	   }
  }
    
    if(flag) {
    	
    std::cout<< "[" << x << "," << y << "]" << std::endl;
    
    }
    
    else{
    	
        std::cout<< "no pair identified";
        
    }

    return 0;
}
