#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
	string name1, name2, name3;
	unsigned int plus1, plus2, plus3;
	int minus1, minus2, minus3;

	// �̸�, ����, ������ ���� �Է¹޴� �ڵ�
	cout << "�̸�, ����, ����: ";
	cin >> name1 >> plus1 >> minus1;
	cout << "�̸�, ����, ����: ";
	cin >> name2 >> plus2 >> minus2;
	cout << "�̸�, ����, ����: ";
	cin >> name3 >> plus3 >> minus3;

	// ���� ���. 
	cout << setw(10) << left << "�̸�" << " " << setw(5) << right << "����" << " " << setw(5) << right << "����" << endl; //���� �ִ� �Է� ���� �ڸ�����ŭ setw ���� ��
	cout << setw(10) << left << name1 << " " << setw(5) << right << plus1 << " " << setw(5) << right << minus1 << endl; //�̸��� ��������, 
	cout << setw(10) << left << name2 << " " << setw(5) << right << plus2 << " " << setw(5) << right << minus2 << endl; //���԰� ������ ��������.
	cout << setw(10) << left << name3 << " " << setw(5) << right << plus3 << " " << setw(5) << right << minus3 << endl << endl; //���̻��̸��� ��ĭ�� ������ ��.

	// ����� �ܾ� ���
	cout << "�ܾ� = " << static_cast<int>(plus1) + minus1 << " (" << name1 << ")" << endl; // unsigned int���� int ������ ��ȯ
	cout << "�ܾ� = " << static_cast<int>(plus2) + minus2 << " (" << name2 << ")" << endl;
	cout << "�ܾ� = " << static_cast<int>(plus3) + minus3 << " (" << name3 << ")" << endl;
}