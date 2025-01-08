// bad_allocation ����ó�� Ŭ���� ����
#include <new>
#include <iostream>
using namespace std;

int main() {
	register int size; // register�� ������ �������� ������ ��������. ����� �繮ȭ
	int* p = nullptr;
	try {
		cin >> size;
		p = new int[size];
	}
	catch (bad_alloc error) {
		cout << error.what() << "\n";
	}
	delete[] p;
	return 0;
}