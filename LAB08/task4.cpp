/*programmer: Laiba Bint-e-Zia
 *id: 23K-0006*/

#include<iostream>

void print() {
    std::cout<< "---------------Name : Laiba Bint-e-Zia---------------\n";
    std::cout<< "---------------id: 23K-0006---------------\n\n";
}

class Person {

    std::string name;
    int age;

    public: 

    Person(std::string name, int age) : name(name), age(age) {}

    void displayPerson() {

        std::cout << "Name: " << name << std::endl;
        std::cout << "Age: " << age << std::endl;
    
    }

};

class Student : public Person {

    std::string stdId;
    int gradeLevel;

    public: 

    Student(std::string stdId, int grade, std::string name, int age) : Person(name, age), stdId(stdId), gradeLevel(grade){}

    void displayStudent() {
        
        Person::displayPerson();
        std::cout << "Student ID: " << stdId << std::endl;
        std::cout << "Grade Level: " << gradeLevel << std::endl;
    
    }

};

class Teacher : public Person {

    std::string subject;
    int room;

    public:

    Teacher(std::string subject, int room, std::string name, int age) : Person(name, age), subject(subject), room(room) {}

    void displayTeacher() {

        std::cout << "Teaching Subject: " << subject << std::endl;
        std::cout << "Room: " << room << std::endl;
   
    }

};

class GraduateStudent : public Student, public Teacher{

    std::string teachingRole;

    public:

     GraduateStudent(std::string teachingRole, std::string stdId, int grade, std::string name, int age, std::string subject, int room)
        : Student(stdId, grade, name, age), Teacher(subject, room, name, age), teachingRole(teachingRole) {}

    void displayGraduateStudent() {
        
        std::cout<< "teaching role: " << teachingRole <<std::endl;
        displayStudent();
        displayTeacher();
    }
};

int main() {

    print();
    
    GraduateStudent myGrad("teacher asisstnat", "23K-0006", 2, "laiba", 18, "cal", 9);

    myGrad.displayGraduateStudent();

    return 0;
}



