#include <iostream>
using namespace std;

int main() {
	int n, m;
	cout << "N�� M�� �Է����ּ���: ";
	cin >> n >> m;
	int mea = 1;

	for (int i = 1; i < n; i++) {
		for (int j = 1; j < m; j++) {
			if (n % i == 0 && m % i == 0) mea = i;
		}
	}
	cout << n << ", " << m << "�� �ִ�����: " << mea;
}