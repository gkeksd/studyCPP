#include <iostream>
using namespace std;

int main() {
	int size;
	string* array;
	cout << "�л��� �Է�: ";
	cin >> size;

	array = new string[size];

	for (int i = 0; i < size; i++) {
		cout << "���� �Է�: ";
		cin >> array[i];
	}
	for (int i = 0; i < size; i++) {
		cout << array[i] << "\n";
	}
}