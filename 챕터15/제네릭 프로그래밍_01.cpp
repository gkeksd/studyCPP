#include <iostream>
using namespace std;

// 템플릿 함수 정의
// 코드 길이는 줄어들지만 메모리 잡아먹는 용량 자체는 그대로
template<typename T>
T smaller(T first, T second) {
	if (first < second) return first;
	return second;
}

int main() {
	cout << "두 값 중 더 작은 값: " << smaller('a', 'B') << "\n"; //아스키 코드로 비교

	return 0;
}
