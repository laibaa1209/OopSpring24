//programmer: Laiba Bint-e-ZIa
//std id: 23K-0006

#include<iostream>

class Course{

    private:

    std::string code;
    std::string name;
    int creditHours;

    public: 
    
    Course() : name(""), code(""), creditHours(0) {};
    Course(std::string name, std::string code, int crHrs) : name(name), code(code), creditHours(crHrs) {} 
    
    std::string getcode(){
        return code;
    }
    
    std::string getname() {
        return name;
    }

    int getCredits() {
        return creditHours;
    }

};

class Student{

    std::string id;
    std::string name;
    Course enrolledCourse[3];
    int enrolledCount = 0;

    public: 

    Student(std::string id, std::string name) : id(id), name(name) {}

    void enroll(Course& course) {

        if (enrolledCount < 3) {
            enrolledCourse[enrolledCount++] = course;
        } 
        
        else {
            std::cout << "Cannot enroll in more courses." << std::endl;
        }
   
    }

    void dropCourse(std::string name) {

        for(int i = 0; i< 3; i++) {
            
            if(enrolledCourse[i].getname() == name ) {
                enrolledCourse[i] = Course();
                break;
            } 
            
        }
    }

    void getTotalCredits() {
        
        int sum = 0;
        
        for(int i = 0; i < 3; i++) {
            sum+= enrolledCourse[i].getCredits();
        }
        std::cout<< "total credits: " <<sum <<std::endl;
    }

    void printEnrolledCourses() {
        std::cout<<"student name: " << name <<std::endl;
        std::cout<< "student id: " << id <<std::endl;
        for(int i = 0; i < enrolledCount; i++) {
            std::cout<< "course " << i+1 << " : " <<std::endl;
            std::cout<< "course name: " << enrolledCourse[i].getname() <<std::endl;
            std::cout<< "course code: " << enrolledCourse[i].getcode() <<std::endl;
            std::cout<< "course credits: " << enrolledCourse[i].getCredits() <<std::endl;    
            
        }
    }


};

int main() {

    Student s1("laiba", "0006");

    Course obj1[] = {
        Course ("pf", "cl01", 3),
        Course ("cal", "mt01", 2),
        Course ("ew", "bs01", 1)
    };

    s1.enroll(obj1[0]);
    s1.enroll(obj1[1]);
    s1.enroll(obj1[2]);

    s1.printEnrolledCourses();
    s1.getTotalCredits();
    s1.dropCourse("pf");

    return 0;
}