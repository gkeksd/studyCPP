#include "dynamicarray.h"

DynamicArray::DynamicArray(int size) : size(size) {
	try {
		ptr = new int[size];
		for (int i = 0; i < size; i++) ptr[i] = 0;

		throw MyException(2000, "메모리 오류", this);
	}
	//catch (const MyException& me) {
	catch (...) { // 어떠한 오류 경우에도 동작
		delete[] ptr;
		ptr = nullptr;
		cout << "객체 생성 완료!\n";
		throw;
	}
}
DynamicArray::~DynamicArray() {
	delete[] ptr;
	ptr = nullptr;
	cout << "힙 메모리 해제 완료!\n";
}

void DynamicArray::setAt(int index, int value) {
	if (index < 0 || index >= size) throw MyException(4882, "할당 오류\n", this);
	ptr[index] = value;
}
int DynamicArray::getAt(int index) {
	if (index < 0 || index >= size) throw MyException(4882, "접근 오류\n", this);
	else return ptr[index];
}