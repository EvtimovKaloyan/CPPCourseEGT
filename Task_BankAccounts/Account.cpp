#include "Account.h"

#include <iostream>

Account::Account(double amount) {
	if (this->balance > 0)
	{
		std::cout << "This account has been already initialized!" << std::endl;
	}
	else if (amount >= 0) {
		this->balance = amount;
	}
	else {
		this->balance = 0;
		std::cerr << "Invalid initial balance" << std::endl;
	}
}

void Account::credit(double amount) {
	this->balance += amount;
}

void Account::debit(double amount) {
	if (amount <= balance) {
		this->balance -= amount;
	}
	else {
		std::cout << "Debit amount exceeded account balance." << std::endl;
		std::cout << "Amount available: ";// << this->getBalance();
	}
}

double Account::getBalance() {
	//std::cout << "Amount available: ";
	return this->balance;
}