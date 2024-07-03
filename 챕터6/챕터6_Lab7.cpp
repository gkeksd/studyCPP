#include <iostream>
#include <ctime>
using namespace std;

int factorialR(int number);
int factorialL(int number);

int main() {
	clock_t start, end;
	start = clock();
	for (int counter{ 0 }; counter <= 3000; ++counter) factorialR(counter);
	end = clock();
	cout << "factorialR time: " << end - start << "\n\n";

	start = clock();
	for (int counter{ 0 }; counter <= 3000; ++counter) factorialL(counter);
	end = clock();
	cout << "factorialL time: " << end - start << "\n";
}

int factorialR(int number) {
	if (number <= 1) {
		return 1;
	}
	return number * factorialR(number - 1);
}

int factorialL(int number) {
	int sum = number;
	for (int i = number; i >= 1; i--) {
		sum *= number - 1;
	}
	return sum;
}