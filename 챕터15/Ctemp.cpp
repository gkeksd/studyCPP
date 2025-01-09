#ifndef CTEMP_CPP
#define CTEMP_CPP
#include "Ctemp.h"

template<typename T>
Ctemp<T>::Ctemp(T d) : data(d) {}

template<typename T>
Ctemp<T>::~Ctemp() {}

template<typename T>
T Ctemp<T>::get() const { return data; }

template<typename T>
void Ctemp<T>::set(T d) { data = d; }

#endif