#pragma once
#include <iostream>
#include <string>
#include "dynamicarray.h"
#include "dynamicarray_SPtr.h"
using namespace std;

class DynamicArray;
class DynamicArray_SPtr;

class MyException {
public:
	int errorCode;
	const char* errorMessage;
	//DynamicArray* errorAddress;
	DynamicArray_SPtr* errorAddress;
public:
	//MyException(int erc, const char* erm, DynamicArray* era) {
	MyException(int erc, const char* erm, DynamicArray_SPtr* era) {
		this->errorCode = erc;
		this->errorMessage = erm;
		this->errorAddress = era;
	}
};