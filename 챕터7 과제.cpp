#include <iostream>
using namespace std;

class Score {
private:
	int score1, score2, score3; //세 과목 점수를 저장할 멤버 변수
public:
	Score(); //기본 생성자
	Score(int scr1, int scr2, int scr3); //매개변수 생성자
	Score(const Score& scr1, const Score& scr2, const Score& scr3); //복사 생성자
	~Score(); //소멸자

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

Score::Score() : score1{ 0 }, score2{ 1 }, score3{ 2 } { //점수 입력이 없다면 0, 1, 2로 점수를 초기화

}

Score::Score(int scr1, int scr2, int scr3) : score1{ scr1 }, score2{ scr2 }, score3{ scr3 } { //매개변수로 입력받은 값 멤버 변수로 저장

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