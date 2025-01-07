#include <iostream>
using namespace std;

int quotient(int first, int second) {
	cout << "호출된 함수\n";
	// 호출되는 함수 쪽에서 throw를 던짐
	if (second == 0) throw 0;
	return first / second;
}

int main() {
	int num1, num2;
	for (int i = 0; i < 3; i++) {
		cout << "정수를 입력하세요: ";
		cin >> num1;
		cout << "또다른 정수를 입력하세요: ";
		cin >> num2;

		//패턴 2. try-catch 구문으로 함수를 호출하여 예외를 처리하는 프로그램
		try {
			cout << "결과 = " << quotient(num1, num2) << "\n";
		}
		catch (int ex) {
			cout << "0으로 나눌 수 없습니다\n";
		}
	}

	return 0;
}
