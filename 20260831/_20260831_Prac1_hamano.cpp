#include "_20260831_Prac1_hamano.h"
int main() {
    BankAccount account("Alice", 5000.0);

    account.displayAccountInfo();

    account.deposit(1000.0);
    account.withdraw(2000.0);
    account.withdraw(5000.0); // écçÇïsë´Ç≈é∏îs

    account.displayAccountInfo();

    return 0;
}