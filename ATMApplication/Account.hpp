#pragma once
#include <string>

class Account
{
private:
	static int usersQuantity;

public:
	static int getUsersQuantity();


private:
	std::string m_AccountNumber;
	std::string m_CpfHolder;
	std::string m_NameHolder;
	double balance;


public:
	Account(std::string accountNumber, std::string nameHolder, std::string cpfHolder);
	~Account();
	void withdraw(double withdrawAmount);
	void deposit(double depositAmount);
	double getBalance() const;

	void setNameHolder(std::string name);
	std::string getNameHolder();

	void setCpfHolder(std::string cpf);
	std::string getCpfHolder();
	
	void setAccountNumber(std::string number);
	std::string getAccountNumber();
	
private:
	void checkNameLength();
};