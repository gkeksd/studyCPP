#include <print>
#include <cmath>
#include <iostream>
using namespace std;

int main() {
	const double pi = 3.14;
	double rad, area;

	print("���� �������� �Է��ϼ���: ");
	cin >> rad;

	area = pow(rad, 2) * pi;

	print("���� �������� {}", area);
}