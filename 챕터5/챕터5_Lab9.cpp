#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	int n;
	double num;
	double price = 1;
	cout << "N���� 1�Ⱓ ������·�(%)�� �Է����ּ���: ";
	cin >> n >> num;

	for (int i = 0; i < n; i++) {
		price *= (1 + num / 100);
	}

	cout << n << "�� �� ����: ���� ������ " << fixed << setprecision(3) << price << "��";
}