#pragma once
#include <iostream>
#include "Myexception.h"
using namespace std;

class DynamicArray {
	int* ptr;
	int size;
public:
	DynamicArray(int size) : size(size) {
		ptr = new int[size];
	}
	~DynamicArray() {
		delete[] ptr;
		ptr = nullptr;
	}
	void setAt(int index, int value) {
		if (index < 0 || index >= size) throw MyException(4882, "할당 오류\n", this);
		ptr[index] = value;
	}
	int getAt(int index) {
		if (index < 0 || index >= size) throw MyException(4882, "접근 오류\n", this);
		else return ptr[index];
	}
};