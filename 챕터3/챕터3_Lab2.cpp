#include <print>
#include <iostream>
using namespace std;

int main() {
	int num;

	print("�� �ڸ� ���� ������ �Է��ϼ���: ");
	cin >> num;

	println("���� �ڸ�: {}", num / 100);
	println("���� �ڸ� : {}", (num / 10) % 10 );
	print("���� �ڸ�: {}", num % 10);
}