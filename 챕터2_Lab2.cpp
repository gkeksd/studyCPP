#include <print>
#include <iostream>
using namespace std;

int main() {
	int year, dangi_year;

	print("올해의 서기 년도를 입력하세요: ");
	cin >> year;

	dangi_year = year + 2333;

	print("올해는 단기 {}년입니다", dangi_year);
}