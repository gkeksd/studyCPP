#include <iostream>
using namespace std;

int main() {
	int n, num;
	int seven = 0;
	for (int i =0; ;) {
		if (i >= 1) cout << "���� ������ �Է��ϼ���: ";
		else cout << "������ ������ ���� ������ �Է��ϼ���: ";
		cin >> n;
		++i;
		if (n > 0) break;
	}

	for (int i = 0; i < n; i++) {
		cout << "������ �Է����ּ���: ";
		cin >> num;
		if (num % 7 == 0) seven = num;
	}
	if (seven == 0) cout << "7�� ���� �� �ִ� ���ڰ� �����ϴ�.";
	else cout << seven << "��/�� 7�� ���� �� �ֽ��ϴ�.";
}