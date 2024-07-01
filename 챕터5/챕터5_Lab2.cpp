#include <iostream>
using namespace std;

int main() {
	int p;
	int result = 1;
	while (1) {
		cout << "팩토리얼의 크기를 음수가 아닌 정수로 입력하세요: ";
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