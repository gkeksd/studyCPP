#include <iostream>
using namespace std;

int pow(int num1, int num2);

int main() {
	int a, b; //�ذ� ����
	cout << "�ذ� ������ �Է��� �ּ���: ";
	cin >> a >> b;

	cout << pow(a, b);
}

int pow(int num1, int num2) {
	if (num2 == 0) return 1;
	else return num1* pow(num1, num2 - 1);
}