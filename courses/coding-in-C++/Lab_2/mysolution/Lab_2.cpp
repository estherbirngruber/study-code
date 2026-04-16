#include <iostream>
#include <string>

class BankAccount {
    private:
        std::string owner;
        double balance;
    public:
        void setOwner(std::string ownerName) {
            owner = ownerName;
        }
        std::string getOwner () {
            return owner;
        }
        void deposit(double amount){
            if (amount <= 0) {
                std:cout << "invalid amount of deposit. deposit cancelled."
                return;
            }
            balance += amount;
            std::cout << "amount added to balance"
        }
        void withdraw(double amount){
            if (amount > balance) {
                std::cout << "you dont have enough money";
            }



        }
        double getBalance();
        void getAccountInfo();
};

double getBalance() {

}

void getAccountInfo(){

}

scheiss c++;