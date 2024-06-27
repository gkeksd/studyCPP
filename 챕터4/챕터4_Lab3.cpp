#include <print>
#include <iostream>
using namespace std;

int main() {
	int year, month, day;
	int numDay = 0;

	print("올해의 연도를 입력하세요: ");
	cin >> year;
	print("오늘이 몇 월인지 입력하세요: ");
	cin >> month;
	print("오늘이 몇 일인지 입력하세요: ");
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

	print("올해의 {}번째 날입니다.", numDay);
}