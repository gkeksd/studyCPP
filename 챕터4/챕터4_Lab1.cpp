#include <print>
#include <iostream>
using namespace std;

int main() {
	int sco1, sco2, sco3;
	int sum;
	int min, max;
	double avg;

	print("ù ��° �л��� ������ �Է��ϼ���: ");
	cin >> sco1;
	print("�� ��° �л��� ������ �Է��ϼ��� : ");
	cin >> sco2;
	print("�� ��° �л��� ������ �Է��ϼ���: ");
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

	println("�Է��� ����: {} {} {}", sco1, sco2, sco3);
	println("�ּ� ������ �ִ� ����: {} {}", min, max);
	print("��� ����: {}", avg);
}
