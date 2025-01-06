#include <iostream>
using namespace std;

class Complex {
	// 클래스 외부에서도 데이터 멤버에 접근 가능하게 해줌
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
	// 정수형으로 변환
	operator int() {
		return this->real;
	}
	// 전치연산
	Complex operator++() {
		/* this->real++;
		return *this; */
		return Complex(++this->real, this->imaginary);
	}
	// 후치연산
	Complex operator++(int) {
		Complex prev(this->real, this->imaginary);
		this->real++;
		return prev;
	}

	int getReal() const { return real; }
	int getImaginary() const { return imaginary; }
};

// 멤버함수가 아닌 일반 함수의 연산자 오버로딩
//Complex operator+(const Complex& left, const Complex& right) {
//	int real = left.real + right.real;
//	int imag = left.imaginary + right.imaginary;
//	return Complex(real, imag);
//}

// a + bi 형태로의 객체 출력을 위한 << 연산자 오버로딩
ostream& operator <<(ostream& o, const Complex& right) {
	o << right.getReal() << showpos << right.getImaginary() << "i" << noshowpos; // showpos는 양수일때 +기호를 붙이는 조정자
	return o;
}

// a와 b를 입력받기 위한 >> 연산자 오버로딩
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
	cout << (c1 == c2) << "\n"; // c1과 c2가 같으면 1, 다르면 0 출력

	return 0;
}