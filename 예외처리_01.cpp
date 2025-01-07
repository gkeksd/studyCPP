#include <iostream>
#include <cassert>
using namespace std;

int main() {
	int num1, num2, result;
	for (int i = 0; i < 5; i++) {
		cout << "정수를 입력하세요: ";
		cin >> num1;
		cout << "또다른 정수를 입력하세요: ";
		cin >> num2;
		//1. 매크로를 사용한 num2가 0일 경우 예외처리
		//if (num2 == 0) {
		//	cout << "0으로 나눌 수 없습니다. 프로그램을 중단합니다.";
		//	assert(false); // 프로그램 강제 중단 매크로
		//}
		//result = num1 / num2;
		//cout << "결과 = " << result;

		//2. if-else 문을 활용한 num2가 0일때 예외처리
		if (num2 == 0) cout << "현재 입력으로는 처리가 불가합니다." << "\n";
		else {
			result = num1 / num2;
			cout << "결과 = " << result << "\n";
		}
	}
	return 0;
}