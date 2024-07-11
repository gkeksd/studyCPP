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
	int t = time(0) + 9 * 3600; //�ѱ� �ð��� ���� ǥ�ؽú��� 9�ð� ����
	int hours = t / 3600 % 24;
	int minutes = t % 3600 / 60;
	int seconds = t % 60;

	Time time{ hours, minutes, seconds };
	cout << "����ð�: ";
	time.print();

	cout << "100000�� ������: ";
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