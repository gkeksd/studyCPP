#include <print>
#include <iostream>
using namespace std;

int main() {
	float num;

	print("�ε� �Ҽ��� �Է�: ");
	cin >> num;
	println("");

	println("���� ��: {}", num);
	println("���� �κ�: {}", static_cast<int>(num));
	print("�Ҽ��� �Ʒ� �κ�: {}", num - static_cast<int>(num));
}