#include <iostream>
#include <array>
using namespace std;

void reverse(array<array<int, 4>, 3>& a);
void printArr(const array<array<int, 4>, 3>& a);

int main() {
	array<array<int, 4>, 3> original = { { {1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12} } }; //2차원 std::array 배열. std::array로 초기화하면 밖에 중괄호 하나 더 필요함
	printArr(original);
	reverse(original);

	cout << "\n\n\n";

	printArr(original);
}

void reverse(array<array<int, 4>, 3>& a) {
	array<array<int, 4>, 2> b;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++) {
			if ((i < 2 && j < 2) || (i < 1 && j < 4)) { //1행 전체와 2행의 앞의 두 열의 요소는
				b[i][j] = a[i][j]; //b 배열로 복사해 둔 후
				a[i][j] = a[2 - i][3 - j]; //반대쪽 요소에 덮어쓰고
			}
			else {
				a[i][j] = b[2 - i][3 - j]; //나머지 뒤의 요소들은 덮어써 두었던 b 배열의 요소로 대체
			}
		}
	}
}

void printArr(const array<array<int, 4>, 3>& a) {
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++) {
			cout << a[i][j] << " ";
			if ((i == 0 && j == 3) || (i == 1 && j == 3)) cout << "\n";
		}
	}
}