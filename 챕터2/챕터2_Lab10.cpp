#include <print>
#include <iostream>
using namespace std;

int main() {
	const int price = 3000;
	int num1, num2; //ö���� ���� ���� ���� ��� ����

	print("ö���� ���� ����� ������ �Է��ϼ���: ");
	cin >> num1;
	print("���� ���� ����� ������ �Է��ϼ���: ");
	cin >> num2;

	int sum = num1 + num2;

	println("ö���� ���� ������ �ִ� ����� ������ {}���Դϴ�.", sum);
	print("����� �� ������ {}���Դϴ�.", price * sum);
}