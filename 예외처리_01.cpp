#include <iostream>
#include <cassert>
using namespace std;

int main() {
	int num1, num2, result;
	for (int i = 0; i < 5; i++) {
		cout << "������ �Է��ϼ���: ";
		cin >> num1;
		cout << "�Ǵٸ� ������ �Է��ϼ���: ";
		cin >> num2;
		//1. ��ũ�θ� ����� num2�� 0�� ��� ����ó��
		//if (num2 == 0) {
		//	cout << "0���� ���� �� �����ϴ�. ���α׷��� �ߴ��մϴ�.";
		//	assert(false); // ���α׷� ���� �ߴ� ��ũ��
		//}
		//result = num1 / num2;
		//cout << "��� = " << result;

		//2. if-else ���� Ȱ���� num2�� 0�϶� ����ó��
		if (num2 == 0) cout << "���� �Է����δ� ó���� �Ұ��մϴ�." << "\n";
		else {
			result = num1 / num2;
			cout << "��� = " << result << "\n";
		}
	}
	return 0;
}