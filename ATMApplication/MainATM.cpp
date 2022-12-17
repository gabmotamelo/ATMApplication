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
	Account firstAccount("123456","Gabriels", "123.456.789-00");

	Account secondAccount("654321","Motasss", "987.654.321-00");

	Account thirdAccount("655454", "Melosss", "987.654.321-00");


	firstAccount.deposit(500);
	firstAccount.withdraw(200);

	secondAccount.deposit(300);
	secondAccount.withdraw(50);

	cout << "First Account = R$ " << firstAccount.getBalance() << endl << "Second Account = R$ " << secondAccount.getBalance() << endl;

	cout << "Numero de contas :" <<Account::getUsersQuantity() << endl;

	return 0;
}