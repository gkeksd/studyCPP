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

	cout << "<1999 ���� �ƽþ� ���� ���� ��� ��긣 �����>\n������ �Է��ϼ���: ";
	cin >> winpoint;

	srand(time(0)); //seed �� ����

	game(score1, score2, winpoint); //��⸦ �����ϴ� �Լ�

	winner(score1, score2, winpoint); //���ڸ� �����ϴ� �Լ�
}

int game(int& x, int& y, int& z) {
	int act;
	while (x < z || y < z) { //������ ������ ������ �����ϸ� �ݺ��� ����
		cout << "������ �����ϼ���.\n1. ���� 2. ���� 3. ���\n";
		cin >> act;
		int act1 = (1 + rand() % 3);
		cout << "���� �ൿ: " << act << " , ������ �ൿ: " << act1 << "\n";
		if ((act == 1 && act1 == 2) || (act == 2 && act1 == 3) || (act == 3 && act1 == 1)) ++x;
		else if ((act == 3 && act1 == 2) || (act == 2 && act1 == 1) || (act == 1 && act1 == 3)) ++y;

		cout << "���� ����: " << x << ", ������ ����: " << y << "\n\n";

		if (x == z || y == z) return x, y; //pass by reference ������� �Ű������� �����߱⿡ ���� ���ڿ��� �ٲ� ���� �����
	}

}

void winner(int& x, int& y, int& z) {
	if (x == z) cout << "���� �ݸ޴�!!";
	else if (y == z) cout << "������ �ݸ޴�!!";
}