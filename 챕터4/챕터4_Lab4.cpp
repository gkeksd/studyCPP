#include <print>
#include <iostream>
using namespace std;

int main() {
	int speed;

	print("�ڵ����� �ӵ��� �Է��ϼ���: ");
	cin >> speed;

	if (speed > 120) {
		print("���� �����Դϴ�.");
	}
	else if (speed < 50) {
		print("���� �����Դϴ�.");
	}
	else {
		print("���� �����Դϴ�");
	}
}