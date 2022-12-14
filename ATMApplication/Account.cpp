#include "Account.hpp"
#include <iostream>

void Account::withdraw(double withdrawAmount) {
	if (withdrawAmount < 0) {
		std::cout << "Withdraw denied: Amount balance is negative" << std::endl;
		return;
	}
	if (withdrawAmount > balance) {
		std::cout << "Not enough money" << std::endl;
		return;
	}
	balance -= withdrawAmount;
}
void Account::deposit(double depositAmount) {
	if (depositAmount)
	{
		if (depositAmount < 0)
		{
			std::cout << "Deposit denied: Amount deposit is negative" << std::endl;
			return;
		}
		
		balance += depositAmount;
	}
}