#include <iostream>
using namespace std;

int distan(int x);
double squareRoot(double n);

int main() {
	int distance = 0;
	cout << "두 점 사이의 거리: " << distan(distance);
}

int distan(int x) { //거리를 구하는 함수
	int x1, x2, y1, y2;
	srand(time(0));

	x1 = rand() % 101;
	y1 = rand() % 101;

	x2 = rand() % 101;
	y2 = rand() % 101;

	cout << "첫 번째 점: (" << x1 << ", " << y1 << ")\n두번째 점: (" << x2 << ", " << y2 << ")\n";

	x = squareRoot((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1)); //두 좌표 사이의 거리 구하는 공식

	return x;
}

double squareRoot(double n) { //제곱근을 구하는 함수
	double x = n;
	double y = 1;
	double e = 0.000001;

	while (x - y > e) {
		x = (x + y) / 2;
		y = n / x;
	}

	return x;
}