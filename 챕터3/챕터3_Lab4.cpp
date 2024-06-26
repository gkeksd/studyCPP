#include <print>
#include <iostream>
using namespace std;

int main() {
	int sco1, sco2, sco3;

	print("세 학생의 점수를 차례로 입력하세요: ");
	cin >> sco1 >> sco2 >> sco3;

	int sum = sco1 + sco2 + sco3;
	int ave = sum / 3; 

	println("총점: {}", sum);
	print("평균: {}", static_cast<double>(ave));
}