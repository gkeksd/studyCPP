#include <iostream>
using namespace std;

int main() {
	int n, m;
	cout << "n�� m�� �Է����ּ���: ";
	cin >> n >> m;
	int sum = m * (m + 1) / 2 - n * (n - 1) / 2;
	cout << n << "���� " << m << "������ �������� ���� " << sum << "�Դϴ�.";
}