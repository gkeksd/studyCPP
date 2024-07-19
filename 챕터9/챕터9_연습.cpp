#include <iostream>
using namespace std;

int main() {
	int a = 5;
	int& b = a; //값 참조
	cout << a << "\n";
	cout << b << "\n";
	b++;
	cout << a << "\n";
	int* c = &a; //주솟값 참조
	cout << c << "\n";
	cout << *c << "\n"; //역참조 연산
	cout << &a; //변수의 메모리 주소
}