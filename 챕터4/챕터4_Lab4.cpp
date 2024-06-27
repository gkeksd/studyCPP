#include <print>
#include <iostream>
using namespace std;

int main() {
	int speed;

	print("자동차의 속도를 입력하세요: ");
	cin >> speed;

	if (speed > 120) {
		print("과속 주행입니다.");
	}
	else if (speed < 50) {
		print("저속 주행입니다.");
	}
	else {
		print("정속 주행입니다");
	}
}