#include <print>
#include <iostream>
using namespace std;

int main() {
	double rat1, rat2;
	double wid, len;

	print("ȭ���� ���� ���� ������ �Է��ϼ���: ");
	cin >> rat1 >> rat2;
	print("ȭ���� ���� ���̸� �Է��ϼ���: ");
	cin >> wid;
	println("");

	len = wid * rat2 / rat1;

	print("���� ����: {}", len);
}