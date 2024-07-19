#include <iostream>
using namespace std;

class Fraction {
private:
    double numerator, denominator;
public:
    Fraction();
    Fraction(double num, double den);
    void printFrac() const;
    bool operator>(const Fraction& other) const;
    double value() const;  // 분수의 값을 계산하는 함수
};

Fraction::Fraction() : numerator{ 0 }, denominator{ 1 } {}

Fraction::Fraction(double num, double den) : numerator{ num }, denominator{ den } {}

void Fraction::printFrac() const {
    std::cout << numerator << "/" << denominator;
}

bool Fraction::operator>(const Fraction& other) const {
    return this->value() > other.value();
}

double Fraction::value() const {
    return numerator / denominator;
}

void swap(Fraction* p1, Fraction* p2) {
    Fraction temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}

void bubble_sort(Fraction numbers[], int size) {
    for (int i = 0; i < size - 1; ++i) {
        for (int j = 0; j < size - 1 - i; ++j) {  // 이미 정렬된 부분을 제외하도록 -i 추가
            if (numbers[j] > numbers[j + 1]) swap(&numbers[j], &numbers[j + 1]);
        }
    }
}

int main() {
    double num, den;
    const int SIZE = 4;
    Fraction frac[SIZE];

    for (int i = 0; i < SIZE; ++i) {
        std::cout << "Input numerator and denominator: ";
        cin >> num >> den;
        frac[i] = Fraction{ num, den };
    }

    bubble_sort(frac, SIZE);

    std::cout << "Sorted fractions: ";
    for (int i = 0; i < SIZE; ++i) {
        frac[i].printFrac();
        std::cout << " ";
    }

    return 0;
}
