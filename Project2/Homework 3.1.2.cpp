#include <iostream>

struct BankAccount {
    int accountNumber;        
    char ownerName[100];      
    double balance;           
};


void updateBalance(BankAccount& account, double newBalance) {
    account.balance = newBalance;
}

int main() {
    BankAccount account;

    std::cout << "Enter account number: ";
    std::cin >> account.accountNumber;
    std::cin.ignore();
    std::cout << "Enter owner name: ";
    std::cin.getline(account.ownerName, 100);
    std::cout << "Enter balance: ";
    std::cin >> account.balance;

    double newBalance;
    std::cout << "Enter new balance: ";
    std::cin >> newBalance;

    updateBalance(account, newBalance);

    std::cout << "Your account: " << account.ownerName << ", " << account.accountNumber << ", " << account.balance << std::endl;

    return 0;
}