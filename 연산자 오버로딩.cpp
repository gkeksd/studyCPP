#include <iostream>
using namespace std;

class Complex {
	// 클래스 외부에서도 데이터 멤버에 접근 가능하게 해줌
	friend Complex operator+(const Complex& left, const Complex& right);
private:
	int real, imaginary;
public:
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
		this->real++;
		return *this;
	}
	// 후치연산
	Complex operator++(int) {
		Complex prev(this->real, this->imaginary);
		this->real++;
		return prev;
	}

	int Real() const { return real; }
	int Imaginary() const { return imaginary; }
};

// 멤버함수가 아닌 일반 함수의 연산자 오버로딩
Complex operator+(const Complex& left, const Complex& right) {
	int real = left.real + right.real;
	int imag = left.imaginary + right.imaginary;
	return Complex(real, imag);
}

// a + bi 형태로의 객체 출력을 위한 << 연산자 오버로딩
ostream& operator <<(ostream& o, const Complex& right) {
	o << right.Real() << showpos << right.Imaginary() << "i" << noshowpos;
	return o;
}

int main() {
	// 피연산자가 두개일때
	Complex c1(1, 1), c2(7, 2), c3(0, 0);

	c3 = c1 + c2; // c1은 this 포인터 혹은 left로, c2는 right로, c3는 return 값으로 들어감.
	 cout << c3.Real() << "," << c3.Imaginary() << "\n";

	 //a + bi 형태로의 객체 출력
	 cout << c3 << "\n";

	 // 정수형으로의 변환해 출력
	 int i = c2.operator int(); // 그냥 int i = c2;를 통해 출력도 가능은 함.
	 cout << i << "\n";

	 // 피연산자가 한개일때
	 Complex c(1, 1), prefix(0, 0), postfix(0, 0);

	 prefix = ++c; // prefix = c = (2, 1)
	 postfix = c++; // postfix = (2, 1), c = (3, 1)
	 cout << prefix.Real() << "\n" << postfix.Real() << "\n" << c.Real();
	return 0;
}