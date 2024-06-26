#include <print>
#include <iostream>
using namespace std;

int main() {
	int notebook;

	print("노트북의 개수: ");
	cin >> notebook;

	int backpack = (notebook + 3) / 4; //노트북이 1개일 때 1 + 3 = 4로 가방이 1개이므로 (노트북 + 3) / 4

	print("필요한 가방의 개수는 {}개입니다.", backpack);
}