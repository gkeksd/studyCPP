#include <print>
#include <iostream>
using namespace std;

int main() {
	float num;

	print("부동 소수점 입력: ");
	cin >> num;
	println("");

	println("원래 값: {}", num);
	println("정수 부분: {}", static_cast<int>(num));
	print("소수점 아래 부분: {}", num - static_cast<int>(num));
}