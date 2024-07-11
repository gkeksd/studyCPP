#include <iostream>
using namespace std;

class Score {
private:
	string name;
	int win, draw, lose;
public:
	Score(string n, int w, int d, int l);
	void printRecords();
	double getPoint();
	string getName();
};

int main() {
	string n;
	int w = 0;
	int d = 0;
	int l = 0;
	Score score1{ n, w, d, l };
	score1.getName();
	score1.getPoint();

	Score score2{ n, w, d, l };
	score2.getName();
	score2.getPoint();

	score1.printRecords();
	score2.printRecords();
}

Score::Score(string n, int w, int d, int l) : name{ n }, win{ w }, draw{ d }, lose{ l } {

}

string Score::getName() {
	cout << "�̸��� �Է��� �ּ���: ";
	cin >> name;
	return name;
}

double Score::getPoint() {
	cout << "�¸� ��� ���� �Է��� �ּ���: ";
	cin >> win;
	cout << "���º� ��� ���� �Է��� �ּ���: ";
	cin >> draw;
	cout << "�й� ��� ���� �Է��� �ּ���: ";
	cin >> lose;
	cout << "\n";

	return win, draw, lose;
}

void Score::printRecords() {
	cout << "�̸�: " << name << "\n��������: " << win << "�� " << draw << "�� " << lose << "��\n";
	cout << "����: " << win * 1 + draw * 0.5 << "��\n\n";
}