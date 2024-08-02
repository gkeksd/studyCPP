#include <iostream>
using namespace std;

int main() {
	int mSquare[3][3];
	int sum = 0;
	bool tf = true;
	for (int i = 0; i < 3; i++) cin >> mSquare[i][0] >> mSquare[i][1] >> mSquare[i][2];

	sum = mSquare[0][0] + mSquare[0][1] + mSquare[0][2];

	for (int i = 0; i < 3; i++) {
		(sum == mSquare[i][0] + mSquare[i][1] + mSquare[i][2]) ? tf = true : tf = false;
		(sum == mSquare[0][i] + mSquare[1][i] + mSquare[2][i]) ? tf = true : tf = false;
	}
	(sum == mSquare[0][0] + mSquare[1][1] + mSquare[2][2] || sum == mSquare[0][2] + mSquare[1][1] + mSquare[2][0]) ? tf = true : tf = false;

	(tf) ? cout << "마방진입니다." : cout << "마방진이 아닙니다.";
}