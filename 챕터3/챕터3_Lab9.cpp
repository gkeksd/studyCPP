#include <print>
#include <iostream>
using namespace std;

int main() {
	int notebook;

	print("��Ʈ���� ����: ");
	cin >> notebook;

	int backpack = (notebook + 3) / 4; //��Ʈ���� 1���� �� 1 + 3 = 4�� ������ 1���̹Ƿ� (��Ʈ�� + 3) / 4

	print("�ʿ��� ������ ������ {}���Դϴ�.", backpack);
}