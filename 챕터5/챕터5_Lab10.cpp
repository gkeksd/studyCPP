#include <iostream>
using namespace std;

int main() {
	int n;
	cout << "�Է¹��� ������ ����: ";
	cin >> n;
	int num;
	int sum1 = 0;
	int sum2 = 0;
	int sum3 = 0;

	for (int i = 0; i < n; i++) {
		cout << i + 1 << "��° ���ڸ� �Է��� �ּ���: ";
		cin >> num;
		sum1 += num / 100;
		sum2 += num / 10 - num / 100 * 10;
		sum3 += num - num / 100 * 100 - (num / 10 - num / 100 * 10) * 10;
	}

	cout << n << "�� ������ �ڸ��� ��: " << sum1 + sum2 + sum3;
}