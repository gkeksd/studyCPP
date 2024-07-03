#include <iostream>
#include <ctime>
using namespace std;

long long fiboR(int number);
long long fiboL(int number);

int main() {
	int e_num;
	cout << "f(0) ~ f(?): ";
	cin >> e_num;

	clock_t start, end;
	start = clock();
	for (int counter{ 0 }; counter <= e_num; ++counter) fiboR(counter);
	end = clock();
	cout << "fiboR time: " << end - start << "\n\n";

	start = clock();
	for (int counter{ 0 }; counter <= e_num; ++counter) fiboL(counter);
	end = clock();
	cout << "fiboL time: " << end - start << "\n";
}

long long fiboR(int number) {
	if (number == 0 || number == 1) return number;
	else return fiboR(number - 2) + fiboR(number - 1);
}

long long fiboL(int number) {
	if (number == 0) return 0;
	if (number == 1) return 1;

	int f0 = 0;
	int f1 = 1;
	int current = 0;
	for (int i = 2; i <= number; i++) {
		current = f0 + f1;
		f0 = f1;
		f1 = current;
	}

	return current;
}