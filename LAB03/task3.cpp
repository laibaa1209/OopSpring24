/*programmer: Laiba Bint-e-Zia
  ID: 23K-0006
  Description: define a class for calendar
*/

#include <iostream>

//define class for calendar
class Calendar {

    private:

    int currentYear = 2024;
    std::string tasks[12][31]; // 12 months, each with 31 days
    
    //function to check validity of date
    bool isValidDate(int month, int day) const {
        return (month >= 1 && month <= 12 && day >= 1 && day <= 31);
    }

public:

    //function to add task
    void addTask(int month, int day, std::string task) {

        if (isValidDate (month, day) ) { 

            tasks[month - 1][day - 1] = task;
            std::cout << "Task added successfully!" << std::endl;
       
        } 
        
        else {
            std::cout << "Invalid month or day" << std::endl;
        }
   
    }

    //function to remove task
    void removeTask(int month, int day) {

        if (isValidDate(month, day)) {
        
            tasks[month - 1][day - 1] = " ";
            std::cout << "Task removed successfully!" << std::endl;
        
        }
        
         else {
            std::cout << "Invalid month or day." << std::endl;
          }
    }

    //function to display task
    void displayTasks() {

        std::cout << "Tasks for the year " << currentYear << ":" << std::endl;
        
        for (int month = 0; month < 12; month++) {
        
            for (int day = 0; day < 31; day++) {
        
                if (!tasks[month][day].empty()) {
                    std::cout << "Month " << month + 1 << ", Day " << day + 1 << ": " << tasks[month][day] << std::endl;
                }
        
            }
        
        }
    
    }

}; //end of class

int main() {
    Calendar myCalendar;


    int n;
    std::cout<< "Choose an option" <<std::endl<< "1)Add task" <<std::endl<< "2)display task" <<std::endl<< "3)Remove task" <<std::endl<< "4)update task" <<std::endl;
    std::cin >>n;

    switch(n) {
    
    case 1:

    //add task
    std::cout<< "Adding task Manually" <<std::endl;
    // Manually input 5-6 tasks
    myCalendar.addTask(1, 15, "Task 1");
    myCalendar.addTask(2, 8, "Task 2");
    myCalendar.addTask(4, 20, "Task 3");
    myCalendar.addTask(7, 5, "Task 4");
    myCalendar.addTask(9, 12, "Task 5");
    myCalendar.addTask(12, 25, "Task 6");
    break;

    case 2:
    
    // Display tasks
    std::cout << "Initial tasks:" << std::endl;
    myCalendar.displayTasks();
    break; 

    case 3:
    
    // Demonstrate task removal
    myCalendar.removeTask(2, 8);
    myCalendar.removeTask(7, 5);
    break;

    case 4:

    // Display updated tasks
    std::cout << "Updated tasks after removal:" << std::endl;
    myCalendar.displayTasks();
    break;

    }

    return 0;
}