//programmer: Laiba Bint-e-ZIa
//std id: 23K-0006

#include<iostream>

class BankAccount {

    int accId;
    double balance;
    int *transactionHistory;
    int numTransactions;

public:
  
    BankAccount(int id, double bal, int *transHistory, int numTrans) : accId(id), balance(bal), numTransactions(numTrans) {
      
        transactionHistory = new int[numTransactions];
       
        for (int i = 0; i < numTransactions; i++) {
            this->transactionHistory[i] = transHistory[i];
        }
    
    }

    BankAccount(const BankAccount& myBank) : accId(myBank.accId), balance(myBank.balance), numTransactions(myBank.numTransactions) {
       
        transactionHistory = new int[numTransactions];
       
        for (int i = 0; i < numTransactions; i++) {
            this->transactionHistory[i] = myBank.transactionHistory[i];
        }
    }

    ~BankAccount() {
        delete[] transactionHistory;
    }

    void displayInfo() {
       
        std::cout << "acc id: " << accId << std::endl;
        std::cout << "account balance: " << balance << std::endl;

        std::cout << "transaction history: " << std::endl;
        
        for (int i = 0; i < numTransactions; i++) {
            std::cout << "transaction " << i + 1 << " : " << transactionHistory[i] << std::endl;
        }

        std::cout << "total number of transactions: " << numTransactions << std::endl;
    
    }

    void updateTransactionHistory() {

        std::cout << "Enter the new transaction values:" << std::endl;

        delete[] transactionHistory;

        transactionHistory = new int[numTransactions];

        for (int i = 0; i < numTransactions; i++) {
            std::cout << "Enter transaction " << i + 1 << ": ";
            std::cin >> transactionHistory[i];
        }
    
    }

};   

int main() {

    int transHist[] = {2000, 50000, 4500, 1000, 56000};

    BankAccount myBank(1245, 450000, transHist, 5);
    myBank.displayInfo();

    BankAccount myBank2(myBank);
    myBank2.displayInfo();

    myBank.updateTransactionHistory();

    myBank.displayInfo();
    myBank2.displayInfo();

    return 0;
}
