#include <print>
#include <iostream>
using namespace std;

int main() {
	int year, month, day;
	int numDay = 0;

	print("������ ������ �Է��ϼ���: ");
	cin >> year;
	print("������ �� ������ �Է��ϼ���: ");
	cin >> month;
	print("������ �� ������ �Է��ϼ���: ");
	cin >> day;

	bool leap = (year % 4 == 0 && !(year % 100 == 0)) || (year % 400 == 0);

	switch (month) {
	case 12: numDay += 30; //fallthrough
	case 11: numDay += 31;
	case 10: numDay += 30;
	case 9: numDay += 31;
	case 8: numDay += 31;
	case 7: numDay += 30;
	case 6: numDay += 31;
	case 5: numDay += 30;
	case 4: numDay += 31;
	case 3: numDay += leap ? 29 : 28;
	case 2: numDay += 31;
	case 1: numDay += 0;
	}

	numDay += day;

	print("������ {}��° ���Դϴ�.", numDay);
}