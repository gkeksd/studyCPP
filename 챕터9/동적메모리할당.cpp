#include <iostream>
using namespace std;

int main() {
	int size;
	string* array;
	cout << "학생수 입력: ";
	cin >> size;

	array = new string[size];

	for (int i = 0; i < size; i++) {
		cout << "점수 입력: ";
		cin >> array[i];
	}
	for (int i = 0; i < size; i++) {
		cout << array[i] << "\n";
	}
}