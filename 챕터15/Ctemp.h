#pragma once
#ifndef CTEMP_H
#define CTEMP_H
#include <iostream>
using namespace std;

template<typename T>
class Ctemp {
private:
	T data;
public:
	Ctemp(T data);
	~Ctemp();
	T get() const;
	void set(T data);
};

#endif