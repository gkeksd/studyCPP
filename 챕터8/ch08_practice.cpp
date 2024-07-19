#include <iostream>
using namespace std;

int main() {
	const int SIZE{ 5 };
	int array[SIZE];
	int number = 0;
	
	for (int& element : array) element = ++number; //number의 값을 하나씩 증가시키며 array의 각 요소에 하나씩 순회하면서 할당
	for (int i = 0; i < SIZE; i++) cout << array[i] << "\n";

	/*int inp;
	cout << "배열의 길이를 입력하세요: ";
	cin >> inp;
	const int SIZE2 = inp;
	int array2[SIZE2];*/	// 컴파일러가 컴파일 시 상수값을 확인할 수 있어야 함