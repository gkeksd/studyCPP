#include <iostream>
using namespace std;

int main() {
	int n, m;
	cout << "n과 m을 입력해주세요: ";
	cin >> n >> m;
	int sum = m * (m + 1) / 2 - n * (n - 1) / 2;
	cout << n << "부터 " << m << "까지의 정수들의 합은 " << sum << "입니다.";
}