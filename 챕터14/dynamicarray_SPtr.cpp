#include "dynamicarray_SPtr.h"
//#include "smartptr.h"
#include "smartptr_new.h"

DynamicArray_SPtr::DynamicArray_SPtr(int size) : size(size), sp(new int[size]) {
	try {
		//sp = new int[size];
		for (int i = 0; i < size; i++) sp[i] = 0; // 대괄호 연산자 오버로드됨

		//throw MyException(2000, "메모리 오류", this);
	}
	//catch (const MyException& me) {
	catch (...) { // 어떠한 오류 경우에도 동작
		cout << "객체 생성 완료!\n";
		throw;
	}
}
DynamicArray_SPtr::~DynamicArray_SPtr() {
	cout << "힙 메모리 해제 완료!\n";
}

void DynamicArray_SPtr::setAt(int index, int value) {
	if (index < 0 || index >= size) throw MyException(4882, "할당 오류\n", this);
	sp[index] = value;
}
int DynamicArray_SPtr::getAt(int index) {
	if (index < 0 || index >= size) throw MyException(4882, "접근 오류\n", this);
	else return sp[index];
}
