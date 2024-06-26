#include <print>
#include <iostream>
using namespace std;

int main() {
	int second;

	print("초 단위 시간을 양의 정수로 입력: ");
	cin >> second;

	int hour = second / 3600;
	int min = (second % 3600) / 60;
	int n_sec = second - (hour * 3600 + min * 60);

	println("입력된 초 단위 시간: {}", second);
	print("{}시간 {}분 {}초", hour, min, n_sec);
}