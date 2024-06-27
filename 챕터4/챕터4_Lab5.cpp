#include <print>
#include <iostream>
using namespace std;

int main() {
	int num1, num2;
	int result = 0;
	char oper;

	print("계산할 식을 입력하세요: ");
	cin >> num1 >> oper >> num2;

	switch (oper) {
	case '+': result = num1 + num2; break;
	case '-': result = num1 - num2; break;
	case '*': result = num1 * num2; break;
	case '/': result = num1 / num2; break;
	default: print("잘못 입력된 식입니다."); break;
	}

	print("{} {} {} = {}", num1, oper, num2, result);
}//fallthrough