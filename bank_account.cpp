#include "bank_account.h"
#include <iostream>
#include <string>

BankAccount::BankAccount(std::string accNum, std::string owner, std::string user, std::string pass) : accountNumber(accNum), ownerName(owner), balance(0), username(user), password(pass) {}

bool BankAccount::authenticate(std::string user, std::string pass) {
    return (username == user && password == pass);
}

void BankAccount::deposit(double amount) {
    balance += amount;
    std::cout << "Đã gửi tiền " << amount << " vào tài khoản " << accountNumber << std::endl;
}

void BankAccount::withdraw(double amount) {
    if (balance >= amount) {
        balance -= amount;
        std::cout << "Đã Rút " << amount << " từ tài khoản " << accountNumber << std::endl;
    } else {
        std::cout << "Trong tài khoản không đủ tiền " << accountNumber << std::endl;
    }
}

void BankAccount::displayBalance() {
    std::cout << "Tài Khoản " << accountNumber << " bởi " << ownerName << " có số dư: " << balance << std::endl;
}

std::string BankAccount::getAccountNumber() const {
    return accountNumber;
}
