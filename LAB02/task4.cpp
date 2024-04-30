/*programmer: laiba Bint-e-Zia
date: 1st feb 2024
ID=23K-0006
Description: student registation system using structure
*/


#include <iostream>
#include <string> 

//define struct 
 struct  Register {
     
     std::string courseId;
     std::string courseName;
 };
 
 //inheriting above struct in a new struct
 struct Student:Register {
     
     std::string stdId;
     std::string FirstName;
     std::string LastName;
     std::string cellNum;
     std::string email;
     
 };
 
 int main() {
     
     
     struct Student data[5];
     
     //input the values for the elements of structure
     for(int i = 0; i < 5; ++i) {
         
         std::cout<< "enter course name: ";
         std::getline(std::cin, data[i].courseName);
         
         std::cout<< "enter course ID: ";
         std::getline(std::cin, data[i].courseId);
         
         std::cout<< "enter student first name: ";
         std::getline(std::cin, data[i].FirstName);
         
         std::cout<< "enter student last name: ";
         std::getline(std::cin, data[i].LastName);
         
         std::cout<< "enter student ID: ";
         std::getline(std::cin, data[i].stdId);
         
         std::cout<< "enter cell num: ";
         std::getline(std::cin, data[i].cellNum);
         
         std::cout<< "enter student email: ";
         std::getline(std::cin, data[i].email);
         
     }
     
     //loop to print info 
     for(int i = 0; i< 5; i++) {
     	
     	std::cout<< "course name: " <<data[i].courseName << std::endl;
     	std::cout<< "course Id: " <<data[i].courseId << std::endl;
     	std::cout<< "first name: " <<data[i].FirstName << std::endl;
     	std::cout<< "last name: " <<data[i].LastName << std::endl;
     	std::cout<< "student id: " <<data[i].stdId << std::endl;
     	std::cout<< "cell number: " <<data[i].cellNum << std::endl;
     	std::cout<< "email: " <<data[i].email << std::endl;
	 }
     
 };
