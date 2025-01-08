#include "dynamicarray.h"

DynamicArray::DynamicArray(int size) : size(size) {
	try {
		ptr = new int[size];
		for (int i = 0; i < size; i++) ptr[i] = 0;

		throw MyException(2000, "�޸� ����", this);
	}
	//catch (const MyException& me) {
	catch (...) { // ��� ���� ��쿡�� ����
		delete[] ptr;
		ptr = nullptr;
		cout << "��ü ���� �Ϸ�!\n";
		throw;
	}
}
DynamicArray::~DynamicArray() {
	delete[] ptr;
	ptr = nullptr;
	cout << "�� �޸� ���� �Ϸ�!\n";
}

void DynamicArray::setAt(int index, int value) {
	if (index < 0 || index >= size) throw MyException(4882, "�Ҵ� ����\n", this);
	ptr[index] = value;
}
int DynamicArray::getAt(int index) {
	if (index < 0 || index >= size) throw MyException(4882, "���� ����\n", this);
	else return ptr[index];
}