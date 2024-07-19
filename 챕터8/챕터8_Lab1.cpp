#include <iostream>
#include <ctime>
using namespace std;

void bubble_sort(int numbers[], int size) {
	for (int i = 0; i < size - 1; ++i) {
		for (int j = 0; j < size - 1; ++j) {
			if (numbers[j] > numbers[j + 1]) swap(numbers[j], numbers[j + 1]);
 		}
	}
}

int main() {
	const int SIZE = 6;
	int numbers[SIZE];
	srand(time(0));
	for (int i = 0; i < SIZE; i++) numbers[i] = 1 + rand() % 45;

	bubble_sort(numbers, SIZE);
	for (int i = 0; i < SIZE; i++) cout << numbers[i] << " ";
}