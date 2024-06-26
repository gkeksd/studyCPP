#include <print>
#include <iostream>
using namespace std;

int main() {
	double rat1, rat2;
	double wid, len;

	print("화면의 가로 세로 비율을 입력하세요: ");
	cin >> rat1 >> rat2;
	print("화면의 가로 길이를 입력하세요: ");
	cin >> wid;
	println("");

	len = wid * rat2 / rat1;

	print("세로 길이: {}", len);
}