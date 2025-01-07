#include <iostream>
using namespace std;

int quotient(int first, int second) {
	if(second == 0) cout << "ȣ��� �Լ�\n";
	// ȣ��Ǵ� �Լ� ���� try�� catch ��� throw�� ����
	try {
		if (second == 0) throw 0;
	}
	catch (int i) {
		cout << "[����-ȣ��� �Լ�]0���� ���� �� �����ϴ�\n";
		throw; // ȣ���� �Լ� ������ ���ܸ� �ٽ� ����
	}
	return first / second;
}

int main() {
	int num1, num2;
	for (int i = 0; i < 3; i++) {
		cout << "������ �Է��ϼ���: ";
		cin >> num1;
		cout << "�Ǵٸ� ������ �Է��ϼ���: ";
		cin >> num2;

		//���� 3. ȣ���ϴ� �Լ��� ȣ��Ǵ� �Լ� ��ο� try-catch�� ���ܸ� ó���ϴ� ���α׷�
		try {
			if (num2 == 0) quotient(num1, num2);
			else cout << "��� = " << quotient(num1, num2) << "\n";
		}
		catch (int ex) {
			cout << "[����-ȣ���� �Լ�]0���� ���� �� �����ϴ�\n";
		}
		catch (...) { //�̿� ��Ÿ ���� ��쿡 ���
			cout << "���� �߻�";
		}
	}

	return 0;
}