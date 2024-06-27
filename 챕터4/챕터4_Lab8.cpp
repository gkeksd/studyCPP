#include <print>
#include <iostream>
using namespace std;

int main() {
	int pay; int realPay = 0;

	print("연봉을 입력하세요: ");
	cin >> pay;

	realPay = pay * 0.893;

	print("실수령 월급: {}", realPay / 12);
}