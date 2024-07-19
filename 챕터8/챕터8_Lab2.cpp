#include <iostream>
#include <array>
using namespace std;

void reverse(array<array<int, 4>, 3>& a);
void printArr(const array<array<int, 4>, 3>& a);

int main() {
	array<array<int, 4>, 3> original = { { {1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12} } }; //2���� std::array �迭. std::array�� �ʱ�ȭ�ϸ� �ۿ� �߰�ȣ �ϳ� �� �ʿ���
	printArr(original);
	reverse(original);

	cout << "\n\n\n";

	printArr(original);
}

void reverse(array<array<int, 4>, 3>& a) {
	array<array<int, 4>, 2> b;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++) {
			if ((i < 2 && j < 2) || (i < 1 && j < 4)) { //1�� ��ü�� 2���� ���� �� ���� ��Ҵ�
				b[i][j] = a[i][j]; //b �迭�� ������ �� ��
				a[i][j] = a[2 - i][3 - j]; //�ݴ��� ��ҿ� �����
			}
			else {
				a[i][j] = b[2 - i][3 - j]; //������ ���� ��ҵ��� ����� �ξ��� b �迭�� ��ҷ� ��ü
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