#pragma once
#include <iostream>
#include <string>
#include "dynamicarray.h"
using namespace std;

class DynamicArray;
class MyException {
public:
	int errorCode;
	const char* errorMessage;
	DynamicArray* errorAddress;
public:
	MyException(int erc, const char* erm, DynamicArray* era) {
		this->errorCode = erc;
		this->errorMessage = erm;
		this->errorAddress = era;
	}
};