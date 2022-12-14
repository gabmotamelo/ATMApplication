#pragma once
#include <string>

struct Account
{
	std::string accountNumber;
	std::string cpfHolder;
	std::string nameHolder;
	double balance = 0;

	void withdraw(double withdrawAmount);
	void deposit(double depositAmount);
};