#include <print>
#include <iostream>
using namespace std;

int main() {
	int num1 = 0; int num2 = 0; int num3 = 0; //이차 방정식의 세 계수
	int result = 0;
	int numResult; //실근의 개수

	print("이차방정식 ax^2 + bx + c = 0의 계수 a, b, c를 각각 입력하세요: ");
	cin >> num1 >> num2 >> num3;

	result = (num2 * num2) - (4 * num1 * num3); //이차방정식의 판별식

	if (result > 0) {
		numResult = 2;
		print("실근의 갯수: {}", numResult);
	}
	else if (result == 0) {
		numResult = 1;
		print("실근의 갯수: {}", numResult);
	}
	else if (result < 0) {
		print("실근의 갯수: {}", numResult);
	}
}
