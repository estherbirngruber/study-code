#include <iostream>
#include <string>
#include <cstdint>

class BankAccount {
    private:
        std::string owner;
        double balance;
    public:
        BankAccount() : balance(0.0) {}
        void setOwner(std::string ownerName) {
            owner = ownerName;
        }
        std::string getOwner () {
            return owner;
        }
        void deposit(double amount){
            if (amount <= 0) {
                std::cout << ("invalid amount of deposit. deposit cancelled.");
                return;
            }
            balance += amount;
            std::cout << amount << (" added to balance") << std::endl;
        }
        void withdraw(double amount){
            if (amount > balance) {
                std::cout << ("you dont have enough money to withdraw ") << amount << std::endl;
            }else {
                balance -= amount;
            }
        }
        double getBalance();
        void getAccountInfo();
};

double BankAccount::getBalance() {
    return balance;
}

void BankAccount::getAccountInfo() {
    std::cout << ("Owner: ") << getOwner() << std::endl;
    std::cout << ("Balance: ") << getBalance() << std::endl;
}


int main () {
    BankAccount myAccount;

    myAccount.setOwner("Esther");
    myAccount.getAccountInfo();

    myAccount.deposit(1234.12);
    myAccount.getAccountInfo();

    myAccount.withdraw(99999);
    myAccount.getAccountInfo();

    myAccount.withdraw(20);

    myAccount.getAccountInfo();
}