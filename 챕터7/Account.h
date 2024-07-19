#pragma once

class Account {
private:
	static int accNum;
	int acc;
	int money;
public:
	Account(int money);
	~Account();
	void deposit(int inMoney);
	void withdraw(int outMoney);
};