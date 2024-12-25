#include <iostream>
#include <array>
#include <algorithm>
using namespace std;

int main() {
	// 람다 표현식(Lambda Expresstion)은 [캡쳐블록](매개변수 리스트) -> 리턴타입{함수 바디};의 구조로 이루어짐
	// ()와 ->, 리턴 타입은 생략 가능
	// 표현식 마지막에 ()를 추가하면 표현식을 즉시 실행시킴
	auto inha = [] { cout << "Hi lambda!"; };
	inha();

	array<int, 10> v = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };

	// for 문을 사용한 기존 반복문
	for (int i = 0; i < 10; i++) {
		cout << v[i] << "\n";
	}

	// 람다식을 사용한 간결한 반복문
	for_each(begin(v), end(v), [](auto n) {cout << n << " "; });

	return 0;
}