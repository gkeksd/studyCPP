#include <iostream>
using namespace std;


double pow(double num1, int num2) {
	if (num2 == 0) return 1;
	else return num1 * pow(num1, num2 - 1);
}

double sierpinsky(double num, int num2) {
	if (num == 0) return 2048;
	else return num * pow(3.0 / 4.0, num2);
}

int main() {
	int n;
	cin >> n;
	double area = 2048;

	cout << sierpinsky(area, n);
}
