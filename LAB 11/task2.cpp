//programmer: Laiba Bint-e-Zia
//id: 23K-0006
#include<iostream>
//DDIN'T MAKE THE MAIN FUNCTION BECAUSE QUESTION DIDN'T ASK TO DO SO
class Account {

    int accountNumber;
    double balance;

    public:

    Account(int accNum, double bal) : accountNumber(accNum), balance(bal) {}

    virtual void deposit(int amount) = 0;
    virtual void withdraw(int amount) = 0;
    virtual double calculateInterest() = 0;

    int getAccountNumber() { return accountNumber; }
    int getBalance() { return balance; }

};

class SavingsAccount: public Account {

    double interestRate;

    public:

    SavingsAccount(int accNum, double bal, double iR) : Account(accNum, bal), interestRate(iR) {}

    double getInterestRate(){ return interestRate; }

    void deposit(int amount) {

        double bal = getBalance();
        std::cout<< "Balance before depositing: " << bal <<std::endl;
        bal+=amount;
        std::cout<< "Balance after depositing: " << bal <<std::endl;

    }

    void withdraw(int amount) {

        double bal = getBalance();
        std::cout<< "Balance before withdraw: " << bal <<std::endl;
        bal-=amount;
        std::cout<< "Balance after withdraw: " << bal <<std::endl;

    }

    double calculateInterest() {
        std::cout<< "the interest is: ";
        return interestRate * getBalance();
    }

};

class CurrentAccount : public Account {

    double overDraftLimit;

    public:

    CurrentAccount(int accNum, double bal, double overdrftlim) : Account(accNum, bal), overDraftLimit(overdrftlim) {}

    void deposit(int amount) {

        double bal = getBalance();
        std::cout<< "Balance before depositing: " << bal <<std::endl;
        bal+=amount;
        std::cout<< "Balance after depositing: " << bal <<std::endl;

    }

    void withdraw(int amount) {

        double bal = getBalance();

        if(overDraftLimit <= amount) {
            std::cout<< "Limit Exceeded\n";
        } 
        else {
            std::cout<< "Balance before withdraw: " << bal <<std::endl;
            bal-=amount;
            std::cout<< "Balance after withdraw: " << bal <<std::endl;
        }
    }

    double calculateInterest() {

        std::cout<< "CURRENT ACCOUNT DONOT OWE INTEREST: ";
    }

};

