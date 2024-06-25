#include <print>
#include<iostream>
using namespace std;

int main() {
	unsigned int num1;
	int num2;

	print("양수를 입력하세요: ");
	cin >> num1;
	while (num1 == 0) { //num1의 입력값이 양수가 아닐 시 다시 입력하도록 반복
		print("양수를 입력하세요: ");
		cin >> num1;
		
	}

	print("음수를 입력하세요: ");
	cin >> num2;
	while (num2 >= 0) { //num2의 입력값이 음수가 아닐 시 다시 입력하도록 반복
		print("음수를 입력하세요: ");
		cin >> num2;
	}

	print("{} + {} = {}", num1, num2, num1 + num2);
}