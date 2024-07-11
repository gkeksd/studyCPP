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
	cout << "이름을 입력해 주세요: ";
	cin >> name;
	return name;
}

double Score::getPoint() {
	cout << "승리 경기 수를 입력해 주세요: ";
	cin >> win;
	cout << "무승부 경기 수를 입력해 주세요: ";
	cin >> draw;
	cout << "패배 경기 수를 입력해 주세요: ";
	cin >> lose;
	cout << "\n";

	return win, draw, lose;
}

void Score::printRecords() {
	cout << "이름: " << name << "\n역대전적: " << win << "승 " << draw << "무 " << lose << "패\n";
	cout << "승점: " << win * 1 + draw * 0.5 << "점\n\n";
}