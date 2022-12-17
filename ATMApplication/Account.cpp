#include "Account.hpp"
#include <iostream>

int Account::usersQuantity = 0;

Account::Account(std::string accountNumber, std::string nameHolder, std::string cpfHolder):
	m_AccountNumber(accountNumber),
	m_NameHolder(nameHolder), 
	m_CpfHolder(cpfHolder), 
	balance(0)
{	
	checkNameLength();
	usersQuantity++;
}

Account::~Account() {
	usersQuantity--;
}


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
	return m_NameHolder;
}


std::string Account::getCpfHolder() {
	return m_CpfHolder;
}

std::string Account::getAccountNumber() {
	return m_AccountNumber;
}

int Account::getUsersQuantity() {
	return usersQuantity;
}

void Account::checkNameLength()
{
	if (m_NameHolder.size() < 5) {}
	{
		std::cout << "Invalid name: Must be more than 5 characters" << std::endl;
		std::exit(1);
	}
}