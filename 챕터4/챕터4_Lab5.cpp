#include <print>
#include <iostream>
using namespace std;

int main() {
	int num1, num2;
	int result = 0;
	char oper;

	print("����� ���� �Է��ϼ���: ");
	cin >> num1 >> oper >> num2;

	switch (oper) {
	case '+': result = num1 + num2; break;
	case '-': result = num1 - num2; break;
	case '*': result = num1 * num2; break;
	case '/': result = num1 / num2; break;
	default: print("�߸� �Էµ� ���Դϴ�."); break;
	}

	print("{} {} {} = {}", num1, oper, num2, result);
}//fallthrough