#include <print>
#include <iostream>
using namespace std;

int main() {
	unsigned int incom;
	int tax = 0;

	print("당신의 수입을 입력하세요: ");
	cin >> incom;

	if (incom <= 10000000) {
		tax = incom * 0.1;
	}
	else if (incom > 10000000 && incom <= 50000000) {
		tax = 10000000 * 0.1 + (incom - 10000000) * 0.2;
	}
	else if (incom > 50000000 && incom <= 100000000) {
		tax = 10000000 * 0.1 + 40000000 * 0.2 + incom * 0.3;
	}
	else {
		tax = incom * 0.3;
	}

	println("수입: \\{}", incom);
	print("세금: \\{}", tax);
}