#include <print>
#include <iostream>
using namespace std;

int main() {
	char Alp1, Alp2;

	print("�빮�� ���ĺ� �ΰ��� ������� �Է��ϼ���: ");
	cin >> Alp1;
	cin >> Alp2;

	int bett = Alp2 - Alp1 - 1; //���ĺ� �ΰ� ������ ���ĺ� ���ڸ� ���ϴ� ���̹Ƿ� 1�� �߰��� ��

	print("�� ������ ���̿��� {}���� ���ڰ� �����մϴ�.", bett);
}