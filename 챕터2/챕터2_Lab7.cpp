#include <print>
#include <iostream>
using namespace std;

int main() {
	char Alp1, Alp2;

	print("대문자 알파벳 두개를 순서대로 입력하세요: ");
	cin >> Alp1;
	cin >> Alp2;

	int bett = Alp2 - Alp1 - 1; //알파벳 두개 사이의 알파벳 숫자를 구하는 것이므로 1을 추가로 뺌

	print("두 영문자 사이에는 {}개의 문자가 존재합니다.", bett);
}