#include <print>
#include <iostream>
using namespace std;

int main() {
	double num1, num2;

	print("두 실수를 차례로 입력하세요: ");
	cin >> num1;
	cin >> num2;

	println("{} + {} = {}", num1, num2, num1 + num2);
	print("{} - {} = {}", num1, num2, num1 - num2);
}
