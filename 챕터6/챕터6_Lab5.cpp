#include <iostream>
using namespace std;

int distan(int x);
double squareRoot(double n);

int main() {
	int distance = 0;
	cout << "�� �� ������ �Ÿ�: " << distan(distance);
}

int distan(int x) { //�Ÿ��� ���ϴ� �Լ�
	int x1, x2, y1, y2;
	srand(time(0));

	x1 = rand() % 101;
	y1 = rand() % 101;

	x2 = rand() % 101;
	y2 = rand() % 101;

	cout << "ù ��° ��: (" << x1 << ", " << y1 << ")\n�ι�° ��: (" << x2 << ", " << y2 << ")\n";

	x = squareRoot((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1)); //�� ��ǥ ������ �Ÿ� ���ϴ� ����

	return x;
}

double squareRoot(double n) { //�������� ���ϴ� �Լ�
	double x = n;
	double y = 1;
	double e = 0.000001;

	while (x - y > e) {
		x = (x + y) / 2;
		y = n / x;
	}

	return x;
}