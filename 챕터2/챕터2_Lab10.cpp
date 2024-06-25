#include <print>
#include <iostream>
using namespace std;

int main() {
	const int price = 3000;
	int num1, num2; //철수와 영희가 각각 가진 사과 개수

	print("철수가 가진 사과의 개수를 입력하세요: ");
	cin >> num1;
	print("영희가 가진 사과의 개수를 입력하세요: ");
	cin >> num2;

	int sum = num1 + num2;

	println("철수와 영희가 가지고 있는 사과의 총합은 {}개입니다.", sum);
	print("사과의 총 가격은 {}원입니다.", price * sum);
}