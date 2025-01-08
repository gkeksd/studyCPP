#include <iostream>
using namespace std;

// 원래는 파일 분리해야 함

class Complex {
public:
	int real, imaginary;
public:
	Complex() : real(0), imaginary(0) {}
	Complex(int r, int i) : real(r), imaginary(i) {}
	Complex operator+(const Complex& right) {
		int real = this->real + right.real;
		int imag = this->imaginary + right.imaginary;
		return Complex(real, imag);
	}

	int getReal() const { return real; }
	int getImaginary() const { return imaginary; }
};

class SmartPtr {
private:
	Complex* ptr;
public:
	SmartPtr(Complex* p) : ptr(p) {};
	~SmartPtr() { delete ptr; }; // 힙메모리 해제
	Complex& operator*() const { return *ptr; } // 값을 리턴
	Complex* operator->() const { return ptr; } // 주소를 리턴
};

// a + bi 형태로의 객체 출력을 위한 << 연산자 오버로딩
ostream& operator <<(ostream& o, const Complex& right) {
	o << right.getReal() << showpos << right.getImaginary() << "i" << noshowpos; // showpos는 양수일때 +기호를 붙이는 조정자
	return o;
}

int main() {
	SmartPtr sp = new Complex(2, 5); // sp 객체 스마트포인터가 main 함수 종료 시에 자동으로 Complex 객체의 힙 메모리를 해제해 줌.
	// * 연산자로 멤버에 접근
	cout << "Complex: " << (*sp) << "\n";
	// -> 연산자로 멤버에 접근
	cout << "Complex: " << sp->getReal() << showpos << sp->getImaginary() << "i";

	return 0;
}
