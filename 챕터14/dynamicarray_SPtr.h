#pragma once
#include <iostream>
#include "Myexception.h"
using namespace std;

class DynamicArray {
	int* ptr;
	int size;
public:
	DynamicArray(int size);
	virtual ~DynamicArray();
	void setAt(int index, int value);
	int getAt(int index);
};