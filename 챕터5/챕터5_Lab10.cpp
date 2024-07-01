#include <iostream>
using namespace std;

int main() {
	int n;
	cout << "입력받을 숫자의 갯수: ";
	cin >> n;
	int num;
	int sum1 = 0;
	int sum2 = 0;
	int sum3 = 0;

	for (int i = 0; i < n; i++) {
		cout << i + 1 << "번째 숫자를 입력해 주세요: ";
		cin >> num;
		sum1 += num / 100;
		sum2 += num / 10 - num / 100 * 10;
		sum3 += num - num / 100 * 100 - (num / 10 - num / 100 * 10) * 10;
	}

	cout << n << "개 숫자의 자릿수 합: " << sum1 + sum2 + sum3;
}