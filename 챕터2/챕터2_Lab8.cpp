#include <print>
#include <iostream>
using namespace std;

int main() {
	char alp, Alp;

	print("소문자 알파벳 한개를 입력하세요: ");
	cin >> alp;

	Alp = alp - 32;

	print("대문자로 변환된 결과: {}", Alp);
}