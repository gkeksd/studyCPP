#include <iostream>
using namespace std;

int calc(int num);

int main() {
	int num;
	cout << "���� ������ �Է��ϼ���: ";
	cin >> num;
	cout << "1���� " << num << "������ ��: " << calc(num);
}

int calc(int num) {
	int sum = 0;
	if (num == 0) return 0;
	else return num + calc(num - 1);
}