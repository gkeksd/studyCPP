#include <iostream>
using namespace std;

int main() {
	const int SIZE{ 5 };
	int array[SIZE];
	int number = 0;
	
	for (int& element : array) element = ++number; //number�� ���� �ϳ��� ������Ű�� array�� �� ��ҿ� �ϳ��� ��ȸ�ϸ鼭 �Ҵ�
	for (int i = 0; i < SIZE; i++) cout << array[i] << "\n";

	/*int inp;
	cout << "�迭�� ���̸� �Է��ϼ���: ";
	cin >> inp;
	const int SIZE2 = inp;
	int array2[SIZE2];*/	// �����Ϸ��� ������ �� ������� Ȯ���� �� �־�� ��