#include <iostream>

class Employee {
protected:
    int employeeID;
    std::string employeeName;

public:
    Employee(int id, const std::string& name) : employeeID(id), employeeName(name) {}

    virtual double calculatePay() const {
        return 0.0;
    }

    virtual void displayDetails() const {
        std::cout << "Employee ID: " << employeeID << ", Name: " << employeeName;
    }
};

class FullTimeEmployee : public Employee {
private:
    double monthlySalary;

public:
    FullTimeEmployee(int id, const std::string& name, double salary)
        : Employee(id, name), monthlySalary(salary) {}

    double calculatePay() const override {
        return monthlySalary;
    }

    void displayDetails() const override {
        Employee::displayDetails();
        std::cout << ", Type: Full-time, Monthly Salary: " << monthlySalary << std::endl;
    }
};

class PartTimeEmployee : public Employee {
private:
    double hourlyWage;
    int hoursWorked;

public:
    PartTimeEmployee(int id, const std::string& name, double wage, int hours)
        : Employee(id, name), hourlyWage(wage), hoursWorked(hours) {}

    double calculatePay() const override {
        return hourlyWage * hoursWorked;
    }

    void displayDetails() const override {
        Employee::displayDetails();
        std::cout << ", Type: Part-time, Hourly Wage: " << hourlyWage
                  << ", Hours Worked: " << hoursWorked << std::endl;
    }
};

int main() {
    FullTimeEmployee fullTimeEmp(101, "AAA", 5000);
    PartTimeEmployee partTimeEmp(102, "BBB", 15, 40);

    std::cout << "Displaying Details:" << std::endl;
    fullTimeEmp.displayDetails();
    partTimeEmp.displayDetails();

    std::cout << "\nCalculating Pay:" << std::endl;
    std::cout << "Full-time Employee Pay: $" << fullTimeEmp.calculatePay() << std::endl;
    std::cout << "Part-time Employee Pay: $" << partTimeEmp.calculatePay() << std::endl;

    // Demonstrate early or static binding
    Employee* empPtr = &fullTimeEmp;
    std::cout << "\nUsing base class pointer to calculate Full-time Employee Pay: $"
              << empPtr->calculatePay() << std::endl;

    return 0;
}
