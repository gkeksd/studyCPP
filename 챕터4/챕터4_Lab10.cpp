#include <print>
#include <iostream>
using namespace std;

int main() {
	int days, addDay;

	print("������ ������ �Է��ϼ���(������: 1, ȭ����: 2, ... �����: 6, �Ͽ���: 7): ");
	cin >> days;
	print("�� �� �ڸ� ����Ͻðڽ��ϱ�?: ");
	cin >> addDay;

	int afterDay = days % 7 + (addDay % 7);

	switch (afterDay) {
	case 1: print("������!"); break;
	case 2: print("ȭ����!"); break;
	case 3: print("������!"); break;
	case 4: print("�����!"); break;
	case 5: print("�ݿ���!"); break;
	case 6: print("�����!"); break;
	case 0: print("�Ͽ���!"); break;
	case 7: print("�Ͽ���!"); break;
	}
}