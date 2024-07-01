#include <iostream>
#include <climits>
using namespace std;

int main() {
	int max = INT_MAX;
	int min = INT_MIN;
	int base; int expo;
	while (1) {
		cout << "밑을 양의 정수로 입력하세요: ";
		cin >> base;
		if (base >= 0) break;
	}
	int result = 1;
	while (1) {
		cout << "지수를 양의 정수로 입력하세요: ";
		cin >> expo;
		if (expo >= 0) break;
	}

	for (int i = 0; i < expo; i++) {
		result *= base;
	}
	cout << result;
}