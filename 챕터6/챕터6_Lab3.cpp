#include <iostream>
#include <ctime>
using namespace std;

void rollDice(int x, int y, int z);

int main() {
	int act = 0;
	int act1 = 0;
	int point = 0;

	rollDice(act, act1, point);
}

void rollDice(int x, int y, int z) {
	srand(time(0));
	for(int i = 0; ; i++) {
		x = 1 + rand() % 6;
		y = 1 + rand() % 6;

		cout << "player rolled " << x << " + " << y << " = " << x + y << "\n";

		if (i == 0) {
			if (((x + y )== 7) || ((x + y) == 11)) {
				cout << "\nPlayer Wins.";
				break;
			}
			else if ((x + y) == 2 || (x + y) == 3 || (x + y) == 12) {
				cout << "\nPlayer loses.";
				break;
			}
			else {
				z = x + y;
				cout << "\nPoint is " << z << "\n";
			}
		}
		else {
			if ((x + y) == z) {
				cout << "Player wins.";
				break;
			}
			else if (i == 1 && (x + y) == 7) {
				cout << "Player loses.";
				break;
			}
		}
	}
}