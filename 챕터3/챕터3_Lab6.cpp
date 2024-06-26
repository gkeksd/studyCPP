#include <print>
#include <iostream>
using namespace std;

int main() {
	int app_num, peo_num;

	print("사과의 수와 사람의 수를 차례로 입력하세요: ");
	cin >> app_num >> peo_num;

	print("모든 사람은 최소 {}개의 사과를 가져갈 수 있습니다.", app_num / peo_num);
;}