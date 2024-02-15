#include <iostream>

#include "Account.h"

int main() {

    Account firstAccount(600);
    Account secondAccount(300);

    std::cout << firstAccount.getBalance() << std::endl;

    secondAccount.debit(500);
    std::cout << secondAccount.getBalance() << std::endl;

    firstAccount.credit(200);
    std::cout << firstAccount.getBalance() << std::endl;

    return 0;
}