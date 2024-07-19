#include <iostream>
#include "Account.h"
using namespace std;

int Account::accNum = 100001;

Account::Account(int money) : money{ money } {
	cout << Account::accNum << " ���� ����\n�ܾ�: " << money << "\n\n";
	acc = accNum;
	accNum++;
}
Account::~Account() {
	cout << acc << " ���� ����\n";
}
void Account::deposit(int inMoney) {
	if (inMoney > 0) {
		money += inMoney;
		cout << "����: " << acc << "\n�Ա�: " << inMoney << "\n�ܾ�: " << money << "\n\n";
	}
	else cout << "����: " << acc << "\n�Ա�: " << inMoney << "\n�Ա� ���\n�ܾ�: " << money << "\n\n";
}
void Account::withdraw(int outMoney) {
	if (outMoney <= money) {
		money -= outMoney;
		cout << "����: " << acc << "\n���: " << outMoney << "\n�ܾ�: " << money << "\n\n";
	}
	else cout << "����: " << acc << "\n���: " << outMoney << "\n��� ���\n�ܾ�: " << money << "\n\n";
}