#include <print>
#include<iostream>
using namespace std;

int main() {
	unsigned int num1;
	int num2;

	print("����� �Է��ϼ���: ");
	cin >> num1;
	while (num1 == 0) { //num1�� �Է°��� ����� �ƴ� �� �ٽ� �Է��ϵ��� �ݺ�
		print("����� �Է��ϼ���: ");
		cin >> num1;
		
	}

	print("������ �Է��ϼ���: ");
	cin >> num2;
	while (num2 >= 0) { //num2�� �Է°��� ������ �ƴ� �� �ٽ� �Է��ϵ��� �ݺ�
		print("������ �Է��ϼ���: ");
		cin >> num2;
	}

	print("{} + {} = {}", num1, num2, num1 + num2);
}