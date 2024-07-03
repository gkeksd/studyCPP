#include <iostream>
using namespace std;

int lcm(int num1, int num2);
int gcm(int num1, int num2);

int main() {
	int numerator1, denomenator1, numerator2, denomenator2;
	cout << "input numerator1: ";
	cin >> numerator1;
	cout << "input denomenator1: ";
	cin >> denomenator1;
	cout << "input numerator2: ";
	cin >> numerator2;
	cout << "input denomenator2: ";
	cin >> denomenator2;

	int numerator3 = numerator1 * (lcm(denomenator1, denomenator2) / denomenator1) + numerator2 * (lcm(denomenator1, denomenator2) / denomenator2);
	int denomenator3 = lcm(denomenator1, denomenator2);

	cout << "fraction1: " << numerator1 << "/" << denomenator1 << "\n";
	cout << "fraction2: " << numerator2 << "/" << denomenator2 << "\n";
	int ggg = gcm(numerator3, denomenator3);
	cout << "fraction1 + fraction2 = " << numerator3 << "/" << denomenator3 << " = " << numerator3 / gcm(numerator3, denomenator3) << "/";
	cout << denomenator3 / gcm(numerator3, denomenator3);
}

int lcm(int num1, int num2) {
	for (int i = 1; i <= num2; i++) {
		for (int j = 1; j <= num1; j++) {
			if (i * num1 == j * num2) return i * num1;
		}
	}
}

int gcm(int num1, int num2) {
	for (int i = 1; i <= num1; i++) {
		for (int j = 1; j <= num2; j++) {
			if (num1 % i == num2 % j && num1 / i == num2 / j) 
				return num1 / i;
		}
	}
}