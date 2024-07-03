#include <iostream>
using namespace std;

int func(int x, int y, int z);

int main() {
	int num1, num2, num3;
	cout << "세 정수를 입력하세요: ";
	cin >> num1 >> num2 >> num3;

	cout << func(num1, num2, num3);
}

int func(int x, int y, int z) {
	int max;
	if (x > y) {
		max = x;
		if (x < z) max = z;
	}
	else if (x < y) {
		max = y;
		if (y < z) max = z;
	}
	else {
		max = x;
		if (x < z) max = z;
	}

	return max;
}