#include <print>
#include <iostream>
using namespace std;

int main() {
	int sco1, sco2, sco3;

	print("�� �л��� ������ ���ʷ� �Է��ϼ���: ");
	cin >> sco1 >> sco2 >> sco3;

	int sum = sco1 + sco2 + sco3;
	int ave = sum / 3; 

	println("����: {}", sum);
	print("���: {}", static_cast<double>(ave));
}