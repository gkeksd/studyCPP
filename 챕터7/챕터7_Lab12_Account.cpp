#include "Account.h"

int main() {
	Account acc1{ 2000 };
	Account acc2{ 5000 };
	Account acc3{ 1000 };

	acc1.deposit(1000);
	acc2.deposit(0);
	acc3.deposit(2000);
	acc1.withdraw(2000);
	acc2.withdraw(5000);
	acc3.withdraw(10000);
}