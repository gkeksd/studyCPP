#include <iostream>
using namespace std;

class Complex {
	// Ŭ���� �ܺο����� ������ ����� ���� �����ϰ� ����
	friend Complex operator+(const Complex& left, const Complex& right);
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
	// ���������� ��ȯ
	operator int() {
		return this->real;
	}
	// ��ġ����
	Complex operator++() {
		/* this->real++;
		return *this; */
		return Complex(++this->real, this->imaginary);
	}
	// ��ġ����
	Complex operator++(int) {
		Complex prev(this->real, this->imaginary);
		this->real++;
		return prev;
	}

	int getReal() const { return real; }
	int getImaginary() const { return imaginary; }
};

// ����Լ��� �ƴ� �Ϲ� �Լ��� ������ �����ε�
//Complex operator+(const Complex& left, const Complex& right) {
//	int real = left.real + right.real;
//	int imag = left.imaginary + right.imaginary;
//	return Complex(real, imag);
//}

// a + bi ���·��� ��ü ����� ���� << ������ �����ε�
ostream& operator <<(ostream& o, const Complex& right) {
	o << right.getReal() << showpos << right.getImaginary() << "i" << noshowpos; // showpos�� ����϶� +��ȣ�� ���̴� ������
	return o;
}

// a�� b�� �Է¹ޱ� ���� >> ������ �����ε�
istream& operator >>(istream& i, Complex& right) {
	i >> right.real;
	i >> right.imaginary;
	return i;
}

int main() {
	Complex c1, c2;
	Complex c3 = ++c1 + c2;
	Complex c4;

	cout << c3 << "\n" << c2 << "\n" << c1 << "\n";

	cin >> c4;
	cout << c4 << "\n";
	cout << (c1 == c2) << "\n"; // c1�� c2�� ������ 1, �ٸ��� 0 ���

	return 0;
}