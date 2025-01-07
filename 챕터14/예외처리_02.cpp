#include <iostream>
using namespace std;

int main() {
	int num1, num2;
	for (int i = 0; i < 3; i++) {
		cout << "정수를 입력하세요: ";
		cin >> num1;
		cout << "또다른 정수를 입력하세요: ";
		cin >> num2;

		//패턴 1. try-catch 구문으로 예외를 처리하는 프로그램
		try {
			if (num2 == 0) throw 999;
			cout << "rufrhk = " << num1 / num2 << "\n";
		}
		catch (int i) {
			cout << "[정수] 0으로 나눌 수 없습니다\n";
		}
		catch (char c) {
			cout << "[문자] 0으로 나눌 수 없습니다\n";
		}
	}

	return 0;
}
