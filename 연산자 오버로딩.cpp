#include <iostream>
using namespace std;

class Complex {
	// Ŭ���� �ܺο����� ������ ����� ���� �����ϰ� ����
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
	// ���������� ��ȯ
	operator int() {
		return this->real;
	}
	// ��ġ����
	Complex operator++() {
		this->real++;
		return *this;
	}
	// ��ġ����
	Complex operator++(int) {
		Complex prev(this->real, this->imaginary);
		this->real++;
		return prev;
	}

	int Real() const { return real; }
	int Imaginary() const { return imaginary; }
};

// ����Լ��� �ƴ� �Ϲ� �Լ��� ������ �����ε�
Complex operator+(const Complex& left, const Complex& right) {
	int real = left.real + right.real;
	int imag = left.imaginary + right.imaginary;
	return Complex(real, imag);
}

// a + bi ���·��� ��ü ����� ���� << ������ �����ε�
ostream& operator <<(ostream& o, const Complex& right) {
	o << right.Real() << showpos << right.Imaginary() << "i" << noshowpos;
	return o;
}

int main() {
	// �ǿ����ڰ� �ΰ��϶�
	Complex c1(1, 1), c2(7, 2), c3(0, 0);

	c3 = c1 + c2; // c1�� this ������ Ȥ�� left��, c2�� right��, c3�� return ������ ��.
	 cout << c3.Real() << "," << c3.Imaginary() << "\n";

	 //a + bi ���·��� ��ü ���
	 cout << c3 << "\n";

	 // ������������ ��ȯ�� ���
	 int i = c2.operator int(); // �׳� int i = c2;�� ���� ��µ� ������ ��.
	 cout << i << "\n";

	 // �ǿ����ڰ� �Ѱ��϶�
	 Complex c(1, 1), prefix(0, 0), postfix(0, 0);

	 prefix = ++c; // prefix = c = (2, 1)
	 postfix = c++; // postfix = (2, 1), c = (3, 1)
	 cout << prefix.Real() << "\n" << postfix.Real() << "\n" << c.Real();
	return 0;
}