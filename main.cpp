#include <iostream>
#include <cmath>
#include "bank_account.h"

int main() {
    BankAccount account("Hồ Việt Anh", "Việt Anh", "vietanh", "123");

    std::string inputUsername;
    std::string inputPassword;

    std::cout << "Nhập Tài Khoản: ";
    std::cin >> inputUsername;
    std::cout << "Nhập Mật Khẩu: ";
    std::cin >> inputPassword;

    if (!account.authenticate(inputUsername, inputPassword)) {
        std::cout << "Tài khoản và mật khẩu sai." << std::endl;
        return 1;
    }

    while (true) {
        std::cout << "\nMenu:\n";
        std::cout << "1. Gửi Tiền\n";
        std::cout << "2. Rút Tiền\n";
        std::cout << "3. Check tài khoản\n";
        std::cout << "4. Thoát\n";
        std::cout << "Nhập số bạn muốn: ";

        int choice;
        std::cin >> choice;

        switch (choice) {
            case 1: {
                double amount;
                std::cout << "Nhập số tiền gửi: ";
                std::cin >> amount;
                account.deposit(amount);
                break;
            }
            case 2: {
                double amount;
                std::cout << "Nhập số tiền rút: ";
                std::cin >> amount;
                account.withdraw(amount);
                break;
            }
            case 3:
                account.displayBalance();
                break;
            case 4:
                std::cout << "Đang thoát khỏi chương trình." << std::endl;
                return 0;
            default:
                std::cout << "Tùy chọn không hợp lệ. Vui lòng chọn lại." << std::endl;
        }
    }

    return 0;
}
