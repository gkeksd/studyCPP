#include <iostream>
using namespace std;

int main() {
	int t;
	double num;
	double sum = 0; double prod = 1;
	while (1) {
		cout << "������ ������ ������ �ƴ� ������ �Է��ϼ���: ";
		cin >> t;
		if (t >= 0) break;
	}
	for (int i = 0; i < t; i++) {
		if (t == 0) break;
		cout << "���ڸ� �Է��ϼ���: ";
		cin >> num;
		sum += num;
		prod *= num;
	}
	cout << "�� = " << sum << "\n�� = " << prod;
}