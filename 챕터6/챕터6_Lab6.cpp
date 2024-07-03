#include <iostream>
#include <cmath>
using namespace std;

double getRadius(double x);

double squareRoot(double n) { //�������� ���ϴ� �Լ�
	double x = n;
	double y = 1;
	double e = 0.000001;

	while (abs(x - y) > e) {
		x = (x + y) / 2;
		y = n / x;
	}

	return x;
}

int main() {
	double area;
	cout << "���� ���� �Է��ϼ���: ";
	cin >> area;

	cout << "���� �����ϴ� ���簢���� ����: " << getRadius(area);
}

double getRadius(double x) {
	const double PI = 3.14;
	double y = x / PI;
	double leng = 2 * squareRoot(y);

	double s_area = leng * leng;

	return s_area;
}