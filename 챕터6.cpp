#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int game(int& x, int& y, int& z);
void winner(int& x, int& y, int& z);

int main() {
	int winpoint;
	int score1 = 0;
	int score2 = 0;

	cout << "<1999 경주 아시안 게임 여자 펜싱 사브르 결승전>\n승점을 입력하세요: ";
	cin >> winpoint;

	srand(time(0)); //seed 값 선언

	game(score1, score2, winpoint); //경기를 진행하는 함수

	winner(score1, score2, winpoint); //승자를 판정하는 함수
}

int game(int& x, int& y, int& z) {
	int act;
	while (x < z || y < z) { //한쪽의 점수가 승점에 도달하면 반복을 종료
		cout << "동작을 선택하세요.\n1. 막기 2. 베기 3. 찌르기\n";
		cin >> act;
		int act1 = (1 + rand() % 3);
		cout << "나희도 행동: " << act << " , 고유림 행동: " << act1 << "\n";
		if ((act == 1 && act1 == 2) || (act == 2 && act1 == 3) || (act == 3 && act1 == 1)) ++x;
		else if ((act == 3 && act1 == 2) || (act == 2 && act1 == 1) || (act == 1 && act1 == 3)) ++y;

		cout << "나희도 점수: " << x << ", 고유림 점수: " << y << "\n\n";

		if (x == z || y == z) return x, y; //pass by reference 방식으로 매개변수를 선언했기에 원래 인자에도 바뀐 값이 적용됨
	}

}

void winner(int& x, int& y, int& z) {
	if (x == z) cout << "나희도 금메달!!";
	else if (y == z) cout << "고유림 금메달!!";
}