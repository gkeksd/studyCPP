#include <iostream>
#include <ctime>
#include <cstdlib>
#include <iomanip>
using namespace std;

int getface(int& x1, int& x2, int& x3, int& x4, int& x5, int& x6);

int main() {
	int num1 = 0;
	int num2 = 0;
	int num3 = 0;
	int num4 = 0;
	int num5 = 0;
	int num6 = 0;

	getface(num1, num2, num3, num4, num5, num6);

	cout << "Face\tFrequency\n" << setw(4) << right << "1\t" << setw(9) << right << num1 << "\n"
		<< setw(4) << right << "2\t" << setw(9) << right << num2 << "\n"
		<< setw(4) << right << "3\t" << setw(9) << right << num3 << "\n"
		<< setw(4) << right << "4\t" << setw(9) << right << num4 << "\n"
		<< setw(4) << right << "5\t" << setw(9) << right << num5 << "\n"
		<< setw(4) << right << "6\t" << setw(9) << right << num6 << "\n";
}

int getface(int& x1, int& x2, int& x3, int& x4, int& x5, int& x6) {
	srand(time(0));
	for (int i = 0; i < 6000000; i++) {
		int act = (1 + rand() % 6);
		switch (act) {
		case 1: x1 += 1; break;
		case 2: x2 += 1; break;
		case 3: x3 += 1; break;
		case 4: x4 += 1; break;
		case 5: x5 += 1; break;
		case 6: x6 += 1; break;
		}
	}
	return x1, x2, x3, x4, x5, x6;
}