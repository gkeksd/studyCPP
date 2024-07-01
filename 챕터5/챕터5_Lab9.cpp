#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	int n;
	double num;
	double price = 1;
	cout << "N값과 1년간 물가상승률(%)을 입력해주세요: ";
	cin >> n >> num;

	for (int i = 0; i < n; i++) {
		price *= (1 + num / 100);
	}

	cout << n << "년 뒤 물가: 현재 물가의 " << fixed << setprecision(3) << price << "배";
}