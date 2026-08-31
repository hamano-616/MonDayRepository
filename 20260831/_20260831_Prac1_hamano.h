#pragma once
#include <iostream>
#include <string>
using namespace std;
class BankAccount
{
private:
    std::string accountHolder; // 口座名義人
    double balance;            // 残高

public:
    //銀行口座
    BankAccount(const string& holder, double initialBalance)
        : accountHolder(holder), balance(initialBalance) {
    }
    //残高の取得
    double getBalance() const {
        return balance;
    }
    //入金
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposited: " << amount << "\n";
        }
        else {
            cout << "Invalid deposit amount.\n";
        }
    }
    //引き出す
    void withdraw(double amount) {
        if (amount > 0 && amount <= balance)
        {
            balance -= amount;
            cout << "Withdrawn: " << amount << "\n";
        }
        else
        {
            cout << "Invalid withdraw amount or insufficient funds.\n";
        }
    }

    void displayAccountInfo() const
    {
        //口座の名義
        cout << "Account Holder: " << accountHolder << "\n"
            //現在の残高の表示
            << "Current Balance: " << balance << "\n";
    }
};

