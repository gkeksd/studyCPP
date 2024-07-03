#include <iostream>
using namespace std;

int calc(int num);

int main() {
	int num;
	cout << "양의 정수를 입력하세요: ";
	cin >> num;
	cout << "1부터 " << num << "까지의 합: " << calc(num);
}

int calc(int num) {
	int sum = 0;
	if (num == 0) return 0;
	else return num + calc(num - 1);
}