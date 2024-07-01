#include <iostream>
using namespace std;

int main() {
	int n;
	while (1) {
		cout << "자연수 N을 입력해주세요: ";
		cin >> n;
		if (n > 0) break;
	}
	int num;
	while(cout << n << "의 배수인지 확인할 숫자를 입력해 주세요: ", cin >> num) {
		if (num > 0) (num % n == 0) ? cout << num << "은(는) " << n << "의 배수입니다.\n\n" : cout << num << "은(는) " << n << "의 배수가 아닙니다.\n\n";
	}
}