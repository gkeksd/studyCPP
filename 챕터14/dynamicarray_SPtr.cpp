#include "dynamicarray_SPtr.h"
#include "smartptr.h"

DynamicArray_SPtr::DynamicArray_SPtr(int size) : size(size), sp(new int[size]) {
	try {
		//sp = new int[size];
		for (int i = 0; i < size; i++) sp[i] = 0; // ���ȣ ������ �����ε��

		//throw MyException(2000, "�޸� ����", this);
	}
	//catch (const MyException& me) {
	catch (...) { // ��� ���� ��쿡�� ����
		cout << "��ü ���� �Ϸ�!\n";
		throw;
	}
}
DynamicArray_SPtr::~DynamicArray_SPtr() {
	cout << "�� �޸� ���� �Ϸ�!\n";
}

void DynamicArray_SPtr::setAt(int index, int value) {
	if (index < 0 || index >= size) throw MyException(4882, "�Ҵ� ����\n", this);
	sp[index] = value;
}
int DynamicArray_SPtr::getAt(int index) {
	if (index < 0 || index >= size) throw MyException(4882, "���� ����\n", this);
	else return sp[index];
}