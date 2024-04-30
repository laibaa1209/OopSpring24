/* programmer: Laiba Bint-e-Zia
 * ID: 23K-0006*/

#include<iostream>

//classs to define bank account
class BankAccount {
    
    std::string accountNumber;
    std::string accountHolderName;
    double balance;
    
    public: 
    
    BankAccount(std::string accountNumber, std::string accountHolderName, double balance) {
        
        this->balance = balance;
        this->accountNumber = accountNumber;
        this->accountHolderName = accountHolderName;
        
    }
    
    void deposit() {
        
        double amount, temp = balance;
        std::cout<<"enter the amount you wish to deposit: ";
        std::cin>>amount;
        
        balance+=amount;
        
        if( balance > temp) {
            std::cout<<"deposit successfull..your current balance: "<<balance <<std::endl;
            std::cout<<"Name: "<<accountHolderName<<std::endl;
            std::cout<<"Account Number:  "<<accountNumber<<std::endl;
         }
         else{
             std::cout<<"Deposit unsucessfull..current amount: "<<balance<<std::endl;
         }
    }
         
    void withdraw() {
        
        double amount;
        std::cout<<"enter the amount you wish to withdraw: ";
        std::cin>>amount;
        
        if( balance > amount ) {
            
              balance-=amount;
            std::cout<<"withdraw successfull..your current balance: "<<balance <<std::endl;
            std::cout<<"Name: "<<accountHolderName<<std::endl;
            std::cout<<"Account Number:  "<<accountNumber<<std::endl;
       
         }
         else{
             std::cout<<"withdraw unsucessfull..insufficent balance: "<<balance<<std::endl;
         }
    }
    
    void display() {
        
        std::cout<<"THE DETAILS ARE: "<<std::endl;
        std::cout<<"Name: "<<accountHolderName<<std::endl;
        std::cout<<"Account Number:  "<<accountNumber<<std::endl;
        std::cout<<"Balance: "<<balance<<std::endl;
    }
    
};

int main() {
    
    BankAccount myBank[3] = {
        BankAccount("74893ht", "laiba", 24560),
        BankAccount("2fbhe9h", "amna", 15000),
        BankAccount("hiugu25", "hira", 20000)
    };

    for(int i =0; i < 3; i++) {
        std::cout<<"For "<< i+1 <<" instance: "<<std::endl;
        myBank[i].display();
    }
    
    std::cout<<"deposit amount and withdraw amount"<<std::endl;
    myBank[1].deposit();
    myBank[2].withdraw();

    return 0;
}

