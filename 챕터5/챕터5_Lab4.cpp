#include <iostream>
using namespace std;

int main() {
	int n;
	int min, max;
	while (1) {
		cout << "������ ������ ���� ������ �Է��ϼ���: ";
		cin >> n;
		if (n > 0) break;
	}
	int num;
	for (int i = 0; i < n; i++) {
		cout << "������ �Է��ϼ���: ";
		cin >> num;
		if (i == 0) {
			min = num;
			max = num;
		}
		if (num > max) max = num;
		else if (num < min) min = num;
	}
	cout << "�ּڰ� = " << min << "\n�ִ� = " << max;
}