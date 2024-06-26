#include <print>
#include <iostream>
using namespace std;

int main() {
	int cookie, people;

	print("쿠기의 수는 몇 개인가요?: ");
	cin >> cookie;
	print("친구는 몇 명인가요?: ");
	cin >> people;
	print("남은 쿠키의 개수: {}", cookie % people);
}