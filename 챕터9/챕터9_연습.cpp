#include <iostream>
using namespace std;

int main() {
	int a = 5;
	int& b = a; //�� ����
	cout << a << "\n";
	cout << b << "\n";
	b++;
	cout << a << "\n";
	int* c = &a; //�ּڰ� ����
	cout << c << "\n";
	cout << *c << "\n"; //������ ����
	cout << &a; //������ �޸� �ּ�
}