#include <print>
#include <iostream>
using namespace std;

int main() {
	double num1, num2;

	print("�� �Ǽ��� ���ʷ� �Է��ϼ���: ");
	cin >> num1;
	cin >> num2;

	println("{} + {} = {}", num1, num2, num1 + num2);
	print("{} - {} = {}", num1, num2, num1 - num2);
}