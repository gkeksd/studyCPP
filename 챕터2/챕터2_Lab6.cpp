#include <print>
#include <iostream>
#include <string>
using namespace std;

int main() {
	string name;
	int age;
	float l_vis, r_vis;
	bool glass;

	print("�̸��� �Է����ּ���: ");
	cin >> name;
	print("���̸� �Է����ּ���: ");
	cin >> age;
	print("���ʰ� ������ �÷��� ���� �Է����ּ���: ");
	cin >> l_vis;
	cin >> r_vis;
	print("�Ȱ� ���� ���θ� �Է����ּ���(True=1 / False=0)");
	cin >> glass;

	print("����� �̸��� {}�Դϴ�\n���̴� {}���̸�,\n�÷��� ���� ���ʰ� �������� {}, {}�Դϴ�\n", name, age, l_vis, r_vis);
	print("�Ȱ� ���� ����: {}", glass);
}