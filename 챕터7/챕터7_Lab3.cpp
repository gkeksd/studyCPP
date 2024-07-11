#include <iostream>
using namespace std;

class Visitors {
private:
	int sum = 0;
public:
	Visitors(int number);
	~Visitors();
	 void visit();
};

int main() {
	int n;
	cout << "입장한 사람 수를 기록해주세요: ";
	cin >> n;

	Visitors visitors{ n };

	visitors.visit();
}

Visitors::Visitors(int number) {
	sum += number;
}

Visitors::~Visitors() {
	cout << "오늘의 입장객 수는 " << sum << "명입니다.";
}

void Visitors::visit() {
	int number;
	while (
		cout << "입장한 사람 수를 기록해주세요(종료시 EOF): ") {
		if (cin >> number) {
			if (number >= 0) sum += number;
		}
		else if (cin.eof()) {
			break;
		}
	}
}