#include <iostream>
using namespace std;

int main() {
	int num1, num2;
	for (int i = 0; i < 3; i++) {
		cout << "������ �Է��ϼ���: ";
		cin >> num1;
		cout << "�Ǵٸ� ������ �Է��ϼ���: ";
		cin >> num2;

		//���� 1. try-catch �������� ���ܸ� ó���ϴ� ���α׷�
		try {
			if (num2 == 0) throw 999;
			cout << "rufrhk = " << num1 / num2 << "\n";
		}
		catch (int i) {
			cout << "[����] 0���� ���� �� �����ϴ�\n";
		}
		catch (char c) {
			cout << "[����] 0���� ���� �� �����ϴ�\n";
		}
	}

	return 0;
}