#include <iostream>
#include <climits>
using namespace std;

class Stats {
private:
	int min, max, size, total;
public:
	Stats();
	void addNumber(int num);
	int getMin();
	int getMax();
	int getTotal();
	double getAverage();
};

int main() {
	Stats stats1;
	int num, n;
	cout << "숫자의 개수를 입력해주세요: ";
	cin >> num;

	for (int i = 0; i < num; i++) {
		cout << i + 1 << "번째 숫자를 입력하세요: ";
		cin >> n;
		stats1.addNumber(n);
	}

	cout << "최솟값: " << stats1.getMin() << "\n최댓값: " << stats1.getMax() << "\n";
	cout << "총합: " << stats1.getTotal() << "\n평균: " << stats1.getAverage();
}

Stats::Stats() : min{ INT_MAX }, max{ INT_MIN }, total{ 0 }, size{ 0 } {}

void Stats::addNumber(int num) {
	if (num >= 10 || num <= -10) {
		total += num;
		size++;
		if (num < min) min = num;
		if (num > max) max = num;
	}
}
int Stats::getMin() { return min; }
int Stats::getMax() { return max; }
int Stats::getTotal() { return total; }
double Stats::getAverage() { return static_cast<double>(total) / static_cast<double>(size); }