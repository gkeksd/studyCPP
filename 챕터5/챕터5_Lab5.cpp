#include <iostream>
using namespace std;

int main() {
	int n, num;
	int seven = 0;
	for (int i =0; ;) {
		if (i >= 1) cout << "양의 정수를 입력하세요: ";
		else cout << "정수의 개수를 양의 정수로 입력하세요: ";
		cin >> n;
		++i;
		if (n > 0) break;
	}

	for (int i = 0; i < n; i++) {
		cout << "정수를 입력해주세요: ";
		cin >> num;
		if (num % 7 == 0) seven = num;
	}
	if (seven == 0) cout << "7로 나눌 수 있는 숫자가 없습니다.";
	else cout << seven << "은/는 7로 나눌 수 있습니다.";
}