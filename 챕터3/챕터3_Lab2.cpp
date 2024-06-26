#include <print>
#include <iostream>
using namespace std;

int main() {
	int num;

	print("세 자리 양의 정수를 입력하세요: ");
	cin >> num;

	println("백의 자리: {}", num / 100);
	println("십의 자리 : {}", (num / 10) % 10 );
	print("일의 자리: {}", num % 10);
}