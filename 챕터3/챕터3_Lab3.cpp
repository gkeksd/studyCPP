#include <print>
#include <iostream>
using namespace std;

int main() {
	int second;

	print("�� ���� �ð��� ���� ������ �Է�: ");
	cin >> second;

	int hour = second / 3600;
	int min = (second % 3600) / 60;
	int n_sec = second - (hour * 3600 + min * 60);

	println("�Էµ� �� ���� �ð�: {}", second);
	print("{}�ð� {}�� {}��", hour, min, n_sec);
}