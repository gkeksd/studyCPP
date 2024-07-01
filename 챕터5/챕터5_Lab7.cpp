#include <iostream>
using namespace std;

int main() {
	int n, m;
	cout << "N과 M을 입력해주세요: ";
	cin >> n >> m;
	int mea = 1;

	for (int i = 1; i < n; i++) {
		for (int j = 1; j < m; j++) {
			if (n % i == 0 && m % i == 0) mea = i;
		}
	}
	cout << n << ", " << m << "의 최대공약수: " << mea;
}