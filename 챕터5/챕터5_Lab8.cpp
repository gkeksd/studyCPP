#include <iostream>
using namespace std;

int main() {
	int n;
	while (1) {
		cout << "�ڿ��� N�� �Է����ּ���: ";
		cin >> n;
		if (n > 0) break;
	}
	int num;
	while(cout << n << "�� ������� Ȯ���� ���ڸ� �Է��� �ּ���: ", cin >> num) {
		if (num > 0) (num % n == 0) ? cout << num << "��(��) " << n << "�� ����Դϴ�.\n\n" : cout << num << "��(��) " << n << "�� ����� �ƴմϴ�.\n\n";
	}
}