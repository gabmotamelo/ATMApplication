#include <iostream>
using namespace std;
#include "Account.hpp" 

void showMenu() {
	cout << "******************** MENU **********************" << endl;
	cout << "1. Check balance" << endl;
	cout << "2. Deposit" << endl;
	cout << "3. Withdraw"<< endl;
	cout << "4. Exit" << endl;
	cout << "************************" << endl;
}



int main()
{
	Account firstAccount;
	firstAccount.accountNumber = "123456";
	firstAccount.cpfHolder = "123.456.789-00";
	firstAccount.nameHolder = "Gabriel";

	Account secondAccount;
	firstAccount.accountNumber = "654321";
	firstAccount.cpfHolder = "987.654.321-00";
	firstAccount.nameHolder = "Mota";
	

	firstAccount.deposit(200);
	secondAccount.deposit(400);

	firstAccount.withdraw(300);
	secondAccount.withdraw(200);

	cout << "First Account = R$ " << firstAccount.getBalance() << endl << "Second Account = R$ " << secondAccount.getBalance() << endl;

}