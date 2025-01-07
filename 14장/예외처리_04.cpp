#include <iostream>
using namespace std;

int quotient(int first, int second) {
	if(second == 0) cout << "호출된 함수\n";
	// 호출되는 함수 쪽의 try와 catch 모두 throw를 던짐
	try {
		if (second == 0) throw 0;
	}
	catch (int i) {
		cout << "[정수-호출된 함수]0으로 나눌 수 없습니다\n";
		throw; // 호출한 함수 쪽으로 예외를 다시 던짐
	}
	return first / second;
}

int main() {
	int num1, num2;
	for (int i = 0; i < 3; i++) {
		cout << "정수를 입력하세요: ";
		cin >> num1;
		cout << "또다른 정수를 입력하세요: ";
		cin >> num2;

		//패턴 3. 호출하는 함수와 호출되는 함수 모두에 try-catch로 예외를 처리하는 프로그램
		try {
			if (num2 == 0) quotient(num1, num2);
			else cout << "결과 = " << quotient(num1, num2) << "\n";
		}
		catch (int ex) {
			cout << "[정수-호출한 함수]0으로 나눌 수 없습니다\n";
		}
		catch (...) { //이외 기타 예외 경우에 사용
			cout << "예외 발생";
		}
	}

	return 0;
}