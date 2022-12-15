#include "Account.hpp"
#include <iostream>

void Account::withdraw(double withdrawAmount) {
	if (withdrawAmount < 0) {
		std::cout << "Withdraw denied: Amount balance is negative" << std::endl;
		return;
	}
	if (withdrawAmount > balance) {
		std::cout << "Withdraw denied: Not enough money" << std::endl;
		return;
	}
	balance -= withdrawAmount;
}
void Account::deposit(double depositAmount) {
	if (depositAmount < 0)
	{
		std::cout << "Deposit denied: Amount deposit is negative" << std::endl;
		return;
	}
	balance += depositAmount;
}

double Account::getBalance() const{
	return balance;
}

std::string Account::getNameHolder() {
	return nameHolder;
}

void Account::setNameHolder(std::string name)
{
	nameHolder = name;
}

std::string Account::getCpfHolder() {
	return cpfHolder;
}

void Account::setCpfHolder(std::string cpf) {
	cpfHolder = cpf;
}

std::string Account::getAccountNumber() {
	return accountNumber;
}

void Account::setAccountNumber(std::string number) {
	accountNumber = number;
}

