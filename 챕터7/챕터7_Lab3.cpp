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
	cout << "������ ��� ���� ������ּ���: ";
	cin >> n;

	Visitors visitors{ n };

	visitors.visit();
}

Visitors::Visitors(int number) {
	sum += number;
}

Visitors::~Visitors() {
	cout << "������ ���尴 ���� " << sum << "���Դϴ�.";
}

void Visitors::visit() {
	int number;
	while (
		cout << "������ ��� ���� ������ּ���(����� EOF): ") {
		if (cin >> number) {
			if (number >= 0) sum += number;
		}
		else if (cin.eof()) {
			break;
		}
	}
}