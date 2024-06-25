#include <print>
#include <iostream>
using namespace std;

int main() {
	int num1, num2;

	print("두 정수를 입력하세요: ");
	cin >> num1;
	cin >> num2;

	println("{}", num1 + num2);
	println("{}", num1 - num2);
	println("{}", num1 * num2);
	println("{}", num1 / num2);
	print("{}", num1 % num2);
}