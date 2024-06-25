#include <print>
#include <cmath>
#include <iostream>
using namespace std;

int main() {
	const double pi = 3.14;
	double rad, area;

	print("원의 반지름을 입력하세요: ");
	cin >> rad;

	area = pow(rad, 2) * pi;

	print("원의 반지름은 {}", area);
}
