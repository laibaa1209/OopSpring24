/*Programmer:  Laiba Bint-e-Zia
  Date: 15th feb 2024
  Description: Define a class for week days
  Roll Num: 23K-0006
*/

#include<iostream>

//class for weekdays
class WeekDays{
    
    private:
    
    //private attributes to store information
    std::string days[7];
    int currentDay;
    
    public: 
    
    //defauult constructor to intialize the days
    WeekDays() {
        
        //initializing the days arrays
        days[0] = "Sunday";
        days[1] = "Monday";
        days[2] = "Tuesday";
        days[3] = "Wednesday";
        days[4] = "Thursday";
        days[5] = "Friday";
        days[6] = "Saturday";
        
        currentDay = 0; //current day set to sunday
    }
    
    //parameterize constructor to set the current day accordingly
    WeekDays(int theDayToday) : WeekDays() {    
            currentDay = theDayToday % 7;
    }

    //member function to get current day
    std::string getCurrentDay() {
        return days[currentDay];
    }
    
    //method to get Next day
    std::string getNextDay() {
        return days[(currentDay + 1) % 7];
    }
    
    //method to get previous day
    std::string getPreviousDay() {
        return days[(currentDay + 6) % 7];
    }
    
    //method to get nth day from today
    std::string getNthDay(int n) {
        return days[(currentDay + n) % 7];
    }
}; //end of class

//start of main
int main() {
    
    WeekDays days(0);

    std::cout<< "Current day: " <<days.getCurrentDay() <<std::endl;
    std::cout<< "Next day: " <<days.getNextDay() <<std::endl;
    std::cout<< "Previous day: " <<days.getPreviousDay() <<std::endl;
    std::cout<< "Nth day: " <<days.getNthDay(9) <<std::endl;
    
    
    return 0;
} //end of main