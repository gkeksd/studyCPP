#include <print>
#include <iostream>
using namespace std;

int main() {
	int sco1, sco2, sco3;
	int sum;
	int min, max;
	double avg;

	print("첫 번째 학생의 점수를 입력하세요: ");
	cin >> sco1;
	print("두 번째 학생의 점수를 입력하세요 : ");
	cin >> sco2;
	print("세 번째 학생의 점수를 입력하세요: ");
	cin >> sco3;

	min = sco1;
	max = sco1;

	if (sco2 < min) {
		min = sco2;
	}
	if (sco3 < min) {
		min = sco3;
	}

	if (sco2 > max) {
		max = sco2;
	}
	if (sco3 > max) {
		max = sco3;
	}

	sum = sco1 + sco2 + sco3;
	avg = static_cast<double>(sum) / 3;

	println("입력한 점수: {} {} {}", sco1, sco2, sco3);
	println("최소 점수와 최대 점수: {} {}", min, max);
	print("평균 점수: {}", avg);
}
