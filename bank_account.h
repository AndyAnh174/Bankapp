#ifndef BANK_ACCOUNT_H
#define BANK_ACCOUNT_H

#include <string>

class BankAccount {
private:
    std::string accountNumber;
    std::string ownerName;
    double balance;
    std::string username;
    std::string password;

public:
    BankAccount(std::string accNum, std::string owner, std::string username, std::string password);

    bool authenticate(std::string username, std::string password);
    void deposit(double amount);
    void withdraw(double amount);
    void displayBalance();
    std::string getAccountNumber() const;
};

#endif // BANK_ACCOUNT_H
