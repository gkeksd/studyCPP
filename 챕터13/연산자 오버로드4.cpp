#include <iostream>
using namespace std;

// ������ ���� �и��ؾ� ��

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
	~SmartPtr() { delete ptr; }; // ���޸� ����
	Complex& operator*() const { return *ptr; } // ���� ����
	Complex* operator->() const { return ptr; } // �ּҸ� ����
};

// a + bi ���·��� ��ü ����� ���� << ������ �����ε�
ostream& operator <<(ostream& o, const Complex& right) {
	o << right.getReal() << showpos << right.getImaginary() << "i" << noshowpos; // showpos�� ����϶� +��ȣ�� ���̴� ������
	return o;
}

int main() {
	SmartPtr sp = new Complex(2, 5); // sp ��ü ����Ʈ�����Ͱ� main �Լ� ���� �ÿ� �ڵ����� Complex ��ü�� �� �޸𸮸� ������ ��.
	// * �����ڷ� ����� ����
	cout << "Complex: " << (*sp) << "\n";
	// -> �����ڷ� ����� ����
	cout << "Complex: " << sp->getReal() << showpos << sp->getImaginary() << "i";

	return 0;
}