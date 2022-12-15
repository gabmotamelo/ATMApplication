#pragma once
#include <string>

class Account
{
private:
	std::string accountNumber;
	std::string cpfHolder;
	std::string nameHolder;
	double balance = 0;

public:
	void withdraw(double withdrawAmount);
	void deposit(double depositAmount);
	double getBalance() const;

	void setNameHolder(std::string name);
	std::string getNameHolder();

	void setCpfHolder(std::string cpf);
	std::string getCpfHolder();
	
	void setAccountNumber(std::string number);
	std::string getAccountNumber();
};