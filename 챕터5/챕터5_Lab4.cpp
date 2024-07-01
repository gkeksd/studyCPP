#include <iostream>
using namespace std;

int main() {
	int n;
	int min, max;
	while (1) {
		cout << "정수의 개수를 양의 정수로 입력하세요: ";
		cin >> n;
		if (n > 0) break;
	}
	int num;
	for (int i = 0; i < n; i++) {
		cout << "정수를 입력하세요: ";
		cin >> num;
		if (i == 0) {
			min = num;
			max = num;
		}
		if (num > max) max = num;
		else if (num < min) min = num;
	}
	cout << "최솟값 = " << min << "\n최댓값 = " << max;
}