#include <iostream>
using namespace std;

int main() {
	int p;
	int result = 1;
	while (1) {
		cout << "���丮���� ũ�⸦ ������ �ƴ� ������ �Է��ϼ���: ";
		cin >> p;
		if (p >= 0) break;
	}
	for (int i = 1; i <= p; i++) {
		if (p == 0) break;
		result *= i;
	}
	if (p == 0) cout << "1";
	else cout << result;

}