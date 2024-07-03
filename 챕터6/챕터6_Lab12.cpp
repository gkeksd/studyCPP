#include <iostream>
using namespace std;

int pow(int num1, int num2) {
	if (num2 == 0) return 1;
	else return num1 * pow(num1, num2 - 1);
}

int equation(string str, int x) {
	int result = 0;
	for (int i = 0; i < str.size(); i++) {
		int coefficient = str[i] - '0';
		result += coefficient * pow(x, str.size() -1 - i);
	}
	return result;
}

int main() {
	string func;
	cout << "함수의 계수를 순서대로 입력해 주세요: ";
	cin >> func;
	int x;
	cout << "x값을 입력해 주세요: ";
	cin >> x;

	int num = equation(func, x);
	cout << num;
}