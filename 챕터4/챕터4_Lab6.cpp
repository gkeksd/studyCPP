#include <print>
#include <iostream>
using namespace std;

int main() {
	int num1 = 0; int num2 = 0; int num3 = 0; //���� �������� �� ���
	int result = 0;
	int numResult; //�Ǳ��� ����

	print("���������� ax^2 + bx + c = 0�� ��� a, b, c�� ���� �Է��ϼ���: ");
	cin >> num1 >> num2 >> num3;

	result = (num2 * num2) - (4 * num1 * num3); //������������ �Ǻ���

	if (result > 0) {
		numResult = 2;
		print("�Ǳ��� ����: {}", numResult);
	}
	else if (result == 0) {
		numResult = 1;
		print("�Ǳ��� ����: {}", numResult);
	}
	else if (result < 0) {
		print("�Ǳ��� ����: {}", numResult);
	}
}
