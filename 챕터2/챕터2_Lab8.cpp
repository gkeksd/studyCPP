#include <print>
#include <iostream>
using namespace std;

int main() {
	char alp, Alp;

	print("�ҹ��� ���ĺ� �Ѱ��� �Է��ϼ���: ");
	cin >> alp;

	Alp = alp - 32;

	print("�빮�ڷ� ��ȯ�� ���: {}", Alp);
}