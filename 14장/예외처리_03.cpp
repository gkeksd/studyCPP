#include <iostream>
using namespace std;

int quotient(int first, int second) {
	cout << "ȣ��� �Լ�\n";
	// ȣ��Ǵ� �Լ� �ʿ��� throw�� ����
	if (second == 0) throw 0;
	return first / second;
}

int main() {
	int num1, num2;
	for (int i = 0; i < 3; i++) {
		cout << "������ �Է��ϼ���: ";
		cin >> num1;
		cout << "�Ǵٸ� ������ �Է��ϼ���: ";
		cin >> num2;

		//���� 2. try-catch �������� �Լ��� ȣ���Ͽ� ���ܸ� ó���ϴ� ���α׷�
		try {
			cout << "��� = " << quotient(num1, num2) << "\n";
		}
		catch (int ex) {
			cout << "0���� ���� �� �����ϴ�\n";
		}
	}

	return 0;
}