#include <print>
#include <iostream>
using namespace std;

int main() {
	int cookie, people;

	print("����� ���� �� ���ΰ���?: ");
	cin >> cookie;
	print("ģ���� �� ���ΰ���?: ");
	cin >> people;
	print("���� ��Ű�� ����: {}", cookie % people);
}