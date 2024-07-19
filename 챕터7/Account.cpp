#include <iostream>
#include "Account.h"
using namespace std;

int Account::accNum = 100001;

Account::Account(int money) : money{ money } {
	cout << Account::accNum << " °èÁÂ »ý¼º\nÀÜ¾×: " << money << "\n\n";
	acc = accNum;
	accNum++;
}
Account::~Account() {
	cout << acc << " °èÁÂ »èÁ¦\n";
}
void Account::deposit(int inMoney) {
	if (inMoney > 0) {
		money += inMoney;
		cout << "°èÁÂ: " << acc << "\nÀÔ±Ý: " << inMoney << "\nÀÜ¾×: " << money << "\n\n";
	}
	else cout << "°èÁÂ: " << acc << "\nÀÔ±Ý: " << inMoney << "\nÀÔ±Ý Ãë¼Ò\nÀÜ¾×: " << money << "\n\n";
}
void Account::withdraw(int outMoney) {
	if (outMoney <= money) {
		money -= outMoney;
		cout << "°èÁÂ: " << acc << "\nÃâ±Ý: " << outMoney << "\nÀÜ¾×: " << money << "\n\n";
	}
	else cout << "°èÁÂ: " << acc << "\nÃâ±Ý: " << outMoney << "\nÃâ±Ý Ãë¼Ò\nÀÜ¾×: " << money << "\n\n";
}