#include <print>
#include <iostream>
using namespace std;

int main() {
	int countNum;

	print("���� �Է�!: ");
	cin >> countNum;

	println("ī��Ʈ�ٿ�");
	switch (countNum) {
	case 5: println("5");
	case 4: println("4");
	case 3: println("3");
	case 2: println("2");
	case 1: println("1"); break;
	default: print("�߸��� ���� �Է�"); break;
	}
}