#pragma once
#include <iostream>
#include "Myexception.h"
using namespace std;

class SmartPtr;
class DynamicArray_SPtr {
	SmartPtr sp;
	int size;
public:
	DynamicArray_SPtr(int size);
	virtual ~DynamicArray_SPtr();
	void setAt(int index, int value);
	int getAt(int index);
};