#include <print>
#include <iostream>
using namespace std;

int main() {
	int pay; int realPay = 0;

	print("������ �Է��ϼ���: ");
	cin >> pay;

	realPay = pay * 0.893;

	print("�Ǽ��� ����: {}", realPay / 12);
}