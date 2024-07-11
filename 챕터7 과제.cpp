#include <iostream>
using namespace std;

class Score {
private:
	int score1, score2, score3; //�� ���� ������ ������ ��� ����
public:
	Score(); //�⺻ ������
	Score(int scr1, int scr2, int scr3); //�Ű����� ������
	Score(const Score& scr1, const Score& scr2, const Score& scr3); //���� ������
	~Score(); //�Ҹ���

	void print();
	int sum();
};

int main() {
	Score student1{};
	student1.print(); 

	Score student2{10, 20, 30};
	student2.print();

	Score student3{student2};
	student3.print();

	cout << student1.sum() << "\n";
	cout << student2.sum() << "\n";
	cout << student3.sum() << "\n";
}

Score::Score() : score1{ 0 }, score2{ 1 }, score3{ 2 } { //���� �Է��� ���ٸ� 0, 1, 2�� ������ �ʱ�ȭ

}

Score::Score(int scr1, int scr2, int scr3) : score1{ scr1 }, score2{ scr2 }, score3{ scr3 } { //�Ű������� �Է¹��� �� ��� ������ ����

}

Score::Score(const Score& scr1, const Score& scr2, const Score& scr3) : score1{ scr1.score1 }, score2{ scr2.score2 }, score3{ scr3.score3 } {

}

Score::~Score() {

}

void Score::print() {
	cout << score1 << " " << score2 << " " << score3 << "\n";
}

int Score::sum() {
	return score1 + score2 + score3;
}