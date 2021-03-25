#include <iostream>
#include "accounts.h"
#include "savings.h"

int main() {
	Account acc("Bob", 1000);
	std::cout << "Initial balance:" << acc.GetBalance() << std::endl;
	acc.Deposit(200);
	acc.Withdraw(380);
	std::cout << "Balance : " << acc.GetBalance() << std::endl;
}