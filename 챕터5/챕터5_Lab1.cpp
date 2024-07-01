#include <iostream>
using namespace std;

int main() {
	int t;
	double num;
	double sum = 0; double prod = 1;
	while (1) {
		cout << "숫자의 개수를 음수가 아닌 정수로 입력하세요: ";
		cin >> t;
		if (t >= 0) break;
	}
	for (int i = 0; i < t; i++) {
		if (t == 0) break;
		cout << "숫자를 입력하세요: ";
		cin >> num;
		sum += num;
		prod *= num;
	}
	cout << "합 = " << sum << "\n곱 = " << prod;
}