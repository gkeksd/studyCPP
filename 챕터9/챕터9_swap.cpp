#include <iostream>
using namespace std;

void swap(int* p1, int* p2) {
	int temp = *p1;
	*p1 = *p2;
	*p2 = *p1;
}

int main() {
	int a, b;
	cin >> a >> b;

	cout << a << b << "\n"; //스왑되기 전의 값

	swap(a, b);

	cout << a << b << "\n"; //스왑된 후의 값
}