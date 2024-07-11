#include <iostream>
#include <ctime>
using namespace std;

class Time {
private:
	int h, m, s;
public:
	Time(int h, int m, int s);
	void print() const;
	void tick();
};

int main() {
	int t = time(0) + 9 * 3600; //한국 시간은 국제 표준시보다 9시간 빠름
	int hours = t / 3600 % 24;
	int minutes = t % 3600 / 60;
	int seconds = t % 60;

	Time time{ hours, minutes, seconds };
	cout << "현재시간: ";
	time.print();

	cout << "100000초 지나면: ";
	for (int i = 0; i < 100000; i++) time.tick();
	time.print();
}

Time::Time(int h, int m, int s) : h{h}, m{m}, s{s} {}

void Time::print() const {
	cout << h << ":" << m << ":" << s << "\n";
}

void Time::tick() {
	s++;
	if (s > 59) {
		s = 0;
		m++;
	}
	if (m > 59) {
		m = 0;
		h++;
	}
	if (h > 23) {
		h = 0;
	}
}